#include <Timer.h>
#include "Message.h"

configuration SenseC
{
}

implementation
{
	components SenseP, MainC, LedsC;
	components new TimerMilliC() as Timer;
	components ActiveMessageC;
	components new AMSenderC(AM_SENSEMSG) as SenseSender;
	components new AMReceiverC(AM_SENSEMSG) as SenseReceiver;
	components new AMSenderC(AM_HOPMSG) as HopSender;
	components new AMReceiverC(AM_HOPMSG) as HopReceiver;
    components new SensirionSht11C() as SHT11C;
    components new HamamatsuS1087ParC() as LightC;
    
    
	SenseP.Boot -> MainC.Boot;
	SenseP.Leds -> LedsC.Leds;
	SenseP.Timer -> Timer.Timer;
	SenseP.Packet -> SenseSender;
	SenseP.SenseSend -> SenseSender;
	SenseP.AMControl -> ActiveMessageC.SplitControl;
    SenseP.Temperature -> SHT11C.Temperature;
    SenseP.Humidity -> SHT11C.Humidity;
    SenseP.Light -> LightC;
    SenseP.SenseReceive -> SenseReceiver;
    SenseP.HopSend -> HopSender;
    SenseP.HopReceive -> HopReceiver;
    
}
