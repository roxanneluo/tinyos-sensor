#ifndef MESSAGE_H
#define MESSAGE_H

typedef nx_struct SenseMsg
{
	nx_uint16_t nodeid;
	nx_uint16_t temperature;
	nx_uint16_t humidity;
	nx_uint16_t light;
} SenseMsg;

enum{
    SAMPLE_FREQUENCY = 1000,
    AM_SENSEMSG = 6
};

#endif
