
#ifndef MESSAGE_H
#define MESSAGE_H

typedef nx_struct SenseMsg
{
	nx_uint16_t seqnum;
	nx_uint16_t nodeid;
	nx_uint16_t temperature;
	nx_uint16_t humidity;
	nx_uint16_t light;
} SenseMsg;

typedef nx_struct HopMsg {
	nx_uint16_t nodeid;
	nx_uint16_t len;
} HopMsg;

enum{
    SAMPLE_FREQUENCY = 1000,
    AM_SENSEMSG = 6,
    AM_HOPMSG = 7,
    NODE_NUM = 4,
    INF = 4
};


#endif
