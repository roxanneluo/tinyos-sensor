COMPONENT=SenseC
BUILD_EXTRA_DEPS += SenseMsg.class HopMsg.class MsgReader.class
CLEAN_EXTRA = *.class SenseMsg.java HopMsg.java

MsgReader.class: MsgReader.java
	javac MsgReader.java
SenseMsg.class: SenseMsg.java
	javac SenseMsg.java
HopMsg.class: HopMsg.java
	javac HopMsg.java

SenseMsg.java:
	mig java -target=null -java-classname=SenseMsg Message.h SenseMsg -o $@
HopMsg.java:
	mig java -target=null -java-classname=HopMsg Message.h HopMsg -o $@

include $(MAKERULES)