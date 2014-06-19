This folder is orgnized as follows

SenseP.nc	//the SenseP module where we implement the sensing function and network protocol
SenseC.nc	// Specifies the configuration 
Message.h	// the header which defines the message format and some constants
Makefile	// makefile for this Sense part only.
MsgReader.java	// it reads the messages from sink's serial port
BaseStation2	// the code for sink, which transfer the message received from the radio to the serial port.
	BaseStationC.nc
	BaseStationP.nc
	makefile 	// makefile for the BaseStation Part only.
broadcast version	// the sensor code of previous broadcasting version
	SenseP.nc
	SenseC.nc
report		// our report
	rep.pdf 
	rep.tex



HOW TO RUN IT?
1.	cd BaseStation2
	make telosb install,0 bsl,$SerialPortOfSink

	This makes the code for the sink and install it in the platform@$SerialPortOfSink


1.	make telosb install,$nodeid bsl,$serialport
	
	It makes and installs the program in the telosb platform@$serialport. And specify the mote id to be $nodeid. Moreover, it generates the SenseMsg.class, HopMsg.class, MsgReader.class. 

2. 	java MsgReader SenseMsg
	
	the MsgReader reads the SenseMsg (the message of sensed data, tempreture, light, humidity), display it on the terminal and stores it in the data@$currentTime.


	