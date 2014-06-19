/*****
 * 2blue       1           0 red
 * sendPacket  sendHop     receiveHop
 ********
 * version 2
 * set led to indicate its lastFirstHop
******/
#include <Timer.h>
#include "Message.h"

module SenseP
{
	uses{
		interface Boot;
		interface Leds;
		interface Timer<TMilli>;
		interface SplitControl as AMControl;
		interface Packet;
        interface AMSend as SenseSend;
        interface AMSend as HopSend;
        interface Receive as SenseReceive;
        interface Receive as HopReceive;
        interface Read<uint16_t> as Temperature;
        interface Read<uint16_t> as Humidity;
        interface Read<uint16_t> as Light;
        
        
        
	}
}


implementation
{
    message_t sensePkt;
    message_t hopPkt;
    bool busy = FALSE;
    uint16_t temperature;
    uint16_t humidity;
    uint16_t light;
    uint16_t seqnum = 0;
    uint16_t firstHop = 0;
    uint16_t lastFirstHop = 0;
    uint16_t lastLen = INF;
    uint16_t len = INF;
    

    void prepareSenseMsg() {
        SenseMsg* msg = (SenseMsg*)(call Packet.getPayload(&sensePkt, NULL));
        msg -> seqnum = ++seqnum; 
        if (seqnum == 0) msg -> seqnum = ++seqnum;
        msg -> nodeid = TOS_NODE_ID;
        msg -> temperature = temperature;
        msg -> humidity = humidity;
        msg -> light = light;
    }
    
    void resetHop() {
        //static bool resetFlag = FALSE;
        firstHop = 0;
        len = INF;
        /*if (resetFlag)
            call Leds.set(0xff);
        else
            call Leds.set(0);
        resetFlag = !resetFlag;*/
    }
    void sendPacket(message_t* pkt) {
        if (lastLen >= INF) return;
        if((call SenseSend.send(lastFirstHop, pkt, sizeof(SenseMsg))) == SUCCESS)
        {
            busy = TRUE;
            switch(lastFirstHop) {
                case 0: call Leds.led0Toggle(); break;
                case 1: call Leds.led1Toggle(); break;
                case 2: call Leds.led2Toggle(); break;
            }
            //call Leds.set(lastFirstHop);
        }
            
    }
    void sendHop() {
        HopMsg* msg = (HopMsg*)(call Packet.getPayload(&hopPkt, NULL));
        msg -> nodeid = TOS_NODE_ID;
        msg -> len = len;
        if((call HopSend.send(AM_BROADCAST_ADDR, &hopPkt, sizeof(HopMsg))) == SUCCESS)
        {
            busy = TRUE;
            //call Leds.led1Toggle();
        }
    }

    
	event void Boot.booted()
	{
        call AMControl.start();
	}

    event void AMControl.startDone(error_t error)
    {
        if(error == SUCCESS)
            call Timer.startPeriodic(SAMPLE_FREQUENCY);
        else
            call AMControl.start();
        

    }
    event message_t* SenseReceive.receive(message_t* msg, void* payload, uint8_t l) {
        if (l == sizeof(SenseMsg)) {
            SenseMsg *sense = (SenseMsg*)payload;
            atomic{
                if (sense->nodeid != lastFirstHop && !busy) {
                    sendPacket(msg);
                }
            }
        }
       
      return msg;
    }
    event message_t* HopReceive.receive(message_t* msg, void* payload, uint8_t l) {
        if (l == sizeof(HopMsg)) {
            atomic {
                HopMsg *hop = (HopMsg*)payload;
                if (hop->len+1 < len) {
                    len = hop->len+1;
                    firstHop = hop->nodeid;
                }
            }
            // call Leds.led0Toggle();
        }
     
      return msg;
    }

    event void AMControl.stopDone(error_t error)
    {
    }
    
    bool reset =FALSE;
	event void Timer.fired()
	{   
        //static bool reset = FALSE;
        call Temperature.read();
        call Humidity.read();
        call Light.read();
        atomic {
            lastFirstHop = firstHop;
            lastLen = len;
            if(!busy) {
                sendHop();
            }
            if (reset)
                resetHop();
            reset = !reset;
            
        }
        
	}
    
  
    event void Temperature.readDone(error_t error, uint16_t data)
    {
        temperature = data;
    }

    event void Humidity.readDone(error_t error, uint16_t data)
    {
        humidity = data;
    }

    event void Light.readDone(error_t error, uint16_t data)
    {
        light = data;
    }
    

    event void HopSend.sendDone(message_t* msg, error_t error)
    {
        if(&hopPkt == msg)
        {
            atomic {
                busy = FALSE;
            
                //call Leds.led1Toggle();
           
                prepareSenseMsg();
                sendPacket(&sensePkt); //what if it's always busy? what if resend makes it busy?
            }
        }
    }
    event void SenseSend.sendDone(message_t* msg, error_t error)
    {
        //if(&sensePkt == msg)
        //{
            busy = FALSE;
            // call Leds.led2Toggle();
            
        //}
    }
    

}
