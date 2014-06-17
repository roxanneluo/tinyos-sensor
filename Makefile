COMPONENT=SenseC
BUILD_EXTRA_DEPS += SenseMsg.class
CLEAN_EXTRA = *.class SenseMsg.java

SenseMsg.class: SenseMsg.java
	javac *.java

SenseMsg.java:
	mig java -target=null -java-classname=SenseMsg Message.h SenseMsg -o $@
include $(MAKERULES)