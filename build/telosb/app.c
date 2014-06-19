#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 151 "/usr/local/Cellar/stow/2.2.0/lib/gcc-lib/msp430/3.2.3/include/stddef.h" 3
typedef int ptrdiff_t;
#line 213
typedef unsigned int size_t;
#line 325
typedef int wchar_t;
# 8 "/usr/local/Cellar/stow/2.2.0/repository/nesc-1.3.4/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 38 "/usr/local/Cellar/stow/2.2.0/lib/gcc-lib/../../msp430/include/sys/inttypes.h" 3
typedef signed char int8_t;
typedef unsigned char uint8_t;

typedef int int16_t;
typedef unsigned int uint16_t;

typedef long int32_t;
typedef unsigned long uint32_t;

typedef long long int64_t;
typedef unsigned long long uint64_t;




typedef int16_t intptr_t;
typedef uint16_t uintptr_t;
# 281 "/usr/local/Cellar/stow/2.2.0/repository/nesc-1.3.4/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;





static __inline uint8_t __nesc_ntoh_leuint8(const void * source)  ;




static __inline uint8_t __nesc_hton_leuint8(void * target, uint8_t value)  ;





static __inline int8_t __nesc_ntoh_int8(const void * source)  ;
#line 303
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;






static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;






static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;
#line 340
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 41 "/usr/local/Cellar/stow/2.2.0/lib/gcc-lib/../../msp430/include/sys/types.h" 3
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef unsigned short ushort;
typedef unsigned int uint;

typedef uint8_t u_int8_t;
typedef uint16_t u_int16_t;
typedef uint32_t u_int32_t;
typedef uint64_t u_int64_t;

typedef u_int64_t u_quad_t;
typedef int64_t quad_t;
typedef quad_t *qaddr_t;

typedef char *caddr_t;
typedef const char *c_caddr_t;
typedef volatile char *v_caddr_t;
typedef u_int32_t fixpt_t;
typedef u_int32_t gid_t;
typedef u_int32_t in_addr_t;
typedef u_int16_t in_port_t;
typedef u_int32_t ino_t;
typedef long key_t;
typedef u_int16_t mode_t;
typedef u_int16_t nlink_t;
typedef quad_t rlim_t;
typedef int32_t segsz_t;
typedef int32_t swblk_t;
typedef int32_t ufs_daddr_t;
typedef int32_t ufs_time_t;
typedef u_int32_t uid_t;
# 40 "/usr/local/Cellar/stow/2.2.0/lib/gcc-lib/../../msp430/include/string.h" 3
extern void *memset(void *arg_0x1068ac5d8, int arg_0x1068ac840, size_t arg_0x1068acae8);
#line 61
extern void *memset(void *arg_0x1068be868, int arg_0x1068bead0, size_t arg_0x1068bed78);
# 59 "/usr/local/Cellar/stow/2.2.0/lib/gcc-lib/../../msp430/include/stdlib.h" 3
#line 55
typedef struct __nesc_unnamed4242 {

  int quot;
  int rem;
} div_t;







#line 63
typedef struct __nesc_unnamed4243 {

  long quot;
  long rem;
} ldiv_t;
# 122 "/usr/local/Cellar/stow/2.2.0/lib/gcc-lib/../../msp430/include/sys/config.h" 3
typedef long int __int32_t;
typedef unsigned long int __uint32_t;
# 12 "/usr/local/Cellar/stow/2.2.0/lib/gcc-lib/../../msp430/include/sys/_types.h" 3
typedef long _off_t;
typedef long _ssize_t;
# 28 "/usr/local/Cellar/stow/2.2.0/lib/gcc-lib/../../msp430/include/sys/reent.h" 3
typedef __uint32_t __ULong;


struct _glue {

  struct _glue *_next;
  int _niobs;
  struct __sFILE *_iobs;
};

struct _Bigint {

  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm {

  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _atexit {
  struct _atexit *_next;
  int _ind;
  void (*_fns[32])(void );
};








struct __sbuf {
  unsigned char *_base;
  int _size;
};






typedef long _fpos_t;
#line 116
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;


  void *_cookie;

  int (*_read)(void *_cookie, char *_buf, int _n);
  int (*_write)(void *_cookie, const char *_buf, int _n);

  _fpos_t (*_seek)(void *_cookie, _fpos_t _offset, int _whence);
  int (*_close)(void *_cookie);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  int _offset;

  struct _reent *_data;
};
#line 174
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;
};









struct _reent {


  int _errno;




  struct __sFILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];

  int _current_category;
  const char *_current_locale;

  int __sdidinit;

  void (*__cleanup)(struct _reent *arg_0x1068f80c8);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union __nesc_unnamed4244 {

    struct __nesc_unnamed4245 {

      unsigned int _unused_rand;
      char *_strtok_last;
      char _asctime_buf[26];
      struct __tm _localtime_buf;
      int _gamma_signgam;
      __extension__ unsigned long long _rand_next;
      struct _rand48 _r48;
    } _reent;



    struct __nesc_unnamed4246 {


      unsigned char *_nextf[30];
      unsigned int _nmalloc[30];
    } _unused;
  } _new;


  struct _atexit *_atexit;
  struct _atexit _atexit0;


  void (**_sig_func)(int arg_0x106903180);




  struct _glue __sglue;
  struct __sFILE __sf[3];
};
#line 273
struct _reent;
# 18 "/usr/local/Cellar/stow/2.2.0/lib/gcc-lib/../../msp430/include/math.h" 3
union __dmath {

  __uint32_t i[2];
  double d;
};




union __dmath;
#line 208
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
  int err;
};
#line 261
enum __fdlibm_version {

  __fdlibm_ieee = -1, 
  __fdlibm_svid, 
  __fdlibm_xopen, 
  __fdlibm_posix
};




enum __fdlibm_version;
# 23 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4247 {
#line 24
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 35
struct __nesc_attr_atleastonce {
};
#line 36
struct __nesc_attr_exactlyonce {
};
# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/types/TinyError.h"
enum __nesc_unnamed4248 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 39 "/usr/local/Cellar/stow/2.2.0/lib/gcc-lib/../../msp430/include/msp430/iostructures.h" 3
#line 27
typedef union port {
  volatile unsigned char reg_p;
  volatile struct __nesc_unnamed4249 {
    unsigned char __p0 : 1, 
    __p1 : 1, 
    __p2 : 1, 
    __p3 : 1, 
    __p4 : 1, 
    __p5 : 1, 
    __p6 : 1, 
    __p7 : 1;
  } __pin;
} __attribute((packed))  ioregister_t;
#line 108
struct port_full_t {
  ioregister_t in;
  ioregister_t out;
  ioregister_t dir;
  ioregister_t ifg;
  ioregister_t ies;
  ioregister_t ie;
  ioregister_t sel;
};









struct port_simple_t {
  ioregister_t in;
  ioregister_t out;
  ioregister_t dir;
  ioregister_t sel;
};




struct port_full_t;



struct port_full_t;



struct port_simple_t;



struct port_simple_t;



struct port_simple_t;



struct port_simple_t;
# 116 "/usr/local/Cellar/stow/2.2.0/lib/gcc-lib/../../msp430/include/msp430/gpio.h" 3
volatile unsigned char P1OUT __asm ("0x0021");

volatile unsigned char P1DIR __asm ("0x0022");

volatile unsigned char P1IFG __asm ("0x0023");

volatile unsigned char P1IES __asm ("0x0024");

volatile unsigned char P1IE __asm ("0x0025");

volatile unsigned char P1SEL __asm ("0x0026");










volatile unsigned char P2OUT __asm ("0x0029");

volatile unsigned char P2DIR __asm ("0x002A");

volatile unsigned char P2IFG __asm ("0x002B");



volatile unsigned char P2IE __asm ("0x002D");

volatile unsigned char P2SEL __asm ("0x002E");










volatile unsigned char P3OUT __asm ("0x0019");

volatile unsigned char P3DIR __asm ("0x001A");

volatile unsigned char P3SEL __asm ("0x001B");










volatile unsigned char P4OUT __asm ("0x001D");

volatile unsigned char P4DIR __asm ("0x001E");

volatile unsigned char P4SEL __asm ("0x001F");










volatile unsigned char P5OUT __asm ("0x0031");

volatile unsigned char P5DIR __asm ("0x0032");

volatile unsigned char P5SEL __asm ("0x0033");










volatile unsigned char P6OUT __asm ("0x0035");

volatile unsigned char P6DIR __asm ("0x0036");

volatile unsigned char P6SEL __asm ("0x0037");
# 97 "/usr/local/Cellar/stow/2.2.0/lib/gcc-lib/../../msp430/include/msp430/usart.h" 3
volatile unsigned char U0CTL __asm ("0x0070");

volatile unsigned char U0TCTL __asm ("0x0071");



volatile unsigned char U0MCTL __asm ("0x0073");

volatile unsigned char U0BR0 __asm ("0x0074");

volatile unsigned char U0BR1 __asm ("0x0075");

volatile unsigned char U0RXBUF __asm ("0x0076");
#line 283
volatile unsigned char U1TCTL __asm ("0x0079");
# 27 "/usr/local/Cellar/stow/2.2.0/lib/gcc-lib/../../msp430/include/msp430/timera.h" 3
volatile unsigned int TA0CTL __asm ("0x0160");

volatile unsigned int TA0R __asm ("0x0170");


volatile unsigned int TA0CCTL0 __asm ("0x0162");

volatile unsigned int TA0CCTL1 __asm ("0x0164");
#line 70
volatile unsigned int TA0CCTL2 __asm ("0x0166");
#line 127
#line 118
typedef struct __nesc_unnamed4250 {
  volatile unsigned 
  taifg : 1, 
  taie : 1, 
  taclr : 1, 
  dummy : 1, 
  tamc : 2, 
  taid : 2, 
  tassel : 2;
} __attribute((packed))  tactl_t;
#line 143
#line 129
typedef struct __nesc_unnamed4251 {
  volatile unsigned 
  ccifg : 1, 
  cov : 1, 
  out : 1, 
  cci : 1, 
  ccie : 1, 
  outmod : 3, 
  cap : 1, 
  dummy : 1, 
  scci : 1, 
  scs : 1, 
  ccis : 2, 
  cm : 2;
} __attribute((packed))  tacctl_t;


struct timera_t {
  tactl_t ctl;
  tacctl_t cctl0;
  tacctl_t cctl1;
  tacctl_t cctl2;
  volatile unsigned dummy[4];
  volatile unsigned tar;
  volatile unsigned taccr0;
  volatile unsigned taccr1;
  volatile unsigned taccr2;
};



struct timera_t;
# 26 "/usr/local/Cellar/stow/2.2.0/lib/gcc-lib/../../msp430/include/msp430/timerb.h" 3
volatile unsigned int TBR __asm ("0x0190");


volatile unsigned int TBCCTL0 __asm ("0x0182");





volatile unsigned int TBCCR0 __asm ("0x0192");
#line 76
#line 64
typedef struct __nesc_unnamed4252 {
  volatile unsigned 
  tbifg : 1, 
  tbie : 1, 
  tbclr : 1, 
  dummy1 : 1, 
  tbmc : 2, 
  tbid : 2, 
  tbssel : 2, 
  dummy2 : 1, 
  tbcntl : 2, 
  tbclgrp : 2;
} __attribute((packed))  tbctl_t;
#line 91
#line 78
typedef struct __nesc_unnamed4253 {
  volatile unsigned 
  ccifg : 1, 
  cov : 1, 
  out : 1, 
  cci : 1, 
  ccie : 1, 
  outmod : 3, 
  cap : 1, 
  clld : 2, 
  scs : 1, 
  ccis : 2, 
  cm : 2;
} __attribute((packed))  tbcctl_t;


struct timerb_t {
  tbctl_t ctl;
  tbcctl_t cctl0;
  tbcctl_t cctl1;
  tbcctl_t cctl2;

  tbcctl_t cctl3;
  tbcctl_t cctl4;
  tbcctl_t cctl5;
  tbcctl_t cctl6;



  volatile unsigned tbr;
  volatile unsigned tbccr0;
  volatile unsigned tbccr1;
  volatile unsigned tbccr2;

  volatile unsigned tbccr3;
  volatile unsigned tbccr4;
  volatile unsigned tbccr5;
  volatile unsigned tbccr6;
};





struct timerb_t;
# 20 "/usr/local/Cellar/stow/2.2.0/lib/gcc-lib/../../msp430/include/msp430/basic_clock.h" 3
volatile unsigned char DCOCTL __asm ("0x0056");

volatile unsigned char BCSCTL1 __asm ("0x0057");

volatile unsigned char BCSCTL2 __asm ("0x0058");
# 18 "/usr/local/Cellar/stow/2.2.0/lib/gcc-lib/../../msp430/include/msp430/adc12.h" 3
volatile unsigned int ADC12CTL0 __asm ("0x01A0");

volatile unsigned int ADC12CTL1 __asm ("0x01A2");
#line 42
#line 30
typedef struct __nesc_unnamed4254 {
  volatile unsigned 
  adc12sc : 1, 
  enc : 1, 
  adc12tovie : 1, 
  adc12ovie : 1, 
  adc12on : 1, 
  refon : 1, 
  r2_5v : 1, 
  msc : 1, 
  sht0 : 4, 
  sht1 : 4;
} __attribute((packed))  adc12ctl0_t;
#line 54
#line 44
typedef struct __nesc_unnamed4255 {
  volatile unsigned 
  adc12busy : 1, 
  conseq : 2, 
  adc12ssel : 2, 
  adc12div : 3, 
  issh : 1, 
  shp : 1, 
  shs : 2, 
  cstartadd : 4;
} __attribute((packed))  adc12ctl1_t;
#line 74
#line 56
typedef struct __nesc_unnamed4256 {
  volatile unsigned 
  bit0 : 1, 
  bit1 : 1, 
  bit2 : 1, 
  bit3 : 1, 
  bit4 : 1, 
  bit5 : 1, 
  bit6 : 1, 
  bit7 : 1, 
  bit8 : 1, 
  bit9 : 1, 
  bit10 : 1, 
  bit11 : 1, 
  bit12 : 1, 
  bit13 : 1, 
  bit14 : 1, 
  bit15 : 1;
} __attribute((packed))  adc12xflg_t;


struct adc12_t {
  adc12ctl0_t ctl0;
  adc12ctl1_t ctl1;
  adc12xflg_t ifg;
  adc12xflg_t ie;
  adc12xflg_t iv;
};




struct adc12_t;
# 83 "/usr/local/Cellar/stow/2.2.0/lib/gcc-lib/../../msp430/include/msp430x16x.h" 3
volatile unsigned char ME1 __asm ("0x0004");





volatile unsigned char ME2 __asm ("0x0005");
# 169 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/msp430hardware.h"
static volatile uint8_t U0CTLnr __asm ("0x0070");
static volatile uint8_t I2CTCTLnr __asm ("0x0071");
static volatile uint8_t I2CDCTLnr __asm ("0x0072");
#line 204
typedef uint8_t mcu_power_t  ;
static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;


enum __nesc_unnamed4257 {
  MSP430_POWER_ACTIVE = 0, 
  MSP430_POWER_LPM0 = 1, 
  MSP430_POWER_LPM1 = 2, 
  MSP430_POWER_LPM2 = 3, 
  MSP430_POWER_LPM3 = 4, 
  MSP430_POWER_LPM4 = 5
};

static inline void __nesc_disable_interrupt(void )  ;





static inline void __nesc_enable_interrupt(void )  ;




typedef bool __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts);






__nesc_atomic_t __nesc_atomic_start(void )   ;







void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts)   ;
#line 259
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
# 8 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/platforms/telosb/hardware.h"
enum __nesc_unnamed4258 {
  TOS_SLEEP_NONE = MSP430_POWER_ACTIVE
};
#line 36
static inline void TOSH_SET_SIMO0_PIN()  ;
#line 36
static inline void TOSH_CLR_SIMO0_PIN()  ;
#line 36
static inline void TOSH_MAKE_SIMO0_OUTPUT()  ;
static inline void TOSH_SET_UCLK0_PIN()  ;
#line 37
static inline void TOSH_CLR_UCLK0_PIN()  ;
#line 37
static inline void TOSH_MAKE_UCLK0_OUTPUT()  ;
#line 79
enum __nesc_unnamed4259 {

  TOSH_HUMIDITY_ADDR = 5, 
  TOSH_HUMIDTEMP_ADDR = 3, 
  TOSH_HUMIDITY_RESET = 0x1E
};



static inline void TOSH_SET_FLASH_CS_PIN()  ;
#line 88
static inline void TOSH_CLR_FLASH_CS_PIN()  ;
#line 88
static inline void TOSH_MAKE_FLASH_CS_OUTPUT()  ;
static inline void TOSH_SET_FLASH_HOLD_PIN()  ;
#line 89
static inline void TOSH_MAKE_FLASH_HOLD_OUTPUT()  ;
# 40 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4260 {
#line 40
  int notUsed;
} 
#line 40
TMilli;
typedef struct __nesc_unnamed4261 {
#line 41
  int notUsed;
} 
#line 41
T32khz;
typedef struct __nesc_unnamed4262 {
#line 42
  int notUsed;
} 
#line 42
TMicro;
# 12 "Message.h"
#line 5
typedef nx_struct SenseMsg {

  nx_uint16_t seqnum;
  nx_uint16_t nodeid;
  nx_uint16_t temperature;
  nx_uint16_t humidity;
  nx_uint16_t light;
} __attribute__((packed)) SenseMsg;




#line 14
typedef nx_struct HopMsg {
  nx_uint16_t nodeid;
  nx_uint16_t len;
} __attribute__((packed)) HopMsg;

enum __nesc_unnamed4263 {
  SAMPLE_FREQUENCY = 1000, 
  AM_SENSEMSG = 6, 
  AM_HOPMSG = 7, 
  NODE_NUM = 4, 
  INF = 4
};
# 43 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/types/Leds.h"
enum __nesc_unnamed4264 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420.h"
typedef uint8_t cc2420_status_t;
#line 93
#line 87
typedef nx_struct security_header_t {
  unsigned char __nesc_filler0[1];


  nx_uint32_t frameCounter;
  nx_uint8_t keyID[1];
} __attribute__((packed)) security_header_t;
#line 113
#line 95
typedef nx_struct cc2420_header_t {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;







  nxle_uint8_t network;


  nxle_uint8_t type;
} __attribute__((packed)) cc2420_header_t;





#line 118
typedef nx_struct cc2420_footer_t {
} __attribute__((packed)) cc2420_footer_t;
#line 143
#line 128
typedef nx_struct cc2420_metadata_t {
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_uint8_t tx_power;
  nx_bool crc;
  nx_bool ack;
  nx_bool timesync;
  nx_uint32_t timestamp;
  nx_uint16_t rxInterval;
} __attribute__((packed)) 





cc2420_metadata_t;





#line 146
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;
  nx_uint8_t data[];
} __attribute__((packed)) cc2420_packet_t;
#line 179
enum __nesc_unnamed4265 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 28 + MAC_FOOTER_SIZE, 

  CC2420_SIZE = MAC_HEADER_SIZE + MAC_FOOTER_SIZE, 

  AM_OVERHEAD = 2
};

enum cc2420_enums {
  CC2420_TIME_ACK_TURNAROUND = 7, 
  CC2420_TIME_VREN = 20, 
  CC2420_TIME_SYMBOL = 2, 
  CC2420_BACKOFF_PERIOD = 20 / CC2420_TIME_SYMBOL, 
  CC2420_MIN_BACKOFF = 20 / CC2420_TIME_SYMBOL, 
  CC2420_ACK_WAIT_DELAY = 256
};

enum cc2420_status_enums {
  CC2420_STATUS_RSSI_VALID = 1 << 1, 
  CC2420_STATUS_LOCK = 1 << 2, 
  CC2420_STATUS_TX_ACTIVE = 1 << 3, 
  CC2420_STATUS_ENC_BUSY = 1 << 4, 
  CC2420_STATUS_TX_UNDERFLOW = 1 << 5, 
  CC2420_STATUS_XOSC16M_STABLE = 1 << 6
};

enum cc2420_config_reg_enums {
  CC2420_SNOP = 0x00, 
  CC2420_SXOSCON = 0x01, 
  CC2420_STXCAL = 0x02, 
  CC2420_SRXON = 0x03, 
  CC2420_STXON = 0x04, 
  CC2420_STXONCCA = 0x05, 
  CC2420_SRFOFF = 0x06, 
  CC2420_SXOSCOFF = 0x07, 
  CC2420_SFLUSHRX = 0x08, 
  CC2420_SFLUSHTX = 0x09, 
  CC2420_SACK = 0x0a, 
  CC2420_SACKPEND = 0x0b, 
  CC2420_SRXDEC = 0x0c, 
  CC2420_STXENC = 0x0d, 
  CC2420_SAES = 0x0e, 
  CC2420_MAIN = 0x10, 
  CC2420_MDMCTRL0 = 0x11, 
  CC2420_MDMCTRL1 = 0x12, 
  CC2420_RSSI = 0x13, 
  CC2420_SYNCWORD = 0x14, 
  CC2420_TXCTRL = 0x15, 
  CC2420_RXCTRL0 = 0x16, 
  CC2420_RXCTRL1 = 0x17, 
  CC2420_FSCTRL = 0x18, 
  CC2420_SECCTRL0 = 0x19, 
  CC2420_SECCTRL1 = 0x1a, 
  CC2420_BATTMON = 0x1b, 
  CC2420_IOCFG0 = 0x1c, 
  CC2420_IOCFG1 = 0x1d, 
  CC2420_MANFIDL = 0x1e, 
  CC2420_MANFIDH = 0x1f, 
  CC2420_FSMTC = 0x20, 
  CC2420_MANAND = 0x21, 
  CC2420_MANOR = 0x22, 
  CC2420_AGCCTRL = 0x23, 
  CC2420_AGCTST0 = 0x24, 
  CC2420_AGCTST1 = 0x25, 
  CC2420_AGCTST2 = 0x26, 
  CC2420_FSTST0 = 0x27, 
  CC2420_FSTST1 = 0x28, 
  CC2420_FSTST2 = 0x29, 
  CC2420_FSTST3 = 0x2a, 
  CC2420_RXBPFTST = 0x2b, 
  CC2420_FMSTATE = 0x2c, 
  CC2420_ADCTST = 0x2d, 
  CC2420_DACTST = 0x2e, 
  CC2420_TOPTST = 0x2f, 
  CC2420_TXFIFO = 0x3e, 
  CC2420_RXFIFO = 0x3f
};

enum cc2420_ram_addr_enums {
  CC2420_RAM_TXFIFO = 0x000, 
  CC2420_RAM_RXFIFO = 0x080, 
  CC2420_RAM_KEY0 = 0x100, 
  CC2420_RAM_RXNONCE = 0x110, 
  CC2420_RAM_SABUF = 0x120, 
  CC2420_RAM_KEY1 = 0x130, 
  CC2420_RAM_TXNONCE = 0x140, 
  CC2420_RAM_CBCSTATE = 0x150, 
  CC2420_RAM_IEEEADR = 0x160, 
  CC2420_RAM_PANID = 0x168, 
  CC2420_RAM_SHORTADR = 0x16a
};

enum cc2420_nonce_enums {
  CC2420_NONCE_BLOCK_COUNTER = 0, 
  CC2420_NONCE_KEY_SEQ_COUNTER = 2, 
  CC2420_NONCE_FRAME_COUNTER = 3, 
  CC2420_NONCE_SOURCE_ADDRESS = 7, 
  CC2420_NONCE_FLAGS = 15
};

enum cc2420_main_enums {
  CC2420_MAIN_RESETn = 15, 
  CC2420_MAIN_ENC_RESETn = 14, 
  CC2420_MAIN_DEMOD_RESETn = 13, 
  CC2420_MAIN_MOD_RESETn = 12, 
  CC2420_MAIN_FS_RESETn = 11, 
  CC2420_MAIN_XOSC16M_BYPASS = 0
};

enum cc2420_mdmctrl0_enums {
  CC2420_MDMCTRL0_RESERVED_FRAME_MODE = 13, 
  CC2420_MDMCTRL0_PAN_COORDINATOR = 12, 
  CC2420_MDMCTRL0_ADR_DECODE = 11, 
  CC2420_MDMCTRL0_CCA_HYST = 8, 
  CC2420_MDMCTRL0_CCA_MOD = 6, 
  CC2420_MDMCTRL0_AUTOCRC = 5, 
  CC2420_MDMCTRL0_AUTOACK = 4, 
  CC2420_MDMCTRL0_PREAMBLE_LENGTH = 0
};

enum cc2420_mdmctrl1_enums {
  CC2420_MDMCTRL1_CORR_THR = 6, 
  CC2420_MDMCTRL1_DEMOD_AVG_MODE = 5, 
  CC2420_MDMCTRL1_MODULATION_MODE = 4, 
  CC2420_MDMCTRL1_TX_MODE = 2, 
  CC2420_MDMCTRL1_RX_MODE = 0
};

enum cc2420_rssi_enums {
  CC2420_RSSI_CCA_THR = 8, 
  CC2420_RSSI_RSSI_VAL = 0
};

enum cc2420_syncword_enums {
  CC2420_SYNCWORD_SYNCWORD = 0
};

enum cc2420_txctrl_enums {
  CC2420_TXCTRL_TXMIXBUF_CUR = 14, 
  CC2420_TXCTRL_TX_TURNAROUND = 13, 
  CC2420_TXCTRL_TXMIX_CAP_ARRAY = 11, 
  CC2420_TXCTRL_TXMIX_CURRENT = 9, 
  CC2420_TXCTRL_PA_CURRENT = 6, 
  CC2420_TXCTRL_RESERVED = 5, 
  CC2420_TXCTRL_PA_LEVEL = 0
};

enum cc2420_rxctrl0_enums {
  CC2420_RXCTRL0_RXMIXBUF_CUR = 12, 
  CC2420_RXCTRL0_HIGH_LNA_GAIN = 10, 
  CC2420_RXCTRL0_MED_LNA_GAIN = 8, 
  CC2420_RXCTRL0_LOW_LNA_GAIN = 6, 
  CC2420_RXCTRL0_HIGH_LNA_CURRENT = 4, 
  CC2420_RXCTRL0_MED_LNA_CURRENT = 2, 
  CC2420_RXCTRL0_LOW_LNA_CURRENT = 0
};

enum cc2420_rxctrl1_enums {
  CC2420_RXCTRL1_RXBPF_LOCUR = 13, 
  CC2420_RXCTRL1_RXBPF_MIDCUR = 12, 
  CC2420_RXCTRL1_LOW_LOWGAIN = 11, 
  CC2420_RXCTRL1_MED_LOWGAIN = 10, 
  CC2420_RXCTRL1_HIGH_HGM = 9, 
  CC2420_RXCTRL1_MED_HGM = 8, 
  CC2420_RXCTRL1_LNA_CAP_ARRAY = 6, 
  CC2420_RXCTRL1_RXMIX_TAIL = 4, 
  CC2420_RXCTRL1_RXMIX_VCM = 2, 
  CC2420_RXCTRL1_RXMIX_CURRENT = 0
};

enum cc2420_rsctrl_enums {
  CC2420_FSCTRL_LOCK_THR = 14, 
  CC2420_FSCTRL_CAL_DONE = 13, 
  CC2420_FSCTRL_CAL_RUNNING = 12, 
  CC2420_FSCTRL_LOCK_LENGTH = 11, 
  CC2420_FSCTRL_LOCK_STATUS = 10, 
  CC2420_FSCTRL_FREQ = 0
};

enum cc2420_secctrl0_enums {
  CC2420_SECCTRL0_RXFIFO_PROTECTION = 9, 
  CC2420_SECCTRL0_SEC_CBC_HEAD = 8, 
  CC2420_SECCTRL0_SEC_SAKEYSEL = 7, 
  CC2420_SECCTRL0_SEC_TXKEYSEL = 6, 
  CC2420_SECCTRL0_SEC_RXKEYSEL = 5, 
  CC2420_SECCTRL0_SEC_M = 2, 
  CC2420_SECCTRL0_SEC_MODE = 0
};

enum cc2420_secctrl1_enums {
  CC2420_SECCTRL1_SEC_TXL = 8, 
  CC2420_SECCTRL1_SEC_RXL = 0
};

enum cc2420_battmon_enums {
  CC2420_BATTMON_BATT_OK = 6, 
  CC2420_BATTMON_BATTMON_EN = 5, 
  CC2420_BATTMON_BATTMON_VOLTAGE = 0
};

enum cc2420_iocfg0_enums {
  CC2420_IOCFG0_BCN_ACCEPT = 11, 
  CC2420_IOCFG0_FIFO_POLARITY = 10, 
  CC2420_IOCFG0_FIFOP_POLARITY = 9, 
  CC2420_IOCFG0_SFD_POLARITY = 8, 
  CC2420_IOCFG0_CCA_POLARITY = 7, 
  CC2420_IOCFG0_FIFOP_THR = 0
};

enum cc2420_iocfg1_enums {
  CC2420_IOCFG1_HSSD_SRC = 10, 
  CC2420_IOCFG1_SFDMUX = 5, 
  CC2420_IOCFG1_CCAMUX = 0
};

enum cc2420_manfidl_enums {
  CC2420_MANFIDL_PARTNUM = 12, 
  CC2420_MANFIDL_MANFID = 0
};

enum cc2420_manfidh_enums {
  CC2420_MANFIDH_VERSION = 12, 
  CC2420_MANFIDH_PARTNUM = 0
};

enum cc2420_fsmtc_enums {
  CC2420_FSMTC_TC_RXCHAIN2RX = 13, 
  CC2420_FSMTC_TC_SWITCH2TX = 10, 
  CC2420_FSMTC_TC_PAON2TX = 6, 
  CC2420_FSMTC_TC_TXEND2SWITCH = 3, 
  CC2420_FSMTC_TC_TXEND2PAOFF = 0
};

enum cc2420_sfdmux_enums {
  CC2420_SFDMUX_SFD = 0, 
  CC2420_SFDMUX_XOSC16M_STABLE = 24
};

enum cc2420_security_enums {
  CC2420_NO_SEC = 0, 
  CC2420_CBC_MAC = 1, 
  CC2420_CTR = 2, 
  CC2420_CCM = 3, 
  NO_SEC = 0, 
  CBC_MAC_4 = 1, 
  CBC_MAC_8 = 2, 
  CBC_MAC_16 = 3, 
  CTR = 4, 
  CCM_4 = 5, 
  CCM_8 = 6, 
  CCM_16 = 7
};


enum __nesc_unnamed4266 {

  CC2420_INVALID_TIMESTAMP = 0x80000000L
};
# 6 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4267 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4268 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 83 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4269 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4270 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4271 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/platforms/telosa/platform_message.h"
#line 56
typedef union message_header {
  cc2420_header_t cc2420;
  serial_header_t serial;
} message_header_t;



#line 61
typedef union TOSRadioFooter {
  cc2420_footer_t cc2420;
} message_footer_t;




#line 65
typedef union TOSRadioMetadata {
  cc2420_metadata_t cc2420;
  serial_metadata_t serial;
} message_metadata_t;
# 19 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.h"
enum __nesc_unnamed4272 {
  MSP430TIMER_CM_NONE = 0, 
  MSP430TIMER_CM_RISING = 1, 
  MSP430TIMER_CM_FALLING = 2, 
  MSP430TIMER_CM_BOTH = 3, 

  MSP430TIMER_STOP_MODE = 0, 
  MSP430TIMER_UP_MODE = 1, 
  MSP430TIMER_CONTINUOUS_MODE = 2, 
  MSP430TIMER_UPDOWN_MODE = 3, 

  MSP430TIMER_TACLK = 0, 
  MSP430TIMER_TBCLK = 0, 
  MSP430TIMER_ACLK = 1, 
  MSP430TIMER_SMCLK = 2, 
  MSP430TIMER_INCLK = 3, 

  MSP430TIMER_CLOCKDIV_1 = 0, 
  MSP430TIMER_CLOCKDIV_2 = 1, 
  MSP430TIMER_CLOCKDIV_4 = 2, 
  MSP430TIMER_CLOCKDIV_8 = 3
};
#line 75
#line 62
typedef struct __nesc_unnamed4273 {

  int ccifg : 1;
  int cov : 1;
  int out : 1;
  int cci : 1;
  int ccie : 1;
  int outmod : 3;
  int cap : 1;
  int clld : 2;
  int scs : 1;
  int ccis : 2;
  int cm : 2;
} msp430_compare_control_t;
#line 87
#line 77
typedef struct __nesc_unnamed4274 {

  int taifg : 1;
  int taie : 1;
  int taclr : 1;
  int _unused0 : 1;
  int mc : 2;
  int id : 2;
  int tassel : 2;
  int _unused1 : 6;
} msp430_timer_a_control_t;
#line 102
#line 89
typedef struct __nesc_unnamed4275 {

  int tbifg : 1;
  int tbie : 1;
  int tbclr : 1;
  int _unused0 : 1;
  int mc : 2;
  int id : 2;
  int tbssel : 2;
  int _unused1 : 1;
  int cntl : 2;
  int tbclgrp : 2;
  int _unused2 : 1;
} msp430_timer_b_control_t;
# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/types/Ieee154.h"
typedef uint16_t ieee154_panid_t;
typedef uint16_t ieee154_saddr_t;

enum __nesc_unnamed4276 {
  IEEE154_BROADCAST_ADDR = 0xffff
};
# 38 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/IEEE802154.h"
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3
};

enum iee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3
};
# 56 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/msp430usart.h"
#line 48
typedef enum __nesc_unnamed4277 {

  USART_NONE = 0, 
  USART_UART = 1, 
  USART_UART_TX = 2, 
  USART_UART_RX = 3, 
  USART_SPI = 4, 
  USART_I2C = 5
} msp430_usartmode_t;










#line 58
typedef struct __nesc_unnamed4278 {
  unsigned int swrst : 1;
  unsigned int mm : 1;
  unsigned int sync : 1;
  unsigned int listen : 1;
  unsigned int clen : 1;
  unsigned int spb : 1;
  unsigned int pev : 1;
  unsigned int pena : 1;
} __attribute((packed))  msp430_uctl_t;









#line 69
typedef struct __nesc_unnamed4279 {
  unsigned int txept : 1;
  unsigned int stc : 1;
  unsigned int txwake : 1;
  unsigned int urxse : 1;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int ckph : 1;
} __attribute((packed))  msp430_utctl_t;










#line 79
typedef struct __nesc_unnamed4280 {
  unsigned int rxerr : 1;
  unsigned int rxwake : 1;
  unsigned int urxwie : 1;
  unsigned int urxeie : 1;
  unsigned int brk : 1;
  unsigned int oe : 1;
  unsigned int pe : 1;
  unsigned int fe : 1;
} __attribute((packed))  msp430_urctl_t;
#line 116
#line 99
typedef struct __nesc_unnamed4281 {
  unsigned int ubr : 16;

  unsigned int  : 1;
  unsigned int mm : 1;
  unsigned int  : 1;
  unsigned int listen : 1;
  unsigned int clen : 1;
  unsigned int  : 3;

  unsigned int  : 1;
  unsigned int stc : 1;
  unsigned int  : 2;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int ckph : 1;
  unsigned int  : 0;
} msp430_spi_config_t;





#line 118
typedef struct __nesc_unnamed4282 {
  uint16_t ubr;
  uint8_t uctl;
  uint8_t utctl;
} msp430_spi_registers_t;




#line 124
typedef union __nesc_unnamed4283 {
  msp430_spi_config_t spiConfig;
  msp430_spi_registers_t spiRegisters;
} msp430_spi_union_config_t;

msp430_spi_union_config_t msp430_spi_default_config = { 
{ 
.ubr = 0x0002, 
.ssel = 0x02, 
.clen = 1, 
.listen = 0, 
.mm = 1, 
.ckph = 1, 
.ckpl = 0, 
.stc = 1 } };
#line 169
#line 150
typedef enum __nesc_unnamed4284 {

  UBR_32KHZ_1200 = 0x001B, UMCTL_32KHZ_1200 = 0x94, 
  UBR_32KHZ_1800 = 0x0012, UMCTL_32KHZ_1800 = 0x84, 
  UBR_32KHZ_2400 = 0x000D, UMCTL_32KHZ_2400 = 0x6D, 
  UBR_32KHZ_4800 = 0x0006, UMCTL_32KHZ_4800 = 0x77, 
  UBR_32KHZ_9600 = 0x0003, UMCTL_32KHZ_9600 = 0x29, 

  UBR_1MHZ_1200 = 0x0369, UMCTL_1MHZ_1200 = 0x7B, 
  UBR_1MHZ_1800 = 0x0246, UMCTL_1MHZ_1800 = 0x55, 
  UBR_1MHZ_2400 = 0x01B4, UMCTL_1MHZ_2400 = 0xDF, 
  UBR_1MHZ_4800 = 0x00DA, UMCTL_1MHZ_4800 = 0xAA, 
  UBR_1MHZ_9600 = 0x006D, UMCTL_1MHZ_9600 = 0x44, 
  UBR_1MHZ_19200 = 0x0036, UMCTL_1MHZ_19200 = 0xB5, 
  UBR_1MHZ_38400 = 0x001B, UMCTL_1MHZ_38400 = 0x94, 
  UBR_1MHZ_57600 = 0x0012, UMCTL_1MHZ_57600 = 0x84, 
  UBR_1MHZ_76800 = 0x000D, UMCTL_1MHZ_76800 = 0x6D, 
  UBR_1MHZ_115200 = 0x0009, UMCTL_1MHZ_115200 = 0x10, 
  UBR_1MHZ_230400 = 0x0004, UMCTL_1MHZ_230400 = 0x55
} msp430_uart_rate_t;
#line 200
#line 171
typedef struct __nesc_unnamed4285 {
  unsigned int ubr : 16;

  unsigned int umctl : 8;

  unsigned int  : 1;
  unsigned int mm : 1;
  unsigned int  : 1;
  unsigned int listen : 1;
  unsigned int clen : 1;
  unsigned int spb : 1;
  unsigned int pev : 1;
  unsigned int pena : 1;
  unsigned int  : 0;

  unsigned int  : 3;
  unsigned int urxse : 1;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int  : 1;

  unsigned int  : 2;
  unsigned int urxwie : 1;
  unsigned int urxeie : 1;
  unsigned int  : 4;
  unsigned int  : 0;

  unsigned int utxe : 1;
  unsigned int urxe : 1;
} msp430_uart_config_t;








#line 202
typedef struct __nesc_unnamed4286 {
  uint16_t ubr;
  uint8_t umctl;
  uint8_t uctl;
  uint8_t utctl;
  uint8_t urctl;
  uint8_t ume;
} msp430_uart_registers_t;




#line 211
typedef union __nesc_unnamed4287 {
  msp430_uart_config_t uartConfig;
  msp430_uart_registers_t uartRegisters;
} msp430_uart_union_config_t;
#line 248
#line 240
typedef struct __nesc_unnamed4288 {
  unsigned int i2cstt : 1;
  unsigned int i2cstp : 1;
  unsigned int i2cstb : 1;
  unsigned int i2cctrx : 1;
  unsigned int i2cssel : 2;
  unsigned int i2ccrm : 1;
  unsigned int i2cword : 1;
} __attribute((packed))  msp430_i2ctctl_t;
#line 276
#line 253
typedef struct __nesc_unnamed4289 {
  unsigned int  : 1;
  unsigned int mst : 1;
  unsigned int  : 1;
  unsigned int listen : 1;
  unsigned int xa : 1;
  unsigned int  : 1;
  unsigned int txdmaen : 1;
  unsigned int rxdmaen : 1;

  unsigned int  : 4;
  unsigned int i2cssel : 2;
  unsigned int i2crm : 1;
  unsigned int i2cword : 1;

  unsigned int i2cpsc : 8;

  unsigned int i2csclh : 8;

  unsigned int i2cscll : 8;

  unsigned int i2coa : 10;
  unsigned int  : 6;
} msp430_i2c_config_t;








#line 278
typedef struct __nesc_unnamed4290 {
  uint8_t uctl;
  uint8_t i2ctctl;
  uint8_t i2cpsc;
  uint8_t i2csclh;
  uint8_t i2cscll;
  uint16_t i2coa;
} msp430_i2c_registers_t;




#line 287
typedef union __nesc_unnamed4291 {
  msp430_i2c_config_t i2cConfig;
  msp430_i2c_registers_t i2cRegisters;
} msp430_i2c_union_config_t;
#line 309
typedef uint8_t uart_speed_t;
typedef uint8_t uart_parity_t;
typedef uint8_t uart_duplex_t;

enum __nesc_unnamed4292 {
  TOS_UART_1200 = 0, 
  TOS_UART_1800 = 1, 
  TOS_UART_2400 = 2, 
  TOS_UART_4800 = 3, 
  TOS_UART_9600 = 4, 
  TOS_UART_19200 = 5, 
  TOS_UART_38400 = 6, 
  TOS_UART_57600 = 7, 
  TOS_UART_76800 = 8, 
  TOS_UART_115200 = 9, 
  TOS_UART_230400 = 10
};

enum __nesc_unnamed4293 {
  TOS_UART_OFF, 
  TOS_UART_RONLY, 
  TOS_UART_TONLY, 
  TOS_UART_DUPLEX
};

enum __nesc_unnamed4294 {
  TOS_UART_PARITY_NONE, 
  TOS_UART_PARITY_EVEN, 
  TOS_UART_PARITY_ODD
};
# 33 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 43 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420TimeSyncMessage.h"
typedef nx_uint32_t timesync_radio_t;





#line 45
typedef struct timesync_footer_t {

  nx_am_id_t type;
  timesync_radio_t timestamp;
} timesync_footer_t;
# 37 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11.h"
enum __nesc_unnamed4295 {
  SHT11_TEMPERATURE_BITS = 14, 
  SHT11_HUMIDITY_BITS = 12
};

enum __nesc_unnamed4296 {
  SHT11_STATUS_LOW_RES_BIT = 1 << 0, 
  SHT11_STATUS_NO_RELOAD_BIT = 1 << 1, 
  SHT11_STATUS_HEATER_ON_BIT = 1 << 2, 
  SHT11_STATUS_LOW_BATTERY_BIT = 1 << 6
};
# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12.h"
#line 48
typedef struct __nesc_unnamed4297 {

  unsigned int inch : 4;
  unsigned int sref : 3;
  unsigned int ref2_5v : 1;
  unsigned int adc12ssel : 2;
  unsigned int adc12div : 3;
  unsigned int sht : 4;
  unsigned int sampcon_ssel : 2;
  unsigned int sampcon_id : 2;
  unsigned int  : 0;
} msp430adc12_channel_config_t;








#line 61
typedef struct __nesc_unnamed4298 {


  volatile unsigned 
  inch : 4, 
  sref : 3, 
  eos : 1;
} __attribute((packed))  adc12memctl_t;

enum inch_enum {


  INPUT_CHANNEL_A0 = 0, 
  INPUT_CHANNEL_A1 = 1, 
  INPUT_CHANNEL_A2 = 2, 
  INPUT_CHANNEL_A3 = 3, 
  INPUT_CHANNEL_A4 = 4, 
  INPUT_CHANNEL_A5 = 5, 
  INPUT_CHANNEL_A6 = 6, 
  INPUT_CHANNEL_A7 = 7, 
  EXTERNAL_REF_VOLTAGE_CHANNEL = 8, 
  REF_VOLTAGE_NEG_TERMINAL_CHANNEL = 9, 
  TEMPERATURE_DIODE_CHANNEL = 10, 
  SUPPLY_VOLTAGE_HALF_CHANNEL = 11, 
  INPUT_CHANNEL_NONE = 12
};

enum sref_enum {

  REFERENCE_AVcc_AVss = 0, 
  REFERENCE_VREFplus_AVss = 1, 
  REFERENCE_VeREFplus_AVss = 2, 
  REFERENCE_AVcc_VREFnegterm = 4, 
  REFERENCE_VREFplus_VREFnegterm = 5, 
  REFERENCE_VeREFplus_VREFnegterm = 6
};

enum ref2_5v_enum {

  REFVOLT_LEVEL_1_5 = 0, 
  REFVOLT_LEVEL_2_5 = 1, 
  REFVOLT_LEVEL_NONE = 0
};

enum adc12ssel_enum {

  SHT_SOURCE_ADC12OSC = 0, 
  SHT_SOURCE_ACLK = 1, 
  SHT_SOURCE_MCLK = 2, 
  SHT_SOURCE_SMCLK = 3
};

enum adc12div_enum {

  SHT_CLOCK_DIV_1 = 0, 
  SHT_CLOCK_DIV_2 = 1, 
  SHT_CLOCK_DIV_3 = 2, 
  SHT_CLOCK_DIV_4 = 3, 
  SHT_CLOCK_DIV_5 = 4, 
  SHT_CLOCK_DIV_6 = 5, 
  SHT_CLOCK_DIV_7 = 6, 
  SHT_CLOCK_DIV_8 = 7
};

enum sht_enum {

  SAMPLE_HOLD_4_CYCLES = 0, 
  SAMPLE_HOLD_8_CYCLES = 1, 
  SAMPLE_HOLD_16_CYCLES = 2, 
  SAMPLE_HOLD_32_CYCLES = 3, 
  SAMPLE_HOLD_64_CYCLES = 4, 
  SAMPLE_HOLD_96_CYCLES = 5, 
  SAMPLE_HOLD_123_CYCLES = 6, 
  SAMPLE_HOLD_192_CYCLES = 7, 
  SAMPLE_HOLD_256_CYCLES = 8, 
  SAMPLE_HOLD_384_CYCLES = 9, 
  SAMPLE_HOLD_512_CYCLES = 10, 
  SAMPLE_HOLD_768_CYCLES = 11, 
  SAMPLE_HOLD_1024_CYCLES = 12
};

enum sampcon_ssel_enum {

  SAMPCON_SOURCE_TACLK = 0, 
  SAMPCON_SOURCE_ACLK = 1, 
  SAMPCON_SOURCE_SMCLK = 2, 
  SAMPCON_SOURCE_INCLK = 3
};

enum sampcon_id_enum {

  SAMPCON_CLOCK_DIV_1 = 0, 
  SAMPCON_CLOCK_DIV_2 = 1, 
  SAMPCON_CLOCK_DIV_3 = 2, 
  SAMPCON_CLOCK_DIV_4 = 3
};
typedef uint16_t SenseP__Light__val_t;
typedef uint16_t SenseP__Humidity__val_t;
typedef uint16_t SenseP__Temperature__val_t;
typedef TMilli SenseP__Timer__precision_tag;
enum /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Timer*/Msp430Timer32khzC__0____nesc_unnamed4299 {
  Msp430Timer32khzC__0__ALARM_ID = 0U
};
typedef T32khz /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__frequency_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__frequency_tag /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__precision_tag;
typedef uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type;
typedef T32khz /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__frequency_tag;
typedef /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__frequency_tag /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__precision_tag;
typedef uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__size_type;
typedef TMilli /*CounterMilli32C.Transform*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type;
typedef T32khz /*CounterMilli32C.Transform*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type;
typedef uint32_t /*CounterMilli32C.Transform*/TransformCounterC__0__upper_count_type;
typedef /*CounterMilli32C.Transform*/TransformCounterC__0__from_precision_tag /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__size_type;
typedef /*CounterMilli32C.Transform*/TransformCounterC__0__to_precision_tag /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__precision_tag;
typedef /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__size_type;
typedef TMilli /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type;
typedef T32khz /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_precision_tag;
typedef uint16_t /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__size_type;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
enum CC2420ActiveMessageC____nesc_unnamed4300 {
  CC2420ActiveMessageC__CC2420_AM_SEND_ID = 0U
};
typedef T32khz CC2420ControlP__StartupTimer__precision_tag;
typedef uint32_t CC2420ControlP__StartupTimer__size_type;
typedef uint16_t CC2420ControlP__ReadRssi__val_t;
enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Timer*/Msp430Timer32khzC__1____nesc_unnamed4301 {
  Msp430Timer32khzC__1__ALARM_ID = 1U
};
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__frequency_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__frequency_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__precision_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type;
typedef T32khz /*Counter32khz32C.Transform*/TransformCounterC__1__to_precision_tag;
typedef uint32_t /*Counter32khz32C.Transform*/TransformCounterC__1__to_size_type;
typedef T32khz /*Counter32khz32C.Transform*/TransformCounterC__1__from_precision_tag;
typedef uint16_t /*Counter32khz32C.Transform*/TransformCounterC__1__from_size_type;
typedef uint16_t /*Counter32khz32C.Transform*/TransformCounterC__1__upper_count_type;
typedef /*Counter32khz32C.Transform*/TransformCounterC__1__from_precision_tag /*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__precision_tag;
typedef /*Counter32khz32C.Transform*/TransformCounterC__1__from_size_type /*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__size_type;
typedef /*Counter32khz32C.Transform*/TransformCounterC__1__to_precision_tag /*Counter32khz32C.Transform*/TransformCounterC__1__Counter__precision_tag;
typedef /*Counter32khz32C.Transform*/TransformCounterC__1__to_size_type /*Counter32khz32C.Transform*/TransformCounterC__1__Counter__size_type;
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_precision_tag;
typedef uint32_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type;
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__from_precision_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__from_size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__from_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__from_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__size_type;
enum /*CC2420ControlC.Spi*/CC2420SpiC__0____nesc_unnamed4302 {
  CC2420SpiC__0__CLIENT_ID = 0U
};
enum /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0____nesc_unnamed4303 {
  Msp430Spi0C__0__CLIENT_ID = 0U
};
enum /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0____nesc_unnamed4304 {
  Msp430Usart0C__0__CLIENT_ID = 0U
};
enum /*CC2420ControlC.SyncSpiC*/CC2420SpiC__1____nesc_unnamed4305 {
  CC2420SpiC__1__CLIENT_ID = 1U
};
enum /*CC2420ControlC.RssiResource*/CC2420SpiC__2____nesc_unnamed4306 {
  CC2420SpiC__2__CLIENT_ID = 2U
};
typedef T32khz CC2420TransmitP__PacketTimeStamp__precision_tag;
typedef uint32_t CC2420TransmitP__PacketTimeStamp__size_type;
typedef T32khz CC2420TransmitP__BackoffTimer__precision_tag;
typedef uint32_t CC2420TransmitP__BackoffTimer__size_type;
enum /*CC2420TransmitC.Spi*/CC2420SpiC__3____nesc_unnamed4307 {
  CC2420SpiC__3__CLIENT_ID = 3U
};
typedef T32khz CC2420ReceiveP__PacketTimeStamp__precision_tag;
typedef uint32_t CC2420ReceiveP__PacketTimeStamp__size_type;
typedef T32khz CC2420PacketP__PacketTimeStamp32khz__precision_tag;
typedef uint32_t CC2420PacketP__PacketTimeStamp32khz__size_type;
typedef T32khz CC2420PacketP__LocalTime32khz__precision_tag;
typedef TMilli CC2420PacketP__LocalTimeMilli__precision_tag;
typedef TMilli CC2420PacketP__PacketTimeStampMilli__precision_tag;
typedef uint32_t CC2420PacketP__PacketTimeStampMilli__size_type;
typedef T32khz /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag;
typedef /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__precision_tag;
typedef /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__precision_tag;
typedef uint32_t /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type;
enum /*CC2420ReceiveC.Spi*/CC2420SpiC__4____nesc_unnamed4308 {
  CC2420SpiC__4__CLIENT_ID = 4U
};
typedef uint16_t RandomMlcgC__SeedInit__parameter;
enum CC2420TinyosNetworkC____nesc_unnamed4309 {
  CC2420TinyosNetworkC__TINYOS_N_NETWORKS = 1U
};
enum AMQueueP____nesc_unnamed4310 {
  AMQueueP__NUM_CLIENTS = 2U
};
typedef uint16_t /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Humidity__val_t;
typedef uint16_t /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Temperature__val_t;
typedef TMilli /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__Timer__precision_tag;
typedef TMilli HplSensirionSht11P__Timer__precision_tag;
enum /*SenseC.SHT11C*/SensirionSht11C__0____nesc_unnamed4311 {
  SensirionSht11C__0__TEMP_KEY = 0U
};
enum /*SenseC.SHT11C*/SensirionSht11C__0____nesc_unnamed4312 {
  SensirionSht11C__0__HUM_KEY = 1U
};
typedef uint16_t AdcP__Read__val_t;
typedef uint16_t AdcP__ReadNow__val_t;
typedef const msp430adc12_channel_config_t *AdcP__Config__adc_config_t;
typedef TMilli Msp430RefVoltGeneratorP__SwitchOffTimer__precision_tag;
typedef TMilli Msp430RefVoltGeneratorP__SwitchOnTimer__precision_tag;
typedef const msp430adc12_channel_config_t *Msp430RefVoltArbiterImplP__Config__adc_config_t;
enum /*SenseC.LightC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0____nesc_unnamed4313 {
  Msp430Adc12ClientAutoRVGC__0__ID = 0U
};
typedef const msp430adc12_channel_config_t */*SenseC.LightC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfSub__adc_config_t;
typedef const msp430adc12_channel_config_t */*SenseC.LightC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfUp__adc_config_t;
enum /*SenseC.LightC.AdcReadClientC*/AdcReadClientC__0____nesc_unnamed4314 {
  AdcReadClientC__0__CLIENT = 0U
};
typedef TMilli AdcStreamP__Alarm__precision_tag;
typedef uint32_t AdcStreamP__Alarm__size_type;
typedef const msp430adc12_channel_config_t *AdcStreamP__AdcConfigure__adc_config_t;
typedef uint16_t AdcStreamP__ReadStream__val_t;
enum /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Timer*/Msp430Timer32khzC__2____nesc_unnamed4315 {
  Msp430Timer32khzC__2__ALARM_ID = 2U
};
typedef T32khz /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__frequency_tag;
typedef /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__frequency_tag /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__precision_tag;
typedef uint16_t /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__size_type;
typedef TMilli /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__to_precision_tag;
typedef uint32_t /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__to_size_type;
typedef T32khz /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__from_precision_tag;
typedef uint16_t /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__from_size_type;
typedef /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__to_precision_tag /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__Alarm__precision_tag;
typedef /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__to_size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__Alarm__size_type;
typedef /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__from_precision_tag /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__AlarmFrom__precision_tag;
typedef /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__from_size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__AlarmFrom__size_type;
typedef /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__to_precision_tag /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__Counter__precision_tag;
typedef /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__to_size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__Counter__size_type;
typedef uint16_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__val_t;
typedef /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__val_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Service__val_t;
typedef /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__val_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__val_t;
enum /*SenseC.LightC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1____nesc_unnamed4316 {
  Msp430Adc12ClientAutoRVGC__1__ID = 1U
};
typedef const msp430adc12_channel_config_t */*SenseC.LightC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfSub__adc_config_t;
typedef const msp430adc12_channel_config_t */*SenseC.LightC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfUp__adc_config_t;
enum /*SenseC.LightC.AdcReadStreamClientC*/AdcReadStreamClientC__0____nesc_unnamed4317 {
  AdcReadStreamClientC__0__RSCLIENT = 0U
};
typedef const msp430adc12_channel_config_t *HamamatsuS1087ParP__AdcConfigure__adc_config_t;
# 113 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void SenseP__AMControl__startDone(error_t error);
#line 138
static void SenseP__AMControl__stopDone(error_t error);
# 60 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Boot.nc"
static void SenseP__Boot__booted(void );
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Read.nc"
static void SenseP__Light__readDone(error_t result, SenseP__Light__val_t val);
# 110 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMSend.nc"
static void SenseP__SenseSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Read.nc"
static void SenseP__Humidity__readDone(error_t result, SenseP__Humidity__val_t val);
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



SenseP__SenseReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



SenseP__HopReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 110 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMSend.nc"
static void SenseP__HopSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Read.nc"
static void SenseP__Temperature__readDone(error_t result, SenseP__Temperature__val_t val);
# 83 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
static void SenseP__Timer__fired(void );
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t MotePlatformC__Init__init(void );
# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockInit.nc"
static void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void );
#line 43
static void Msp430ClockP__Msp430ClockInit__default__initTimerB(void );



static void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void );
#line 42
static void Msp430ClockP__Msp430ClockInit__default__initTimerA(void );





static void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void );
#line 45
static void Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate(void );
#line 40
static void Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate(void );
static void Msp430ClockP__Msp430ClockInit__default__initClocks(void );
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void );
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Init.nc"
static error_t Msp430ClockP__Init__init(void );
# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(
# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x106f8ec98);
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__clear(void );


static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setClockSource(uint16_t clockSource);
#line 54
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__disableEvents(void );
#line 50
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setMode(int mode);





static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setInputDivider(uint16_t inputDivider);
# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(
# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x106f8ec98);
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void );
static bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void );
# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t time);
# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void );



static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__setControl(msp430_compare_control_t control);
# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void );
# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__setEvent(uint16_t time);
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void );
# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t time);
# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void );



static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__setControl(msp430_compare_control_t control);
# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void );
# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__setEvent(uint16_t time);
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void );
# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t time);
# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void );
# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void );
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void );
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void );
# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t time);
# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void );
#line 47
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare(void );










static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void );
# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void );
# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t delta);
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void );
# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void );
#line 68
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow(void );
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(uint8_t cm);
#line 42
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void );
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void );
# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void );
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void );
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void );
# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t time);
# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents(void );
#line 47
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare(void );










static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt(void );
# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void );
# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(uint16_t delta);
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void );
# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t time);
# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__enableEvents(void );
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__clearPendingInterrupt(void );
# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void );
# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEventFromNow(uint16_t delta);
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void );
# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t time);
# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void );
# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void );
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void );
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void );
# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t time);
# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void );
# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void );
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void );
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void );
# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t time);
# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void );
# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void );
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void );
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void );
# 76 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x106de4d50);
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x106de4d50);
# 57 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Leds.nc"
static void LedsP__Leds__led0Toggle(void );
#line 83
static void LedsP__Leds__led1Toggle(void );
#line 100
static void LedsP__Leds__led2Toggle(void );
# 70 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static bool /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__get(void );
#line 63
static uint8_t /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__getRaw(void );






static bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__get(void );
#line 63
static uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__getRaw(void );
#line 75
static void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__makeInput(void );
#line 70
static bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__get(void );
#line 63
static uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__getRaw(void );
#line 75
static void /*HplMsp430GeneralIOC.P15*/HplMsp430GeneralIOP__5__IO__makeInput(void );






static void /*HplMsp430GeneralIOC.P15*/HplMsp430GeneralIOP__5__IO__makeOutput(void );
#line 70
static bool /*HplMsp430GeneralIOC.P15*/HplMsp430GeneralIOP__5__IO__get(void );
#line 63
static uint8_t /*HplMsp430GeneralIOC.P15*/HplMsp430GeneralIOP__5__IO__getRaw(void );
#line 45
static void /*HplMsp430GeneralIOC.P15*/HplMsp430GeneralIOP__5__IO__set(void );




static void /*HplMsp430GeneralIOC.P15*/HplMsp430GeneralIOP__5__IO__clr(void );
#line 75
static void /*HplMsp430GeneralIOC.P16*/HplMsp430GeneralIOP__6__IO__makeInput(void );






static void /*HplMsp430GeneralIOC.P16*/HplMsp430GeneralIOP__6__IO__makeOutput(void );
#line 45
static void /*HplMsp430GeneralIOC.P16*/HplMsp430GeneralIOP__6__IO__set(void );




static void /*HplMsp430GeneralIOC.P16*/HplMsp430GeneralIOP__6__IO__clr(void );
#line 82
static void /*HplMsp430GeneralIOC.P17*/HplMsp430GeneralIOP__7__IO__makeOutput(void );
#line 45
static void /*HplMsp430GeneralIOC.P17*/HplMsp430GeneralIOP__7__IO__set(void );




static void /*HplMsp430GeneralIOC.P17*/HplMsp430GeneralIOP__7__IO__clr(void );
#line 96
static void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc(void );
#line 89
static void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc(void );
#line 89
static void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc(void );
#line 89
static void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc(void );
#line 96
static void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc(void );
#line 75
static void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__makeInput(void );
#line 70
static bool /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__get(void );
#line 96
static void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectIOFunc(void );
#line 63
static uint8_t /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__getRaw(void );
#line 89
static void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectModuleFunc(void );
#line 82
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput(void );
#line 45
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set(void );




static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr(void );
#line 82
static void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__makeOutput(void );
#line 45
static void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__set(void );




static void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__clr(void );
#line 82
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__makeOutput(void );
#line 45
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__set(void );




static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__clr(void );




static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__toggle(void );
#line 82
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput(void );
#line 45
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set(void );









static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__toggle(void );
#line 82
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput(void );
#line 45
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set(void );









static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__toggle(void );
#line 82
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput(void );
#line 45
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set(void );
#line 75
static void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__makeInput(void );
#line 96
static void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__selectIOFunc(void );
#line 89
static void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__selectModuleFunc(void );
#line 75
static void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__makeInput(void );
#line 96
static void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__selectIOFunc(void );
#line 89
static void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__selectModuleFunc(void );
#line 75
static void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__makeInput(void );
#line 96
static void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__selectIOFunc(void );
#line 89
static void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__selectModuleFunc(void );
#line 75
static void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__makeInput(void );
#line 96
static void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__selectIOFunc(void );
#line 89
static void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__selectModuleFunc(void );
#line 75
static void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__makeInput(void );
#line 96
static void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__selectIOFunc(void );
#line 89
static void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__selectModuleFunc(void );
#line 75
static void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__makeInput(void );
#line 96
static void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__selectIOFunc(void );
#line 89
static void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__selectModuleFunc(void );
#line 75
static void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__makeInput(void );
#line 96
static void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__selectIOFunc(void );
#line 89
static void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__selectModuleFunc(void );
#line 75
static void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__makeInput(void );
#line 96
static void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__selectIOFunc(void );
#line 89
static void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__selectModuleFunc(void );
# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__toggle(void );



static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void );

static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__toggle(void );



static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void );

static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__toggle(void );



static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void );
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void );
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void );
# 103 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type dt);
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void );
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Init__init(void );
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void );
# 64 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__size_type /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void );






static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void );










static void /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void );
#line 64
static /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__size_type /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__get(void );
# 109 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__stop(void );




static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void );
# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__overflow(void );
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 83
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x1073f25d8);
# 64 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x1073f25d8, 
# 64 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x1073f25d8, 
# 73 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x1073f25d8);
# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 104 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t CC2420CsmaP__SplitControl__start(void );
# 81 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420CsmaP__SubBackoff__requestInitialBackoff(message_t * msg);






static void CC2420CsmaP__SubBackoff__requestCongestionBackoff(message_t * msg);
# 73 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static void CC2420CsmaP__CC2420Transmit__sendDone(message_t * p_msg, error_t error);
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
static error_t CC2420CsmaP__Send__send(
#line 67
message_t * msg, 







uint8_t len);
#line 112
static uint8_t CC2420CsmaP__Send__maxPayloadLength(void );
# 76 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static void CC2420CsmaP__CC2420Power__startOscillatorDone(void );
#line 56
static void CC2420CsmaP__CC2420Power__startVRegDone(void );
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420CsmaP__Resource__granted(void );
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420CsmaP__sendDone_task__runTask(void );
#line 75
static void CC2420CsmaP__stopDone_task__runTask(void );
#line 75
static void CC2420CsmaP__startDone_task__runTask(void );
# 86 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static bool CC2420ControlP__CC2420Config__isAddressRecognitionEnabled(void );
#line 110
static bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void );
#line 105
static bool CC2420ControlP__CC2420Config__isHwAutoAckDefault(void );
#line 64
static uint16_t CC2420ControlP__CC2420Config__getShortAddr(void );
#line 52
static error_t CC2420ControlP__CC2420Config__sync(void );
#line 70
static uint16_t CC2420ControlP__CC2420Config__getPanAddr(void );
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void CC2420ControlP__StartupTimer__fired(void );
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Read.nc"
static void CC2420ControlP__ReadRssi__default__readDone(error_t result, CC2420ControlP__ReadRssi__val_t val);
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420ControlP__syncDone__runTask(void );
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Init.nc"
static error_t CC2420ControlP__Init__init(void );
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420ControlP__SpiResource__granted(void );
#line 102
static void CC2420ControlP__SyncResource__granted(void );
# 71 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static error_t CC2420ControlP__CC2420Power__startOscillator(void );
#line 90
static error_t CC2420ControlP__CC2420Power__rxOn(void );
#line 51
static error_t CC2420ControlP__CC2420Power__startVReg(void );
#line 63
static error_t CC2420ControlP__CC2420Power__stopVReg(void );
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420ControlP__sync__runTask(void );
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__Resource__release(void );
#line 88
static error_t CC2420ControlP__Resource__request(void );
# 68 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static void CC2420ControlP__InterruptCCA__fired(void );
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420ControlP__RssiResource__granted(void );
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void );
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void );
# 103 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type dt);
#line 73
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop(void );
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Init__init(void );
# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__overflow(void );
#line 64
static /*Counter32khz32C.Transform*/TransformCounterC__1__Counter__size_type /*Counter32khz32C.Transform*/TransformCounterC__1__Counter__get(void );
# 109 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__getNow(void );
#line 103
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__size_type dt);
#line 66
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__size_type dt);






static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__stop(void );




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__fired(void );
# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__overflow(void );
# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__makeInput(void );
#line 43
static bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__get(void );


static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput(void );
#line 40
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set(void );
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr(void );

static bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__GeneralIO__get(void );
#line 43
static bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__GeneralIO__get(void );


static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__makeOutput(void );
#line 40
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__set(void );
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__clr(void );


static void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__makeInput(void );
#line 43
static bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__get(void );


static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__makeOutput(void );
#line 40
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__set(void );
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__clr(void );
# 86 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(uint16_t time);
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureFallingEdge(void );
#line 66
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__disable(void );
#line 53
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge(void );
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void HplMsp430InterruptP__Port14__clear(void );
#line 47
static void HplMsp430InterruptP__Port14__disable(void );
#line 67
static void HplMsp430InterruptP__Port14__edge(bool low_to_high);
#line 42
static void HplMsp430InterruptP__Port14__enable(void );









static void HplMsp430InterruptP__Port26__clear(void );
#line 72
static void HplMsp430InterruptP__Port26__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port17__clear(void );
#line 72
static void HplMsp430InterruptP__Port17__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port21__clear(void );
#line 72
static void HplMsp430InterruptP__Port21__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port12__clear(void );
#line 72
static void HplMsp430InterruptP__Port12__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port24__clear(void );
#line 72
static void HplMsp430InterruptP__Port24__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port15__clear(void );
#line 47
static void HplMsp430InterruptP__Port15__disable(void );
#line 67
static void HplMsp430InterruptP__Port15__edge(bool low_to_high);
#line 42
static void HplMsp430InterruptP__Port15__enable(void );









static void HplMsp430InterruptP__Port27__clear(void );
#line 72
static void HplMsp430InterruptP__Port27__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port10__clear(void );
#line 47
static void HplMsp430InterruptP__Port10__disable(void );
#line 67
static void HplMsp430InterruptP__Port10__edge(bool low_to_high);
#line 42
static void HplMsp430InterruptP__Port10__enable(void );









static void HplMsp430InterruptP__Port22__clear(void );
#line 72
static void HplMsp430InterruptP__Port22__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port13__clear(void );
#line 72
static void HplMsp430InterruptP__Port13__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port25__clear(void );
#line 72
static void HplMsp430InterruptP__Port25__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port16__clear(void );
#line 72
static void HplMsp430InterruptP__Port16__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port20__clear(void );
#line 72
static void HplMsp430InterruptP__Port20__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port11__clear(void );
#line 72
static void HplMsp430InterruptP__Port11__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port23__clear(void );
#line 72
static void HplMsp430InterruptP__Port23__default__fired(void );
#line 72
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired(void );
# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable(void );
#line 53
static error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge(void );
# 72 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired(void );
# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable(void );
#line 54
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge(void );
# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static void CC2420SpiP__SpiPacket__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420SpiP__Fifo__continueRead(
# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x1077de368, 
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 91
static void CC2420SpiP__Fifo__default__writeDone(
# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x1077de368, 
# 91 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 82
static cc2420_status_t CC2420SpiP__Fifo__write(
# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x1077de368, 
# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420SpiP__Fifo__beginRead(
# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x1077de368, 
# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 71
static void CC2420SpiP__Fifo__default__readDone(
# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x1077de368, 
# 71 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 31 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP__ChipSpiResource__abortRelease(void );







static error_t CC2420SpiP__ChipSpiResource__attemptRelease(void );
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420SpiP__SpiResource__granted(void );
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420SpiP__Ram__write(
# 47 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint16_t arg_0x1077dd508, 
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
uint8_t offset, uint8_t * data, uint8_t length);
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420SpiP__Reg__read(
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x1077db258, 
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t *data);







static cc2420_status_t CC2420SpiP__Reg__write(
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x1077db258, 
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t data);
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__release(
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x1077df1a0);
# 97 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__immediateRequest(
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x1077df1a0);
# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__request(
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x1077df1a0);
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420SpiP__Resource__default__granted(
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x1077df1a0);
# 128 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static bool CC2420SpiP__Resource__isOwner(
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x1077df1a0);
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420SpiP__grant__runTask(void );
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420SpiP__Strobe__strobe(
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x1077da020);
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Init.nc"
static error_t StateImplP__Init__init(void );
# 56 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/State.nc"
static void StateImplP__State__toIdle(
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x107838020);
# 66 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/State.nc"
static bool StateImplP__State__isState(
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x107838020, 
# 66 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/State.nc"
uint8_t myState);
#line 61
static bool StateImplP__State__isIdle(
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x107838020);
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/State.nc"
static error_t StateImplP__State__requestState(
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x107838020, 
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/State.nc"
uint8_t reqState);





static void StateImplP__State__forceState(
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x107838020, 
# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/State.nc"
uint8_t reqState);
# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__unconfigure(
# 76 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x1078d5828);
# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__configure(
# 76 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x1078d5828);
# 70 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__send(
# 79 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x1078d37d8, 
# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
#line 82
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__default__sendDone(
# 79 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x1078d37d8, 
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiConfigure.nc"
static msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__default__getConfig(
# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x1078d0830);
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SpiByte.nc"
static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiByte__write(uint8_t tx);
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__release(
# 81 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x1078d2588);
# 97 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__immediateRequest(
# 81 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x1078d2588);
# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__request(
# 81 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x1078d2588);
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__granted(
# 81 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x1078d2588);
# 128 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__isOwner(
# 81 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x1078d2588);
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__release(
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x1078d6648);
# 97 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__immediateRequest(
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x1078d6648);
# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__request(
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x1078d6648);
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__default__granted(
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x1078d6648);
# 128 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__isOwner(
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x1078d6648);
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__rxDone(uint8_t data);
#line 49
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__txDone(void );
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__runTask(void );
# 180 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
static void HplMsp430Usart0P__Usart__enableRxIntr(void );
#line 197
static void HplMsp430Usart0P__Usart__clrRxIntr(void );
#line 97
static void HplMsp430Usart0P__Usart__resetUsart(bool reset);
#line 179
static void HplMsp430Usart0P__Usart__disableIntr(void );
#line 90
static void HplMsp430Usart0P__Usart__setUmctl(uint8_t umctl);
#line 177
static void HplMsp430Usart0P__Usart__disableRxIntr(void );
#line 207
static void HplMsp430Usart0P__Usart__clrIntr(void );
#line 80
static void HplMsp430Usart0P__Usart__setUbr(uint16_t ubr);
#line 224
static void HplMsp430Usart0P__Usart__tx(uint8_t data);
#line 128
static void HplMsp430Usart0P__Usart__disableUart(void );
#line 153
static void HplMsp430Usart0P__Usart__enableSpi(void );
#line 168
static void HplMsp430Usart0P__Usart__setModeSpi(msp430_spi_union_config_t *config);
#line 231
static uint8_t HplMsp430Usart0P__Usart__rx(void );
#line 192
static bool HplMsp430Usart0P__Usart__isRxIntrPending(void );
#line 158
static void HplMsp430Usart0P__Usart__disableSpi(void );
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(
# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x107a65800, 
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(
# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x107a65800);
# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired(void );
#line 39
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(
# 40 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x107a64620);
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone(void );
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__Init__init(void );
# 79 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );








static bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x107a757e8);
# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x107a757e8);
# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
# 60 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x107a739b8);
# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x107a739b8);
# 56 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 73
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void );
#line 46
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void );
#line 81
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested(void );
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x107a77658);
# 97 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x107a77658);
# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__request(
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x107a77658);
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x107a77658);
# 128 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x107a77658);
# 90 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void );
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
# 7 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2C.nc"
static void HplMsp430I2C0P__HplI2C__clearModeI2C(void );
#line 6
static bool HplMsp430I2C0P__HplI2C__isI2C(void );
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 50 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );




static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
# 66 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420TransmitP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime);
#line 60
static void CC2420TransmitP__RadioBackoff__setInitialBackoff(uint16_t backoffTime);
# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static void CC2420TransmitP__CaptureSFD__captured(uint16_t time);
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void CC2420TransmitP__BackoffTimer__fired(void );
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t * message);
# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static error_t CC2420TransmitP__Send__send(message_t * p_msg, bool useCca);
# 24 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP__ChipSpiResource__releasing(void );
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Init.nc"
static error_t CC2420TransmitP__Init__init(void );
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420TransmitP__SpiResource__granted(void );
# 95 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t CC2420TransmitP__StdControl__start(void );









static error_t CC2420TransmitP__StdControl__stop(void );
# 91 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420TransmitP__TXFIFO__writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420TransmitP__TXFIFO__readDone(uint8_t * data, uint8_t length, error_t error);
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ReceiveP__CC2420Config__syncDone(error_t error);
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420ReceiveP__receiveDone_task__runTask(void );
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP__CC2420Receive__sfd_dropped(void );
#line 49
static void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time);
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Init.nc"
static error_t CC2420ReceiveP__Init__init(void );
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420ReceiveP__SpiResource__granted(void );
# 91 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420ReceiveP__RXFIFO__writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420ReceiveP__RXFIFO__readDone(uint8_t * data, uint8_t length, error_t error);
# 68 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static void CC2420ReceiveP__InterruptFIFOP__fired(void );
# 95 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t CC2420ReceiveP__StdControl__start(void );









static error_t CC2420ReceiveP__StdControl__stop(void );
# 77 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Packet.nc"
static void CC2420PacketP__CC2420Packet__setNetwork(message_t *p_msg, uint8_t networkId);
#line 75
static uint8_t CC2420PacketP__CC2420Packet__getNetwork(message_t *p_msg);
# 70 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static void CC2420PacketP__PacketTimeStamp32khz__clear(
#line 66
message_t * msg);
#line 78
static void CC2420PacketP__PacketTimeStamp32khz__set(
#line 73
message_t * msg, 




CC2420PacketP__PacketTimeStamp32khz__size_type value);
# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420PacketP__CC2420PacketBody__getHeader(message_t * msg);




static cc2420_metadata_t * CC2420PacketP__CC2420PacketBody__getMetadata(message_t * msg);
# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
static uint8_t CC2420PacketP__PacketTimeSyncOffset__get(
#line 53
message_t * msg);
#line 50
static bool CC2420PacketP__PacketTimeSyncOffset__isSet(
#line 46
message_t * msg);
# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 46
static uint32_t RandomMlcgC__Random__rand32(void );
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
# 100 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
static void UniqueSendP__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
#line 75
static error_t UniqueSendP__Send__send(
#line 67
message_t * msg, 







uint8_t len);
#line 112
static uint8_t UniqueSendP__Send__maxPayloadLength(void );
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Init.nc"
static error_t UniqueSendP__Init__init(void );
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



UniqueReceiveP__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Init.nc"
static error_t UniqueReceiveP__Init__init(void );
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



UniqueReceiveP__DuplicateReceive__default__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 100 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420TinyosNetworkP__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420TinyosNetworkP__grantTask__runTask(void );
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
static error_t CC2420TinyosNetworkP__ActiveSend__send(
#line 67
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

CC2420TinyosNetworkP__ActiveSend__getPayload(
#line 122
message_t * msg, 


uint8_t len);
#line 112
static uint8_t CC2420TinyosNetworkP__ActiveSend__maxPayloadLength(void );
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420TinyosNetworkP__BareReceive__default__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420TinyosNetworkP__Resource__release(
# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x107e84550);
# 97 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420TinyosNetworkP__Resource__immediateRequest(
# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x107e84550);
# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420TinyosNetworkP__Resource__request(
# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x107e84550);
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420TinyosNetworkP__Resource__default__granted(
# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x107e84550);
# 100 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__BareSend__default__sendDone(
#line 96
message_t * msg, 



error_t error);
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init(void );
# 79 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );








static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420ActiveMessageP__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 100 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
static void CC2420ActiveMessageP__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ActiveMessageP__CC2420Config__syncDone(error_t error);
# 95 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP__RadioBackoff__default__requestCca(
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x107f24d60, 
# 95 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
#line 81
static void CC2420ActiveMessageP__RadioBackoff__default__requestInitialBackoff(
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x107f24d60, 
# 81 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);






static void CC2420ActiveMessageP__RadioBackoff__default__requestCongestionBackoff(
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x107f24d60, 
# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SendNotifier.nc"
static void CC2420ActiveMessageP__SendNotifier__default__aboutToSend(
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x107f24258, 
# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 95 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP__SubBackoff__requestCca(message_t * msg);
#line 81
static void CC2420ActiveMessageP__SubBackoff__requestInitialBackoff(message_t * msg);






static void CC2420ActiveMessageP__SubBackoff__requestCongestionBackoff(message_t * msg);
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t CC2420ActiveMessageP__Packet__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


CC2420ActiveMessageP__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t CC2420ActiveMessageP__Packet__maxPayloadLength(void );
#line 94
static void CC2420ActiveMessageP__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 80 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t CC2420ActiveMessageP__AMSend__send(
# 47 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x107f2a6c0, 
# 80 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420ActiveMessageP__Snoop__default__receive(
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x107f27480, 
# 71 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



CC2420ActiveMessageP__Receive__default__receive(
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x107f28908, 
# 71 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 68 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t CC2420ActiveMessageP__AMPacket__address(void );









static am_addr_t CC2420ActiveMessageP__AMPacket__destination(
#line 74
message_t * amsg);
#line 103
static void CC2420ActiveMessageP__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t CC2420ActiveMessageP__AMPacket__type(
#line 143
message_t * amsg);
#line 162
static void CC2420ActiveMessageP__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
#line 136
static bool CC2420ActiveMessageP__AMPacket__isForMe(
#line 133
message_t * amsg);
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420ActiveMessageP__RadioResource__granted(void );
# 80 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*SenseC.SenseSender.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
static void /*SenseC.SenseSender.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 110 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x107ff97d8, 
# 103 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(
# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x107ffa5e8, 
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(
# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x107ffa5e8, 
# 96 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );
#line 75
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
# 80 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*SenseC.HopSender.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
static void /*SenseC.HopSender.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 84 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11.nc"
static void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Hum__measureHumidityDone(error_t result, uint16_t val);
#line 116
static void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Hum__writeStatusRegDone(error_t result);
#line 100
static void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Hum__readStatusRegDone(error_t result, uint8_t val);
#line 54
static void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Hum__resetDone(error_t result);
#line 69
static void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Hum__measureTemperatureDone(error_t result, uint16_t val);
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Read.nc"
static error_t /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Humidity__read(void );
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__TempResource__granted(void );
# 84 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11.nc"
static void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Temp__measureHumidityDone(error_t result, uint16_t val);
#line 116
static void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Temp__writeStatusRegDone(error_t result);
#line 100
static void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Temp__readStatusRegDone(error_t result, uint8_t val);
#line 54
static void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Temp__resetDone(error_t result);
#line 69
static void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Temp__measureTemperatureDone(error_t result, uint16_t val);
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__HumResource__granted(void );
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Read.nc"
static error_t /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Temperature__read(void );
# 68 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__InterruptDATA__fired(void );
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__readSensor__runTask(void );
#line 75
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__signalStatusDone__runTask(void );
# 84 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11.nc"
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__default__measureHumidityDone(
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x1080cc350, 
# 84 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11.nc"
error_t result, uint16_t val);
#line 76
static error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__measureHumidity(
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x1080cc350);
# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11.nc"
static error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__measureTemperature(
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x1080cc350);
# 116 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11.nc"
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__default__writeStatusRegDone(
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x1080cc350, 
# 116 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11.nc"
error_t result);
#line 100
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__default__readStatusRegDone(
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x1080cc350, 
# 100 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11.nc"
error_t result, uint8_t val);
#line 54
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__default__resetDone(
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x1080cc350, 
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11.nc"
error_t result);
#line 69
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__default__measureTemperatureDone(
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x1080cc350, 
# 69 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11.nc"
error_t result, uint16_t val);
# 83 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__Timer__fired(void );
# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__GeneralIO__makeInput(void );
#line 43
static bool /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__GeneralIO__get(void );


static void /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__GeneralIO__makeOutput(void );
#line 40
static void /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__GeneralIO__set(void );
static void /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__GeneralIO__clr(void );


static void /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__GeneralIO__makeInput(void );

static void /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__GeneralIO__makeOutput(void );
#line 40
static void /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__GeneralIO__set(void );
static void /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__GeneralIO__clr(void );




static void /*HplSensirionSht11C.PWRM*/Msp430GpioC__12__GeneralIO__makeOutput(void );
#line 40
static void /*HplSensirionSht11C.PWRM*/Msp430GpioC__12__GeneralIO__set(void );
static void /*HplSensirionSht11C.PWRM*/Msp430GpioC__12__GeneralIO__clr(void );
# 104 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t HplSensirionSht11P__SplitControl__start(void );
#line 130
static error_t HplSensirionSht11P__SplitControl__stop(void );
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void HplSensirionSht11P__stopTask__runTask(void );
# 83 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
static void HplSensirionSht11P__Timer__fired(void );
# 72 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__HplInterrupt__fired(void );
# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__Interrupt__disable(void );
#line 54
static error_t /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__Interrupt__enableFallingEdge(void );
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__Init__init(void );
# 79 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty(void );








static bool /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue(void );
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x107a757e8);
# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(
# 60 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x107a739b8);
# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(
# 60 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x107a739b8);
# 56 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void );








static bool /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__isOwner(void );
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__Resource__release(
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x107a77658);
# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__Resource__request(
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x107a77658);
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__Resource__default__granted(
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x107a77658);
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__grantedTask__runTask(void );
# 113 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__SplitControl__startDone(error_t error);
#line 138
static void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__SplitControl__stopDone(error_t error);
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
static void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__stopTask__runTask(void );
# 73 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__granted(void );
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__startTask__runTask(void );
# 95 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__StdControl__default__start(void );









static error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__StdControl__default__stop(void );
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Read.nc"
static error_t AdcP__Read__read(
# 38 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x1082158a8);
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Read.nc"
static void AdcP__Read__default__readDone(
# 38 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x1082158a8, 
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Read.nc"
error_t result, AdcP__Read__val_t val);
# 66 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ReadNow.nc"
static void AdcP__ReadNow__default__readDone(
# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x1082115f8, 
# 66 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ReadNow.nc"
error_t result, AdcP__ReadNow__val_t val);
# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
static AdcP__Config__adc_config_t AdcP__Config__default__getConfiguration(
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x10820ae28);
# 189 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t AdcP__SingleChannel__default__getData(
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x1081f8910);
# 84 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t AdcP__SingleChannel__default__configureSingle(
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x1081f8910, 
# 84 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config);
#line 227
static uint16_t * AdcP__SingleChannel__multipleDataReady(
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x1081f8910, 
# 227 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t * buffer, uint16_t numSamples);
#line 206
static error_t AdcP__SingleChannel__singleDataReady(
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x1081f8910, 
# 206 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t data);
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t AdcP__ResourceRead__default__release(
# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x10820c548);
# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t AdcP__ResourceRead__default__request(
# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x10820c548);
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static void AdcP__ResourceRead__granted(
# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x10820c548);
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void AdcP__readDone__runTask(void );
# 107 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
static void Msp430Adc12ImplP__MultiChannel__default__dataReady(
# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x1082710c8, 
# 107 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
uint16_t *buffer, uint16_t numSamples);
# 112 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
static void Msp430Adc12ImplP__HplAdc12__conversionDone(uint16_t iv);
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430Adc12ImplP__CompareA1__fired(void );
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
static void Msp430Adc12ImplP__Overflow__default__memOverflow(
# 43 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x108270020);
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
static void Msp430Adc12ImplP__Overflow__default__conversionTimeOverflow(
# 43 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x108270020);
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Init.nc"
static error_t Msp430Adc12ImplP__Init__init(void );
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void Msp430Adc12ImplP__TimerA__overflow(void );
# 189 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t Msp430Adc12ImplP__SingleChannel__getData(
# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x108274ac0);
# 84 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t Msp430Adc12ImplP__SingleChannel__configureSingle(
# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x108274ac0, 
# 84 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config);
#line 227
static uint16_t * Msp430Adc12ImplP__SingleChannel__default__multipleDataReady(
# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x108274ac0, 
# 227 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t * buffer, uint16_t numSamples);
#line 138
static error_t Msp430Adc12ImplP__SingleChannel__configureMultiple(
# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x108274ac0, 
# 138 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config, uint16_t * buffer, uint16_t numSamples, uint16_t jiffies);
#line 206
static error_t Msp430Adc12ImplP__SingleChannel__default__singleDataReady(
# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x108274ac0, 
# 206 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t data);
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430Adc12ImplP__CompareA0__fired(void );
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
static adc12ctl0_t HplAdc12P__HplAdc12__getCtl0(void );
#line 82
static adc12memctl_t HplAdc12P__HplAdc12__getMCtl(uint8_t idx);
#line 106
static void HplAdc12P__HplAdc12__resetIFGs(void );
#line 118
static bool HplAdc12P__HplAdc12__isBusy(void );
#line 75
static void HplAdc12P__HplAdc12__setMCtl(uint8_t idx, adc12memctl_t memControl);
#line 128
static void HplAdc12P__HplAdc12__startConversion(void );
#line 51
static void HplAdc12P__HplAdc12__setCtl0(adc12ctl0_t control0);
#line 89
static uint16_t HplAdc12P__HplAdc12__getMem(uint8_t idx);





static void HplAdc12P__HplAdc12__setIEFlags(uint16_t mask);
#line 123
static void HplAdc12P__HplAdc12__stopConversion(void );
#line 57
static void HplAdc12P__HplAdc12__setCtl1(adc12ctl1_t control1);
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void );
# 79 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x108373c80);
# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(
# 56 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x108371220);
# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(
# 56 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x108371220);
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(
# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x1083749b0);
# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(
# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x1083749b0);
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__default__granted(
# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x1083749b0);
# 98 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static uint8_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__userId(void );
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
# 112 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
static void Msp430RefVoltGeneratorP__HplAdc12__conversionDone(uint16_t iv);
# 83 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
static void Msp430RefVoltGeneratorP__SwitchOffTimer__fired(void );
# 104 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t Msp430RefVoltGeneratorP__RefVolt_2_5V__start(void );
#line 104
static error_t Msp430RefVoltGeneratorP__RefVolt_1_5V__start(void );
#line 130
static error_t Msp430RefVoltGeneratorP__RefVolt_1_5V__stop(void );
# 83 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
static void Msp430RefVoltGeneratorP__SwitchOnTimer__fired(void );
# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
static Msp430RefVoltArbiterImplP__Config__adc_config_t Msp430RefVoltArbiterImplP__Config__default__getConfiguration(
# 43 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x10842ce08);
# 113 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void Msp430RefVoltArbiterImplP__RefVolt_2_5V__startDone(error_t error);
#line 138
static void Msp430RefVoltArbiterImplP__RefVolt_2_5V__stopDone(error_t error);
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP__AdcResource__default__release(
# 40 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x10842f108);
# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP__AdcResource__default__request(
# 40 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x10842f108);
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static void Msp430RefVoltArbiterImplP__AdcResource__granted(
# 40 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x10842f108);
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP__ClientResource__release(
# 38 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x108408d48);
# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP__ClientResource__request(
# 38 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x108408d48);
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static void Msp430RefVoltArbiterImplP__ClientResource__default__granted(
# 38 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x108408d48);
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void Msp430RefVoltArbiterImplP__switchOff__runTask(void );
# 113 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void Msp430RefVoltArbiterImplP__RefVolt_1_5V__startDone(error_t error);
#line 138
static void Msp430RefVoltArbiterImplP__RefVolt_1_5V__stopDone(error_t error);
# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
static /*SenseC.LightC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfSub__adc_config_t /*SenseC.LightC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfSub__getConfiguration(void );
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void AdcStreamP__bufferDone__runTask(void );
#line 75
static void AdcStreamP__readStreamDone__runTask(void );
#line 75
static void AdcStreamP__readStreamFail__runTask(void );
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void AdcStreamP__Alarm__fired(void );
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Init.nc"
static error_t AdcStreamP__Init__init(void );
# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
static AdcStreamP__AdcConfigure__adc_config_t AdcStreamP__AdcConfigure__default__getConfiguration(
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x10849f318);
# 189 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t AdcStreamP__SingleChannel__default__getData(
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x1084a1b90);
# 84 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t AdcStreamP__SingleChannel__default__configureSingle(
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x1084a1b90, 
# 84 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config);
#line 227
static uint16_t * AdcStreamP__SingleChannel__multipleDataReady(
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x1084a1b90, 
# 227 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t * buffer, uint16_t numSamples);
#line 138
static error_t AdcStreamP__SingleChannel__default__configureMultiple(
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x1084a1b90, 
# 138 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config, uint16_t * buffer, uint16_t numSamples, uint16_t jiffies);
#line 206
static error_t AdcStreamP__SingleChannel__singleDataReady(
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x1084a1b90, 
# 206 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t data);
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ReadStream.nc"
static error_t AdcStreamP__ReadStream__read(
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x1084a5b08, 
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ReadStream.nc"
uint32_t usPeriod);
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__fired(void );
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__overflow(void );
# 103 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__startAt(/*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__size_type t0, /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__size_type dt);





static /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__Alarm__size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__Alarm__getNow(void );
#line 103
static void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__Alarm__startAt(/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__Alarm__size_type t0, /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__Alarm__size_type dt);
#line 78
static void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__AlarmFrom__fired(void );
# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__Counter__overflow(void );
# 89 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ReadStream.nc"
static void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Service__bufferDone(
# 26 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x10851e148, 
# 89 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ReadStream.nc"
error_t result, 
#line 86
/*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Service__val_t * buf, 



uint16_t count);
#line 102
static void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Service__readDone(
# 26 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x10851e148, 
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ReadStream.nc"
error_t result, uint32_t usActualPeriod);
#line 89
static void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__default__bufferDone(
# 24 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x108522020, 
# 89 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ReadStream.nc"
error_t result, 
#line 86
/*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__val_t * buf, 



uint16_t count);
#line 102
static void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__default__readDone(
# 24 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x108522020, 
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ReadStream.nc"
error_t result, uint32_t usActualPeriod);
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Resource__default__release(
# 27 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x10851a020);
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Resource__granted(
# 27 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x10851a020);
# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
static /*SenseC.LightC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfSub__adc_config_t /*SenseC.LightC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfSub__getConfiguration(void );
#line 58
static HamamatsuS1087ParP__AdcConfigure__adc_config_t HamamatsuS1087ParP__AdcConfigure__getConfiguration(void );
# 104 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t SenseP__AMControl__start(void );
# 126 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Packet.nc"
static 
#line 123
void * 


SenseP__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Read.nc"
static error_t SenseP__Light__read(void );
# 80 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t SenseP__SenseSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Read.nc"
static error_t SenseP__Humidity__read(void );
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Leds.nc"
static void SenseP__Leds__led0Toggle(void );
#line 83
static void SenseP__Leds__led1Toggle(void );
#line 100
static void SenseP__Leds__led2Toggle(void );
# 80 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t SenseP__HopSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Read.nc"
static error_t SenseP__Temperature__read(void );
# 64 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
static void SenseP__Timer__startPeriodic(uint32_t dt);
# 35 "SenseP.nc"
message_t SenseP__sensePkt;
message_t SenseP__hopPkt;
bool SenseP__busy = FALSE;
uint16_t SenseP__temperature;
uint16_t SenseP__humidity;
uint16_t SenseP__light;
uint16_t SenseP__seqnum = 0;
uint16_t SenseP__firstHop = 0;
uint16_t SenseP__lastFirstHop = 0;
uint16_t SenseP__lastLen = INF;
uint16_t SenseP__len = INF;


static inline void SenseP__prepareSenseMsg(void );









static inline void SenseP__resetHop(void );









static void SenseP__sendPacket(message_t *pkt);
#line 82
static inline void SenseP__sendHop(void );
#line 94
static inline void SenseP__Boot__booted(void );




static inline void SenseP__AMControl__startDone(error_t error);








static inline message_t *SenseP__SenseReceive__receive(message_t *msg, void *payload, uint8_t l);
#line 120
static inline message_t *SenseP__HopReceive__receive(message_t *msg, void *payload, uint8_t l);
#line 135
static inline void SenseP__AMControl__stopDone(error_t error);



bool SenseP__reset = FALSE;
static inline void SenseP__Timer__fired(void );
#line 161
static inline void SenseP__Temperature__readDone(error_t error, uint16_t data);




static inline void SenseP__Humidity__readDone(error_t error, uint16_t data);




static inline void SenseP__Light__readDone(error_t error, uint16_t data);





static void SenseP__HopSend__sendDone(message_t *msg, error_t error);
#line 191
static inline void SenseP__SenseSend__sendDone(message_t *msg, error_t error);
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 62
static error_t PlatformP__MoteClockInit__init(void );
#line 62
static error_t PlatformP__LedsInit__init(void );
# 10 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/platforms/telosa/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 6 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/platforms/telosb/MotePlatformC.nc"
static __inline void MotePlatformC__uwait(uint16_t u);




static __inline void MotePlatformC__TOSH_wait(void );




static void MotePlatformC__TOSH_FLASH_M25P_DP_bit(bool set);










static inline void MotePlatformC__TOSH_FLASH_M25P_DP(void );
#line 56
static inline error_t MotePlatformC__Init__init(void );
# 43 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockInit.nc"
static void Msp430ClockP__Msp430ClockInit__initTimerB(void );
#line 42
static void Msp430ClockP__Msp430ClockInit__initTimerA(void );
#line 40
static void Msp430ClockP__Msp430ClockInit__setupDcoCalibrate(void );
static void Msp430ClockP__Msp430ClockInit__initClocks(void );
# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc"
static volatile uint8_t Msp430ClockP__IE1 __asm ("0x0000");
static volatile uint16_t Msp430ClockP__TA0CTL __asm ("0x0160");
static volatile uint16_t Msp430ClockP__TA0IV __asm ("0x012E");
static volatile uint16_t Msp430ClockP__TBCTL __asm ("0x0180");
static volatile uint16_t Msp430ClockP__TBIV __asm ("0x011E");

enum Msp430ClockP____nesc_unnamed4318 {

  Msp430ClockP__ACLK_CALIB_PERIOD = 8, 
  Msp430ClockP__TARGET_DCO_DELTA = 4096 / 32 * Msp430ClockP__ACLK_CALIB_PERIOD
};

static inline mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void );



static inline void Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate(void );
#line 79
static inline void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void );
#line 100
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void );
#line 115
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void );
#line 130
static inline void Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate(void );




static inline void Msp430ClockP__Msp430ClockInit__default__initClocks(void );




static inline void Msp430ClockP__Msp430ClockInit__default__initTimerA(void );




static inline void Msp430ClockP__Msp430ClockInit__default__initTimerB(void );





static inline void Msp430ClockP__startTimerA(void );
#line 163
static inline void Msp430ClockP__startTimerB(void );
#line 175
static void Msp430ClockP__set_dco_calib(int calib);





static inline uint16_t Msp430ClockP__test_calib_busywait_delta(int calib);
#line 204
static inline void Msp430ClockP__busyCalibrateDco(void );
#line 229
static inline error_t Msp430ClockP__Init__init(void );
# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(
# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x106f8ec98);
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow(void );
# 91 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setMode(int mode);









static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__clear(void );









static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__disableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setClockSource(uint16_t clockSource);




static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setInputDivider(uint16_t inputDivider);




static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void );




static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void );





static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void );








static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(uint8_t n);
# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(
# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x106f8ec98);
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow(void );
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void );
#line 81
static inline bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void );
#line 126
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void );




static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void );





static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void );








static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(uint8_t n);
# 86 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(uint16_t time);
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired(void );
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__CC2int(/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void );
#line 100
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__setControl(/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t x);
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__setEvent(uint16_t x);
#line 180
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void );
# 86 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(uint16_t time);
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired(void );
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__CC2int(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void );
#line 100
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__setControl(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t x);
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__setEvent(uint16_t x);
#line 180
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void );
# 86 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(uint16_t time);
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired(void );
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t;


static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void );
#line 180
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void );
# 86 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(uint16_t time);
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired(void );
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get(void );
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(uint16_t x)  ;

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__compareControl(void );
#line 85
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void );









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare(void );
#line 130
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t x);









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t x);
#line 180
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void );
# 86 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(uint16_t time);
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired(void );
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__CC2int(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(uint16_t x)  ;
#line 72
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__captureControl(uint8_t l_cm);
#line 85
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void );
#line 110
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(uint8_t cm);
#line 130
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void );
#line 175
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow(void );




static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void );
#line 192
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void );
# 86 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(uint16_t time);
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired(void );
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__get(void );
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__CC2int(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(uint16_t x)  ;

static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__compareControl(void );
#line 85
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt(void );









static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare(void );
#line 130
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(uint16_t x);









static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(uint16_t x);
#line 180
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void );
# 86 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(uint16_t time);
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired(void );
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__get(void );
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t;


static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__clearPendingInterrupt(void );
#line 130
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEvent(uint16_t x);









static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEventFromNow(uint16_t x);
#line 180
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void );
# 86 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(uint16_t time);
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired(void );
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t;


static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void );
# 86 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(uint16_t time);
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired(void );
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t;


static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void );
# 86 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(uint16_t time);
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired(void );
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t;


static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void );
# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerCommonP__VectorTimerB1__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerA0__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerA1__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerB0__fired(void );
# 11 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
void sig_TIMERA0_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(12)))  ;
void sig_TIMERA1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(10)))  ;
void sig_TIMERB0_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(26)))  ;
void sig_TIMERB1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(24)))  ;
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/McuSleepC.nc"
bool McuSleepC__dirty = TRUE;
mcu_power_t McuSleepC__powerState = MSP430_POWER_ACTIVE;




const uint16_t McuSleepC__msp430PowerBits[MSP430_POWER_LPM4 + 1] = { 
0, 
0x0010, 
0x0040 + 0x0010, 
0x0080 + 0x0010, 
0x0080 + 0x0040 + 0x0010, 
0x0080 + 0x0040 + 0x0020 + 0x0010 };


static inline mcu_power_t McuSleepC__getPowerState(void );
#line 112
static inline void McuSleepC__computePowerState(void );




static inline void McuSleepC__McuSleep__sleep(void );
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/RealMainP.nc"
int main(void )   ;
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 56 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x106de4d50);
# 76 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4319 {

  SchedulerBasicP__NUM_TASKS = 26U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 97
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 124
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 170
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__toggle(void );



static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );

static void LedsP__Led1__toggle(void );



static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );

static void LedsP__Led2__toggle(void );



static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
# 56 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 84
static inline void LedsP__Leds__led0Toggle(void );
#line 99
static inline void LedsP__Leds__led1Toggle(void );
#line 114
static inline void LedsP__Leds__led2Toggle(void );
# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__get(void );
#line 59
static inline uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__get(void );
#line 59
static inline uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__get(void );
static inline void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__makeInput(void );
#line 56
static void /*HplMsp430GeneralIOC.P15*/HplMsp430GeneralIOP__5__IO__set(void );
static void /*HplMsp430GeneralIOC.P15*/HplMsp430GeneralIOP__5__IO__clr(void );

static inline uint8_t /*HplMsp430GeneralIOC.P15*/HplMsp430GeneralIOP__5__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P15*/HplMsp430GeneralIOP__5__IO__get(void );
static void /*HplMsp430GeneralIOC.P15*/HplMsp430GeneralIOP__5__IO__makeInput(void );

static void /*HplMsp430GeneralIOC.P15*/HplMsp430GeneralIOP__5__IO__makeOutput(void );
#line 56
static void /*HplMsp430GeneralIOC.P16*/HplMsp430GeneralIOP__6__IO__set(void );
static void /*HplMsp430GeneralIOC.P16*/HplMsp430GeneralIOP__6__IO__clr(void );



static inline void /*HplMsp430GeneralIOC.P16*/HplMsp430GeneralIOP__6__IO__makeInput(void );

static inline void /*HplMsp430GeneralIOC.P16*/HplMsp430GeneralIOP__6__IO__makeOutput(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P17*/HplMsp430GeneralIOP__7__IO__set(void );
static inline void /*HplMsp430GeneralIOC.P17*/HplMsp430GeneralIOP__7__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P17*/HplMsp430GeneralIOP__7__IO__makeOutput(void );

static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc(void );
#line 65
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc(void );
#line 65
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc(void );
#line 67
static inline void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc(void );
#line 67
static inline void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc(void );
#line 59
static inline uint8_t /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__get(void );
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectIOFunc(void );
#line 56
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set(void );
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__set(void );
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__makeOutput(void );
#line 56
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__set(void );
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__makeOutput(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set(void );

static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__toggle(void );




static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set(void );

static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__toggle(void );




static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set(void );

static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__toggle(void );




static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput(void );
#line 61
static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__selectIOFunc(void );
#line 61
static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__selectIOFunc(void );
#line 61
static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__selectIOFunc(void );
#line 61
static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__selectIOFunc(void );
#line 61
static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__selectIOFunc(void );
#line 61
static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__selectIOFunc(void );
#line 61
static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__selectIOFunc(void );
#line 61
static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__selectIOFunc(void );
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__toggle(void );
#line 82
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput(void );
#line 45
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set(void );
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void );

static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__toggle(void );



static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void );
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__toggle(void );
#line 82
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput(void );
#line 45
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set(void );
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void );

static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__toggle(void );



static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void );
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__toggle(void );
#line 82
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput(void );
#line 45
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set(void );
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void );

static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__toggle(void );



static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void );
# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(uint16_t time);

static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(uint16_t delta);
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get(void );
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired(void );
# 57 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents(void );
#line 47
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare(void );










static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents(void );
#line 44
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt(void );
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Init__init(void );
#line 65
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void );




static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void );










static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 114
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void );
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get(void );
static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending(void );
# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow(void );
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void );




static inline bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void );









static inline void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void );
# 64 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__size_type /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__get(void );






static bool /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__overflow(void );
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*CounterMilli32C.Transform*/TransformCounterC__0__upper_count_type /*CounterMilli32C.Transform*/TransformCounterC__0__m_upper;

enum /*CounterMilli32C.Transform*/TransformCounterC__0____nesc_unnamed4320 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 5, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type ) - /*CounterMilli32C.Transform*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type ) + 5, 



  TransformCounterC__0__OVERFLOW_MASK = /*CounterMilli32C.Transform*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*CounterMilli32C.Transform*/TransformCounterC__0__upper_count_type )2 << (/*CounterMilli32C.Transform*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__get(void );
#line 133
static inline void /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void );
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__fired(void );
#line 103
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type dt);
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__stop(void );
# 64 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__get(void );
# 77 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0;
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt;

enum /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0____nesc_unnamed4321 {

  TransformAlarmC__0__MAX_DELAY_LOG2 = 8 * sizeof(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_size_type ) - 1 - 5, 
  TransformAlarmC__0__MAX_DELAY = (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type )1 << /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__MAX_DELAY_LOG2
};

static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getNow(void );




static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getAlarm(void );










static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__stop(void );




static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__set_alarm(void );
#line 147
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type dt);
#line 162
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void );
#line 177
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__overflow(void );
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4322 {
#line 74
  AlarmToTimerC__0__fired = 0U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x1073f25d8);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4323 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 1U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4324 {

  VirtualizeTimerC__0__NUM_TIMERS = 6U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4325 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 100
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);
#line 204
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 113 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void CC2420CsmaP__SplitControl__startDone(error_t error);
#line 138
static void CC2420CsmaP__SplitControl__stopDone(error_t error);
# 95 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420CsmaP__RadioBackoff__requestCca(message_t * msg);
#line 81
static void CC2420CsmaP__RadioBackoff__requestInitialBackoff(message_t * msg);






static void CC2420CsmaP__RadioBackoff__requestCongestionBackoff(message_t * msg);
#line 66
static void CC2420CsmaP__SubBackoff__setCongestionBackoff(uint16_t backoffTime);
#line 60
static void CC2420CsmaP__SubBackoff__setInitialBackoff(uint16_t backoffTime);
# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static error_t CC2420CsmaP__CC2420Transmit__send(message_t * p_msg, bool useCca);
# 100 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
static void CC2420CsmaP__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t CC2420CsmaP__Random__rand16(void );
# 95 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t CC2420CsmaP__SubControl__start(void );









static error_t CC2420CsmaP__SubControl__stop(void );
# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420CsmaP__CC2420PacketBody__getHeader(message_t * msg);




static cc2420_metadata_t * CC2420CsmaP__CC2420PacketBody__getMetadata(message_t * msg);
# 71 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static error_t CC2420CsmaP__CC2420Power__startOscillator(void );
#line 90
static error_t CC2420CsmaP__CC2420Power__rxOn(void );
#line 51
static error_t CC2420CsmaP__CC2420Power__startVReg(void );
#line 63
static error_t CC2420CsmaP__CC2420Power__stopVReg(void );
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420CsmaP__Resource__release(void );
#line 88
static error_t CC2420CsmaP__Resource__request(void );
# 66 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/State.nc"
static bool CC2420CsmaP__SplitControlState__isState(uint8_t myState);
#line 45
static error_t CC2420CsmaP__SplitControlState__requestState(uint8_t reqState);





static void CC2420CsmaP__SplitControlState__forceState(uint8_t reqState);
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t CC2420CsmaP__sendDone_task__postTask(void );
#line 67
static error_t CC2420CsmaP__stopDone_task__postTask(void );
#line 67
static error_t CC2420CsmaP__startDone_task__postTask(void );
# 74 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
enum CC2420CsmaP____nesc_unnamed4326 {
#line 74
  CC2420CsmaP__startDone_task = 2U
};
#line 74
typedef int CC2420CsmaP____nesc_sillytask_startDone_task[CC2420CsmaP__startDone_task];
enum CC2420CsmaP____nesc_unnamed4327 {
#line 75
  CC2420CsmaP__stopDone_task = 3U
};
#line 75
typedef int CC2420CsmaP____nesc_sillytask_stopDone_task[CC2420CsmaP__stopDone_task];
enum CC2420CsmaP____nesc_unnamed4328 {
#line 76
  CC2420CsmaP__sendDone_task = 4U
};
#line 76
typedef int CC2420CsmaP____nesc_sillytask_sendDone_task[CC2420CsmaP__sendDone_task];
#line 58
enum CC2420CsmaP____nesc_unnamed4329 {
  CC2420CsmaP__S_STOPPED, 
  CC2420CsmaP__S_STARTING, 
  CC2420CsmaP__S_STARTED, 
  CC2420CsmaP__S_STOPPING, 
  CC2420CsmaP__S_TRANSMITTING
};

message_t * CC2420CsmaP__m_msg;

error_t CC2420CsmaP__sendErr = SUCCESS;


bool CC2420CsmaP__ccaOn;






static inline void CC2420CsmaP__shutdown(void );


static error_t CC2420CsmaP__SplitControl__start(void );
#line 122
static inline error_t CC2420CsmaP__Send__send(message_t *p_msg, uint8_t len);
#line 170
static inline uint8_t CC2420CsmaP__Send__maxPayloadLength(void );
#line 202
static inline void CC2420CsmaP__CC2420Transmit__sendDone(message_t *p_msg, error_t err);




static inline void CC2420CsmaP__CC2420Power__startVRegDone(void );



static inline void CC2420CsmaP__Resource__granted(void );



static inline void CC2420CsmaP__CC2420Power__startOscillatorDone(void );




static inline void CC2420CsmaP__SubBackoff__requestInitialBackoff(message_t *msg);






static inline void CC2420CsmaP__SubBackoff__requestCongestionBackoff(message_t *msg);
#line 241
static inline void CC2420CsmaP__sendDone_task__runTask(void );
#line 254
static inline void CC2420CsmaP__startDone_task__runTask(void );







static inline void CC2420CsmaP__stopDone_task__runTask(void );









static inline void CC2420CsmaP__shutdown(void );
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ControlP__CC2420Config__syncDone(error_t error);
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__RXCTRL1__write(uint16_t data);
# 66 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void CC2420ControlP__StartupTimer__start(CC2420ControlP__StartupTimer__size_type dt);
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__MDMCTRL0__write(uint16_t data);
# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP__RSTN__makeOutput(void );
#line 40
static void CC2420ControlP__RSTN__set(void );
static void CC2420ControlP__RSTN__clr(void );
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Read.nc"
static void CC2420ControlP__ReadRssi__readDone(error_t result, CC2420ControlP__ReadRssi__val_t val);
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t CC2420ControlP__syncDone__postTask(void );
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__RSSI__read(uint16_t *data);







static cc2420_status_t CC2420ControlP__IOCFG0__write(uint16_t data);
# 50 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t CC2420ControlP__ActiveMessageAddress__amAddress(void );




static am_group_t CC2420ControlP__ActiveMessageAddress__amGroup(void );
# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP__CSN__makeOutput(void );
#line 40
static void CC2420ControlP__CSN__set(void );
static void CC2420ControlP__CSN__clr(void );




static void CC2420ControlP__VREN__makeOutput(void );
#line 40
static void CC2420ControlP__VREN__set(void );
static void CC2420ControlP__VREN__clr(void );
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SXOSCON__strobe(void );
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__SpiResource__release(void );
#line 88
static error_t CC2420ControlP__SpiResource__request(void );
#line 120
static error_t CC2420ControlP__SyncResource__release(void );
#line 88
static error_t CC2420ControlP__SyncResource__request(void );
# 76 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static void CC2420ControlP__CC2420Power__startOscillatorDone(void );
#line 56
static void CC2420ControlP__CC2420Power__startVRegDone(void );
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__IOCFG1__write(uint16_t data);
#line 63
static cc2420_status_t CC2420ControlP__FSCTRL__write(uint16_t data);
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SRXON__strobe(void );
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420ControlP__Resource__granted(void );
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420ControlP__PANID__write(uint8_t offset, uint8_t * data, uint8_t length);
# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ControlP__InterruptCCA__disable(void );
#line 53
static error_t CC2420ControlP__InterruptCCA__enableRisingEdge(void );
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__RssiResource__release(void );
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SRFOFF__strobe(void );
# 117 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
enum CC2420ControlP____nesc_unnamed4330 {
#line 117
  CC2420ControlP__sync = 5U
};
#line 117
typedef int CC2420ControlP____nesc_sillytask_sync[CC2420ControlP__sync];
enum CC2420ControlP____nesc_unnamed4331 {
#line 118
  CC2420ControlP__syncDone = 6U
};
#line 118
typedef int CC2420ControlP____nesc_sillytask_syncDone[CC2420ControlP__syncDone];
#line 85
#line 79
typedef enum CC2420ControlP____nesc_unnamed4332 {
  CC2420ControlP__S_VREG_STOPPED, 
  CC2420ControlP__S_VREG_STARTING, 
  CC2420ControlP__S_VREG_STARTED, 
  CC2420ControlP__S_XOSC_STARTING, 
  CC2420ControlP__S_XOSC_STARTED
} CC2420ControlP__cc2420_control_state_t;

uint8_t CC2420ControlP__m_channel;

uint8_t CC2420ControlP__m_tx_power;

uint16_t CC2420ControlP__m_pan;

uint16_t CC2420ControlP__m_short_addr;

bool CC2420ControlP__m_sync_busy;


bool CC2420ControlP__autoAckEnabled;


bool CC2420ControlP__hwAutoAckDefault;


bool CC2420ControlP__addressRecognition;


bool CC2420ControlP__hwAddressRecognition;

CC2420ControlP__cc2420_control_state_t CC2420ControlP__m_state = CC2420ControlP__S_VREG_STOPPED;



static void CC2420ControlP__writeFsctrl(void );
static void CC2420ControlP__writeMdmctrl0(void );
static void CC2420ControlP__writeId(void );





static inline error_t CC2420ControlP__Init__init(void );
#line 171
static inline error_t CC2420ControlP__Resource__request(void );







static inline error_t CC2420ControlP__Resource__release(void );







static inline error_t CC2420ControlP__CC2420Power__startVReg(void );
#line 199
static inline error_t CC2420ControlP__CC2420Power__stopVReg(void );







static inline error_t CC2420ControlP__CC2420Power__startOscillator(void );
#line 249
static inline error_t CC2420ControlP__CC2420Power__rxOn(void );
#line 279
static uint16_t CC2420ControlP__CC2420Config__getShortAddr(void );







static inline uint16_t CC2420ControlP__CC2420Config__getPanAddr(void );
#line 300
static inline error_t CC2420ControlP__CC2420Config__sync(void );
#line 332
static inline bool CC2420ControlP__CC2420Config__isAddressRecognitionEnabled(void );
#line 359
static inline bool CC2420ControlP__CC2420Config__isHwAutoAckDefault(void );






static inline bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void );









static inline void CC2420ControlP__SyncResource__granted(void );
#line 390
static inline void CC2420ControlP__SpiResource__granted(void );




static inline void CC2420ControlP__RssiResource__granted(void );
#line 408
static inline void CC2420ControlP__StartupTimer__fired(void );









static inline void CC2420ControlP__InterruptCCA__fired(void );
#line 442
static inline void CC2420ControlP__sync__runTask(void );



static inline void CC2420ControlP__syncDone__runTask(void );









static void CC2420ControlP__writeFsctrl(void );
#line 473
static void CC2420ControlP__writeMdmctrl0(void );
#line 492
static void CC2420ControlP__writeId(void );
#line 509
static inline void CC2420ControlP__ReadRssi__default__readDone(error_t error, uint16_t data);
# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(uint16_t time);

static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(uint16_t delta);
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get(void );
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired(void );
# 57 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents(void );
#line 47
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__setControlAsCompare(void );










static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents(void );
#line 44
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt(void );
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Init__init(void );
#line 65
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop(void );




static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void );










static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 114
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void );
# 64 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__size_type /*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__get(void );






static bool /*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__isOverflowPending(void );










static void /*Counter32khz32C.Transform*/TransformCounterC__1__Counter__overflow(void );
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*Counter32khz32C.Transform*/TransformCounterC__1__upper_count_type /*Counter32khz32C.Transform*/TransformCounterC__1__m_upper;

enum /*Counter32khz32C.Transform*/TransformCounterC__1____nesc_unnamed4333 {

  TransformCounterC__1__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__1__HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC__1__from_size_type ) - /*Counter32khz32C.Transform*/TransformCounterC__1__LOW_SHIFT_RIGHT, 
  TransformCounterC__1__NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC__1__to_size_type ) - 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC__1__from_size_type ) + 0, 



  TransformCounterC__1__OVERFLOW_MASK = /*Counter32khz32C.Transform*/TransformCounterC__1__NUM_UPPER_BITS ? ((/*Counter32khz32C.Transform*/TransformCounterC__1__upper_count_type )2 << (/*Counter32khz32C.Transform*/TransformCounterC__1__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*Counter32khz32C.Transform*/TransformCounterC__1__to_size_type /*Counter32khz32C.Transform*/TransformCounterC__1__Counter__get(void );
#line 133
static inline void /*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__overflow(void );
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__fired(void );
#line 103
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type dt);
#line 73
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__stop(void );
# 64 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__get(void );
# 77 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0;
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt;

enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1____nesc_unnamed4334 {

  TransformAlarmC__1__MAX_DELAY_LOG2 = 8 * sizeof(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__from_size_type ) - 1 - 0, 
  TransformAlarmC__1__MAX_DELAY = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type )1 << /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__MAX_DELAY_LOG2
};

static inline /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__getNow(void );
#line 102
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__stop(void );




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__set_alarm(void );
#line 147
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type dt);









static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type dt);




static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__fired(void );
#line 177
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__overflow(void );
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__makeInput(void );
#line 70
static bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__get(void );
# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__get(void );
static inline void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__makeInput(void );
# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__makeOutput(void );
#line 45
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__set(void );




static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__clr(void );
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set(void );
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr(void );




static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput(void );
# 70 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__HplGeneralIO__get(void );
# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__GeneralIO__get(void );
# 70 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__HplGeneralIO__get(void );
# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__GeneralIO__get(void );
# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__makeOutput(void );
#line 45
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__set(void );




static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__clr(void );
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__set(void );
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__clr(void );




static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__makeOutput(void );
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__makeInput(void );
#line 70
static bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__get(void );
# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__get(void );
static inline void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__makeInput(void );
# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__makeOutput(void );
#line 45
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__set(void );




static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__clr(void );
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__set(void );
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__clr(void );




static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__makeOutput(void );
# 68 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow(void );
# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captured(uint16_t time);
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__setControlAsCapture(uint8_t cm);

static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__enableEvents(void );
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents(void );
#line 44
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt(void );
# 96 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectIOFunc(void );
#line 89
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectModuleFunc(void );
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(uint8_t mode);
#line 61
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge(void );



static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureFallingEdge(void );



static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__disable(void );






static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(uint16_t time);
# 72 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void HplMsp430InterruptP__Port14__fired(void );
#line 72
static void HplMsp430InterruptP__Port26__fired(void );
#line 72
static void HplMsp430InterruptP__Port17__fired(void );
#line 72
static void HplMsp430InterruptP__Port21__fired(void );
#line 72
static void HplMsp430InterruptP__Port12__fired(void );
#line 72
static void HplMsp430InterruptP__Port24__fired(void );
#line 72
static void HplMsp430InterruptP__Port15__fired(void );
#line 72
static void HplMsp430InterruptP__Port27__fired(void );
#line 72
static void HplMsp430InterruptP__Port10__fired(void );
#line 72
static void HplMsp430InterruptP__Port22__fired(void );
#line 72
static void HplMsp430InterruptP__Port13__fired(void );
#line 72
static void HplMsp430InterruptP__Port25__fired(void );
#line 72
static void HplMsp430InterruptP__Port16__fired(void );
#line 72
static void HplMsp430InterruptP__Port20__fired(void );
#line 72
static void HplMsp430InterruptP__Port11__fired(void );
#line 72
static void HplMsp430InterruptP__Port23__fired(void );
# 64 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
void sig_PORT1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(8)))  ;
#line 79
static inline void HplMsp430InterruptP__Port11__default__fired(void );
static inline void HplMsp430InterruptP__Port12__default__fired(void );
static inline void HplMsp430InterruptP__Port13__default__fired(void );


static inline void HplMsp430InterruptP__Port16__default__fired(void );
static inline void HplMsp430InterruptP__Port17__default__fired(void );
static inline void HplMsp430InterruptP__Port10__enable(void );



static inline void HplMsp430InterruptP__Port14__enable(void );
static inline void HplMsp430InterruptP__Port15__enable(void );


static inline void HplMsp430InterruptP__Port10__disable(void );



static inline void HplMsp430InterruptP__Port14__disable(void );
static inline void HplMsp430InterruptP__Port15__disable(void );


static inline void HplMsp430InterruptP__Port10__clear(void );
static inline void HplMsp430InterruptP__Port11__clear(void );
static inline void HplMsp430InterruptP__Port12__clear(void );
static inline void HplMsp430InterruptP__Port13__clear(void );
static inline void HplMsp430InterruptP__Port14__clear(void );
static inline void HplMsp430InterruptP__Port15__clear(void );
static inline void HplMsp430InterruptP__Port16__clear(void );
static inline void HplMsp430InterruptP__Port17__clear(void );








static inline void HplMsp430InterruptP__Port10__edge(bool l2h);
#line 142
static inline void HplMsp430InterruptP__Port14__edge(bool l2h);





static inline void HplMsp430InterruptP__Port15__edge(bool l2h);
#line 169
void sig_PORT2_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(2)))  ;
#line 182
static inline void HplMsp430InterruptP__Port20__default__fired(void );
static inline void HplMsp430InterruptP__Port21__default__fired(void );
static inline void HplMsp430InterruptP__Port22__default__fired(void );
static inline void HplMsp430InterruptP__Port23__default__fired(void );
static inline void HplMsp430InterruptP__Port24__default__fired(void );
static inline void HplMsp430InterruptP__Port25__default__fired(void );
static inline void HplMsp430InterruptP__Port26__default__fired(void );
static inline void HplMsp430InterruptP__Port27__default__fired(void );
#line 206
static inline void HplMsp430InterruptP__Port20__clear(void );
static inline void HplMsp430InterruptP__Port21__clear(void );
static inline void HplMsp430InterruptP__Port22__clear(void );
static inline void HplMsp430InterruptP__Port23__clear(void );
static inline void HplMsp430InterruptP__Port24__clear(void );
static inline void HplMsp430InterruptP__Port25__clear(void );
static inline void HplMsp430InterruptP__Port26__clear(void );
static inline void HplMsp430InterruptP__Port27__clear(void );
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear(void );
#line 47
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__disable(void );
#line 67
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__edge(bool low_to_high);
#line 42
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__enable(void );
# 68 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__fired(void );
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__enable(bool rising);








static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge(void );







static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable(void );







static inline void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired(void );
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear(void );
#line 47
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__disable(void );
#line 67
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__edge(bool low_to_high);
#line 42
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__enable(void );
# 68 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__fired(void );
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__enable(bool rising);
#line 65
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge(void );



static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable(void );







static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired(void );
# 70 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static error_t CC2420SpiP__SpiPacket__send(
#line 59
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 91 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420SpiP__Fifo__writeDone(
# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x1077de368, 
# 91 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420SpiP__Fifo__readDone(
# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x1077de368, 
# 71 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 24 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP__ChipSpiResource__releasing(void );
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SpiByte.nc"
static uint8_t CC2420SpiP__SpiByte__write(uint8_t tx);
# 56 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/State.nc"
static void CC2420SpiP__WorkingState__toIdle(void );




static bool CC2420SpiP__WorkingState__isIdle(void );
#line 45
static error_t CC2420SpiP__WorkingState__requestState(uint8_t reqState);
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__SpiResource__release(void );
#line 97
static error_t CC2420SpiP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420SpiP__SpiResource__request(void );
#line 128
static bool CC2420SpiP__SpiResource__isOwner(void );
#line 102
static void CC2420SpiP__Resource__granted(
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x1077df1a0);
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t CC2420SpiP__grant__postTask(void );
# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
enum CC2420SpiP____nesc_unnamed4335 {
#line 88
  CC2420SpiP__grant = 7U
};
#line 88
typedef int CC2420SpiP____nesc_sillytask_grant[CC2420SpiP__grant];
#line 63
enum CC2420SpiP____nesc_unnamed4336 {
  CC2420SpiP__RESOURCE_COUNT = 5U, 
  CC2420SpiP__NO_HOLDER = 0xFF
};


enum CC2420SpiP____nesc_unnamed4337 {
  CC2420SpiP__S_IDLE, 
  CC2420SpiP__S_BUSY
};


uint16_t CC2420SpiP__m_addr;


uint8_t CC2420SpiP__m_requests = 0;


uint8_t CC2420SpiP__m_holder = CC2420SpiP__NO_HOLDER;


bool CC2420SpiP__release;


static error_t CC2420SpiP__attemptRelease(void );







static inline void CC2420SpiP__ChipSpiResource__abortRelease(void );






static inline error_t CC2420SpiP__ChipSpiResource__attemptRelease(void );




static error_t CC2420SpiP__Resource__request(uint8_t id);
#line 126
static error_t CC2420SpiP__Resource__immediateRequest(uint8_t id);
#line 149
static error_t CC2420SpiP__Resource__release(uint8_t id);
#line 178
static inline uint8_t CC2420SpiP__Resource__isOwner(uint8_t id);





static inline void CC2420SpiP__SpiResource__granted(void );




static cc2420_status_t CC2420SpiP__Fifo__beginRead(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 209
static inline error_t CC2420SpiP__Fifo__continueRead(uint8_t addr, uint8_t *data, 
uint8_t len);



static inline cc2420_status_t CC2420SpiP__Fifo__write(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 260
static cc2420_status_t CC2420SpiP__Ram__write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len);
#line 287
static inline cc2420_status_t CC2420SpiP__Reg__read(uint8_t addr, uint16_t *data);
#line 305
static cc2420_status_t CC2420SpiP__Reg__write(uint8_t addr, uint16_t data);
#line 318
static cc2420_status_t CC2420SpiP__Strobe__strobe(uint8_t addr);










static void CC2420SpiP__SpiPacket__sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error);








static error_t CC2420SpiP__attemptRelease(void );
#line 358
static inline void CC2420SpiP__grant__runTask(void );








static inline void CC2420SpiP__Resource__default__granted(uint8_t id);


static inline void CC2420SpiP__Fifo__default__readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error);


static inline void CC2420SpiP__Fifo__default__writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error);
# 74 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t StateImplP__state[4U];

enum StateImplP____nesc_unnamed4338 {
  StateImplP__S_IDLE = 0
};


static inline error_t StateImplP__Init__init(void );
#line 96
static error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState);
#line 111
static inline void StateImplP__State__forceState(uint8_t id, uint8_t reqState);






static inline void StateImplP__State__toIdle(uint8_t id);







static inline bool StateImplP__State__isIdle(uint8_t id);






static bool StateImplP__State__isState(uint8_t id, uint8_t myState);
# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__sendDone(
# 79 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x1078d37d8, 
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiConfigure.nc"
static msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__getConfig(
# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x1078d0830);
# 180 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__enableRxIntr(void );
#line 197
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__clrRxIntr(void );
#line 97
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__resetUsart(bool reset);
#line 177
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableRxIntr(void );
#line 224
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(uint8_t data);
#line 168
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__setModeSpi(msp430_spi_union_config_t *config);
#line 231
static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__rx(void );
#line 192
static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__isRxIntrPending(void );
#line 158
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableSpi(void );
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__release(
# 81 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x1078d2588);
# 97 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__immediateRequest(
# 81 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x1078d2588);
# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__request(
# 81 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x1078d2588);
# 128 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__isOwner(
# 81 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x1078d2588);
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__granted(
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x1078d6648);
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__postTask(void );
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
enum /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0____nesc_unnamed4339 {
#line 102
  Msp430SpiNoDmaP__0__signalDone_task = 8U
};
#line 102
typedef int /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0____nesc_sillytask_signalDone_task[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task];
#line 91
enum /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0____nesc_unnamed4340 {
  Msp430SpiNoDmaP__0__SPI_ATOMIC_SIZE = 2
};

uint16_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len;
uint8_t * /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf;
uint8_t * /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf;
uint16_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos;
uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_client;

static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone(void );


static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__immediateRequest(uint8_t id);



static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__request(uint8_t id);



static inline uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__isOwner(uint8_t id);



static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__release(uint8_t id);



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__configure(uint8_t id);



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__unconfigure(uint8_t id);





static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__granted(uint8_t id);



static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiByte__write(uint8_t tx);
#line 173
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__isOwner(uint8_t id);
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__request(uint8_t id);
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__immediateRequest(uint8_t id);
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__release(uint8_t id);
static inline msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__default__getConfig(uint8_t id);



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__default__granted(uint8_t id);

static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__continueOp(void );
#line 206
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__send(uint8_t id, uint8_t *tx_buf, 
uint8_t *rx_buf, 
uint16_t len);
#line 228
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__runTask(void );



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__rxDone(uint8_t data);
#line 245
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone(void );




static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__txDone(void );

static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__default__sendDone(uint8_t id, uint8_t *tx_buf, uint8_t *rx_buf, uint16_t len, error_t error);
# 96 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__UCLK__selectIOFunc(void );
#line 89
static void HplMsp430Usart0P__UCLK__selectModuleFunc(void );
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void HplMsp430Usart0P__Interrupts__rxDone(uint8_t data);
#line 49
static void HplMsp430Usart0P__Interrupts__txDone(void );
# 96 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__URXD__selectIOFunc(void );
#line 96
static void HplMsp430Usart0P__UTXD__selectIOFunc(void );
# 7 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2C.nc"
static void HplMsp430Usart0P__HplI2C__clearModeI2C(void );
#line 6
static bool HplMsp430Usart0P__HplI2C__isI2C(void );
# 96 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__SOMI__selectIOFunc(void );
#line 89
static void HplMsp430Usart0P__SOMI__selectModuleFunc(void );
# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void HplMsp430Usart0P__I2CInterrupts__fired(void );
# 96 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__SIMO__selectIOFunc(void );
#line 89
static void HplMsp430Usart0P__SIMO__selectModuleFunc(void );
# 89 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static volatile uint8_t HplMsp430Usart0P__IE1 __asm ("0x0000");
static volatile uint8_t HplMsp430Usart0P__ME1 __asm ("0x0004");
static volatile uint8_t HplMsp430Usart0P__IFG1 __asm ("0x0002");
static volatile uint8_t HplMsp430Usart0P__U0TCTL __asm ("0x0071");

static volatile uint8_t HplMsp430Usart0P__U0TXBUF __asm ("0x0077");

void sig_UART0RX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(18)))  ;




void sig_UART0TX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(16)))  ;
#line 132
static inline void HplMsp430Usart0P__Usart__setUbr(uint16_t control);










static inline void HplMsp430Usart0P__Usart__setUmctl(uint8_t control);







static inline void HplMsp430Usart0P__Usart__resetUsart(bool reset);
#line 207
static inline void HplMsp430Usart0P__Usart__disableUart(void );
#line 238
static inline void HplMsp430Usart0P__Usart__enableSpi(void );








static void HplMsp430Usart0P__Usart__disableSpi(void );








static inline void HplMsp430Usart0P__configSpi(msp430_spi_union_config_t *config);








static void HplMsp430Usart0P__Usart__setModeSpi(msp430_spi_union_config_t *config);
#line 330
static inline bool HplMsp430Usart0P__Usart__isRxIntrPending(void );










static inline void HplMsp430Usart0P__Usart__clrRxIntr(void );



static inline void HplMsp430Usart0P__Usart__clrIntr(void );



static inline void HplMsp430Usart0P__Usart__disableRxIntr(void );







static inline void HplMsp430Usart0P__Usart__disableIntr(void );



static inline void HplMsp430Usart0P__Usart__enableRxIntr(void );
#line 382
static inline void HplMsp430Usart0P__Usart__tx(uint8_t data);



static inline uint8_t HplMsp430Usart0P__Usart__rx(void );
# 90 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId(void );
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__rxDone(
# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x107a65800, 
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(
# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x107a65800);
# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__fired(
# 40 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x107a64620);








static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone(void );




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(uint8_t data);




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired(void );




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(uint8_t id);
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(uint8_t id, uint8_t data);
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(uint8_t id);
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1____nesc_unnamed4341 {
#line 49
  FcfsResourceQueueC__1__NO_ENTRY = 0xFF
};
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ[1U];
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qTail = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__Init__init(void );




static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );



static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__requested(
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x107a757e8);
# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x107a757e8);
# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
# 60 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x107a739b8);
# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x107a739b8);
# 79 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue(void );
# 73 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void );
#line 81
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested(void );
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x107a77658);
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4342 {
#line 75
  ArbiterP__0__grantedTask = 9U
};
#line 75
typedef int /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4343 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4344 {
#line 68
  ArbiterP__0__default_owner_id = 1U
};
#line 69
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4345 {
#line 69
  ArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id;
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId;



static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__request(uint8_t id);
#line 93
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(uint8_t id);
#line 111
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(uint8_t id);
#line 133
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 153
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse(void );
#line 166
static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void );










static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(uint8_t id);
#line 190
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
#line 202
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void );

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void );


static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested(void );


static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 97 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
static void HplMsp430I2C0P__HplUsart__resetUsart(bool reset);
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2C0P.nc"
static volatile uint8_t HplMsp430I2C0P__U0CTL __asm ("0x0070");





static inline bool HplMsp430I2C0P__HplI2C__isI2C(void );



static inline void HplMsp430I2C0P__HplI2C__clearModeI2C(void );
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC__addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC__group = TOS_AM_GROUP;






static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );
#line 93
static inline am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
#line 106
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 81 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420TransmitP__RadioBackoff__requestInitialBackoff(message_t * msg);






static void CC2420TransmitP__RadioBackoff__requestCongestionBackoff(message_t * msg);
# 70 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static void CC2420TransmitP__PacketTimeStamp__clear(
#line 66
message_t * msg);
#line 78
static void CC2420TransmitP__PacketTimeStamp__set(
#line 73
message_t * msg, 




CC2420TransmitP__PacketTimeStamp__size_type value);
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__STXONCCA__strobe(void );
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static error_t CC2420TransmitP__CaptureSFD__captureFallingEdge(void );
#line 66
static void CC2420TransmitP__CaptureSFD__disable(void );
#line 53
static error_t CC2420TransmitP__CaptureSFD__captureRisingEdge(void );
# 109 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
static CC2420TransmitP__BackoffTimer__size_type CC2420TransmitP__BackoffTimer__getNow(void );
#line 66
static void CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__BackoffTimer__size_type dt);






static void CC2420TransmitP__BackoffTimer__stop(void );
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420TransmitP__TXFIFO_RAM__write(uint8_t offset, uint8_t * data, uint8_t length);
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420TransmitP__TXCTRL__write(uint16_t data);
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP__CC2420Receive__sfd_dropped(void );
#line 49
static void CC2420TransmitP__CC2420Receive__sfd(uint32_t time);
# 73 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static void CC2420TransmitP__Send__sendDone(message_t * p_msg, error_t error);
# 31 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP__ChipSpiResource__abortRelease(void );







static error_t CC2420TransmitP__ChipSpiResource__attemptRelease(void );
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__SFLUSHTX__strobe(void );
# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__CSN__makeOutput(void );
#line 40
static void CC2420TransmitP__CSN__set(void );
static void CC2420TransmitP__CSN__clr(void );
# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420TransmitP__CC2420PacketBody__getHeader(message_t * msg);




static cc2420_metadata_t * CC2420TransmitP__CC2420PacketBody__getMetadata(message_t * msg);
# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
static uint8_t CC2420TransmitP__PacketTimeSyncOffset__get(
#line 53
message_t * msg);
#line 50
static bool CC2420TransmitP__PacketTimeSyncOffset__isSet(
#line 46
message_t * msg);
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420TransmitP__SpiResource__release(void );
#line 97
static error_t CC2420TransmitP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420TransmitP__SpiResource__request(void );
# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__CCA__makeInput(void );
#line 43
static bool CC2420TransmitP__CCA__get(void );
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__SNOP__strobe(void );
# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__SFD__makeInput(void );
#line 43
static bool CC2420TransmitP__SFD__get(void );
# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static cc2420_status_t CC2420TransmitP__TXFIFO__write(uint8_t * data, uint8_t length);
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__STXON__strobe(void );
# 99 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
#line 89
typedef enum CC2420TransmitP____nesc_unnamed4346 {
  CC2420TransmitP__S_STOPPED, 
  CC2420TransmitP__S_STARTED, 
  CC2420TransmitP__S_LOAD, 
  CC2420TransmitP__S_SAMPLE_CCA, 
  CC2420TransmitP__S_BEGIN_TRANSMIT, 
  CC2420TransmitP__S_SFD, 
  CC2420TransmitP__S_EFD, 
  CC2420TransmitP__S_ACK_WAIT, 
  CC2420TransmitP__S_CANCEL
} CC2420TransmitP__cc2420_transmit_state_t;





enum CC2420TransmitP____nesc_unnamed4347 {
  CC2420TransmitP__CC2420_ABORT_PERIOD = 320
};
#line 120
message_t * CC2420TransmitP__m_msg;

bool CC2420TransmitP__m_cca;

uint8_t CC2420TransmitP__m_tx_power;

CC2420TransmitP__cc2420_transmit_state_t CC2420TransmitP__m_state = CC2420TransmitP__S_STOPPED;

bool CC2420TransmitP__m_receiving = FALSE;

uint16_t CC2420TransmitP__m_prev_time;


bool CC2420TransmitP__sfdHigh;


bool CC2420TransmitP__abortSpiRelease;


int8_t CC2420TransmitP__totalCcaChecks;


uint16_t CC2420TransmitP__myInitialBackoff;


uint16_t CC2420TransmitP__myCongestionBackoff;



static inline error_t CC2420TransmitP__send(message_t * p_msg, bool cca);

static void CC2420TransmitP__loadTXFIFO(void );
static void CC2420TransmitP__attemptSend(void );
static void CC2420TransmitP__congestionBackoff(void );
static error_t CC2420TransmitP__acquireSpiResource(void );
static inline error_t CC2420TransmitP__releaseSpiResource(void );
static void CC2420TransmitP__signalDone(error_t err);



static inline error_t CC2420TransmitP__Init__init(void );







static inline error_t CC2420TransmitP__StdControl__start(void );










static inline error_t CC2420TransmitP__StdControl__stop(void );
#line 192
static inline error_t CC2420TransmitP__Send__send(message_t * p_msg, bool useCca);
#line 243
static inline void CC2420TransmitP__RadioBackoff__setInitialBackoff(uint16_t backoffTime);







static inline void CC2420TransmitP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime);







static __inline uint32_t CC2420TransmitP__getTime32(uint16_t captured_time);
#line 280
static inline void CC2420TransmitP__CaptureSFD__captured(uint16_t time);
#line 377
static inline void CC2420TransmitP__ChipSpiResource__releasing(void );
#line 389
static inline void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t *ack_msg);
#line 416
static inline void CC2420TransmitP__SpiResource__granted(void );
#line 454
static inline void CC2420TransmitP__TXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);
#line 486
static inline void CC2420TransmitP__TXFIFO__readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);










static inline void CC2420TransmitP__BackoffTimer__fired(void );
#line 547
static inline error_t CC2420TransmitP__send(message_t * p_msg, bool cca);
#line 737
static void CC2420TransmitP__attemptSend(void );
#line 782
static void CC2420TransmitP__congestionBackoff(void );






static error_t CC2420TransmitP__acquireSpiResource(void );







static inline error_t CC2420TransmitP__releaseSpiResource(void );
#line 819
static void CC2420TransmitP__loadTXFIFO(void );
#line 844
static void CC2420TransmitP__signalDone(error_t err);
# 43 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP__FIFO__get(void );
# 86 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static bool CC2420ReceiveP__CC2420Config__isAddressRecognitionEnabled(void );
#line 110
static bool CC2420ReceiveP__CC2420Config__isAutoAckEnabled(void );
#line 105
static bool CC2420ReceiveP__CC2420Config__isHwAutoAckDefault(void );
#line 64
static uint16_t CC2420ReceiveP__CC2420Config__getShortAddr(void );
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t CC2420ReceiveP__receiveDone_task__postTask(void );
# 70 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static void CC2420ReceiveP__PacketTimeStamp__clear(
#line 66
message_t * msg);
#line 78
static void CC2420ReceiveP__PacketTimeStamp__set(
#line 73
message_t * msg, 




CC2420ReceiveP__PacketTimeStamp__size_type value);
# 43 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP__FIFOP__get(void );
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP__CC2420Receive__receive(uint8_t type, message_t * message);
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ReceiveP__SACK__strobe(void );
# 40 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420ReceiveP__CSN__set(void );
static void CC2420ReceiveP__CSN__clr(void );
# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420ReceiveP__CC2420PacketBody__getHeader(message_t * msg);




static cc2420_metadata_t * CC2420ReceiveP__CC2420PacketBody__getMetadata(message_t * msg);
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420ReceiveP__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420ReceiveP__SpiResource__release(void );
#line 97
static error_t CC2420ReceiveP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420ReceiveP__SpiResource__request(void );
#line 128
static bool CC2420ReceiveP__SpiResource__isOwner(void );
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420ReceiveP__RXFIFO__continueRead(uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420ReceiveP__RXFIFO__beginRead(uint8_t * data, uint8_t length);
# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ReceiveP__InterruptFIFOP__disable(void );
#line 54
static error_t CC2420ReceiveP__InterruptFIFOP__enableFallingEdge(void );
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ReceiveP__SFLUSHRX__strobe(void );
# 148 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
enum CC2420ReceiveP____nesc_unnamed4348 {
#line 148
  CC2420ReceiveP__receiveDone_task = 10U
};
#line 148
typedef int CC2420ReceiveP____nesc_sillytask_receiveDone_task[CC2420ReceiveP__receiveDone_task];
#line 89
#line 81
typedef enum CC2420ReceiveP____nesc_unnamed4349 {
  CC2420ReceiveP__S_STOPPED, 
  CC2420ReceiveP__S_STARTED, 
  CC2420ReceiveP__S_RX_LENGTH, 
  CC2420ReceiveP__S_RX_DEC, 
  CC2420ReceiveP__S_RX_DEC_WAIT, 
  CC2420ReceiveP__S_RX_FCF, 
  CC2420ReceiveP__S_RX_PAYLOAD
} CC2420ReceiveP__cc2420_receive_state_t;

enum CC2420ReceiveP____nesc_unnamed4350 {
  CC2420ReceiveP__RXFIFO_SIZE = 128, 
  CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE = 8, 
  CC2420ReceiveP__SACK_HEADER_LENGTH = 7
};

uint32_t CC2420ReceiveP__m_timestamp_queue[CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE];

uint8_t CC2420ReceiveP__m_timestamp_head;

uint8_t CC2420ReceiveP__m_timestamp_size;





uint8_t CC2420ReceiveP__m_missed_packets;



bool CC2420ReceiveP__receivingPacket;


uint8_t CC2420ReceiveP__rxFrameLength;

uint8_t CC2420ReceiveP__m_bytes_left;

message_t * CC2420ReceiveP__m_p_rx_buf;

message_t CC2420ReceiveP__m_rx_buf;
#line 137
CC2420ReceiveP__cc2420_receive_state_t CC2420ReceiveP__m_state;



static void CC2420ReceiveP__reset_state(void );
static void CC2420ReceiveP__beginReceive(void );
static void CC2420ReceiveP__receive(void );
static void CC2420ReceiveP__waitForNextPacket(void );
static void CC2420ReceiveP__flush(void );
static inline bool CC2420ReceiveP__passesAddressCheck(message_t * msg);




static inline error_t CC2420ReceiveP__Init__init(void );





static inline error_t CC2420ReceiveP__StdControl__start(void );
#line 171
static inline error_t CC2420ReceiveP__StdControl__stop(void );
#line 186
static inline void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time);








static inline void CC2420ReceiveP__CC2420Receive__sfd_dropped(void );
#line 212
static inline void CC2420ReceiveP__InterruptFIFOP__fired(void );
#line 508
static inline void CC2420ReceiveP__SpiResource__granted(void );
#line 525
static inline void CC2420ReceiveP__RXFIFO__readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error);
#line 663
static inline void CC2420ReceiveP__RXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error);







static inline void CC2420ReceiveP__receiveDone_task__runTask(void );
#line 704
static inline void CC2420ReceiveP__CC2420Config__syncDone(error_t error);






static void CC2420ReceiveP__beginReceive(void );
#line 728
static void CC2420ReceiveP__flush(void );
#line 754
static void CC2420ReceiveP__receive(void );









static void CC2420ReceiveP__waitForNextPacket(void );
#line 808
static void CC2420ReceiveP__reset_state(void );










static inline bool CC2420ReceiveP__passesAddressCheck(message_t *msg);
# 98 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static uint8_t CC2420PacketP__CC2420Packet__getNetwork(message_t *p_msg);







static void CC2420PacketP__CC2420Packet__setNetwork(message_t *p_msg, uint8_t networkId);







static inline cc2420_header_t * CC2420PacketP__CC2420PacketBody__getHeader(message_t * msg);



static inline cc2420_metadata_t *CC2420PacketP__CC2420PacketBody__getMetadata(message_t *msg);
#line 137
static void CC2420PacketP__PacketTimeStamp32khz__clear(message_t *msg);





static inline void CC2420PacketP__PacketTimeStamp32khz__set(message_t *msg, uint32_t value);
#line 176
static inline bool CC2420PacketP__PacketTimeSyncOffset__isSet(message_t *msg);








static inline uint8_t CC2420PacketP__PacketTimeSyncOffset__get(message_t *msg);
# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed;


static inline error_t RandomMlcgC__Init__init(void );
#line 69
static uint32_t RandomMlcgC__Random__rand32(void );
#line 89
static inline uint16_t RandomMlcgC__Random__rand16(void );
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
static error_t UniqueSendP__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
#line 112
static uint8_t UniqueSendP__SubSend__maxPayloadLength(void );
#line 100
static void UniqueSendP__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t UniqueSendP__Random__rand16(void );
# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * UniqueSendP__CC2420PacketBody__getHeader(message_t * msg);
# 56 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/State.nc"
static void UniqueSendP__State__toIdle(void );
#line 45
static error_t UniqueSendP__State__requestState(uint8_t reqState);
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
uint8_t UniqueSendP__localSendId;

enum UniqueSendP____nesc_unnamed4351 {
  UniqueSendP__S_IDLE, 
  UniqueSendP__S_SENDING
};


static inline error_t UniqueSendP__Init__init(void );
#line 75
static error_t UniqueSendP__Send__send(message_t *msg, uint8_t len);
#line 95
static inline uint8_t UniqueSendP__Send__maxPayloadLength(void );








static inline void UniqueSendP__SubSend__sendDone(message_t *msg, error_t error);
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



UniqueReceiveP__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * UniqueReceiveP__CC2420PacketBody__getHeader(message_t * msg);
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



UniqueReceiveP__DuplicateReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
#line 56
struct UniqueReceiveP____nesc_unnamed4352 {
  am_addr_t source;
  uint8_t dsn;
} UniqueReceiveP__receivedMessages[4];

uint8_t UniqueReceiveP__writeIndex = 0;


uint8_t UniqueReceiveP__recycleSourceElement;

enum UniqueReceiveP____nesc_unnamed4353 {
  UniqueReceiveP__INVALID_ELEMENT = 0xFF
};


static inline error_t UniqueReceiveP__Init__init(void );









static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn);
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn);


static inline message_t *UniqueReceiveP__SubReceive__receive(message_t *msg, void *payload, 
uint8_t len);
#line 111
static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn);
#line 137
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn);
#line 158
static inline message_t *UniqueReceiveP__DuplicateReceive__default__receive(message_t *msg, void *payload, uint8_t len);
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
static error_t CC2420TinyosNetworkP__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
#line 112
static uint8_t CC2420TinyosNetworkP__SubSend__maxPayloadLength(void );
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t CC2420TinyosNetworkP__grantTask__postTask(void );
# 77 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Packet.nc"
static void CC2420TinyosNetworkP__CC2420Packet__setNetwork(message_t *p_msg, uint8_t networkId);
#line 75
static uint8_t CC2420TinyosNetworkP__CC2420Packet__getNetwork(message_t *p_msg);
# 100 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__ActiveSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 79 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t CC2420TinyosNetworkP__Queue__enqueue(resource_client_id_t id);
#line 53
static bool CC2420TinyosNetworkP__Queue__isEmpty(void );
#line 70
static resource_client_id_t CC2420TinyosNetworkP__Queue__dequeue(void );
# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420TinyosNetworkP__CC2420PacketBody__getHeader(message_t * msg);




static cc2420_metadata_t * CC2420TinyosNetworkP__CC2420PacketBody__getMetadata(message_t * msg);
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420TinyosNetworkP__BareReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420TinyosNetworkP__Resource__granted(
# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x107e84550);
# 100 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__BareSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420TinyosNetworkP__ActiveReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 148 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
enum CC2420TinyosNetworkP____nesc_unnamed4354 {
#line 148
  CC2420TinyosNetworkP__grantTask = 11U
};
#line 148
typedef int CC2420TinyosNetworkP____nesc_sillytask_grantTask[CC2420TinyosNetworkP__grantTask];
#line 66
enum CC2420TinyosNetworkP____nesc_unnamed4355 {
  CC2420TinyosNetworkP__OWNER_NONE = 0xff, 
  CC2420TinyosNetworkP__TINYOS_N_NETWORKS = 1U
};

uint8_t CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__OWNER_NONE;
#line 71
uint8_t CC2420TinyosNetworkP__next_owner;

static inline error_t CC2420TinyosNetworkP__ActiveSend__send(message_t *msg, uint8_t len);








static inline uint8_t CC2420TinyosNetworkP__ActiveSend__maxPayloadLength(void );



static inline void *CC2420TinyosNetworkP__ActiveSend__getPayload(message_t *msg, uint8_t len);
#line 118
static inline void CC2420TinyosNetworkP__SubSend__sendDone(message_t *msg, error_t error);








static inline message_t *CC2420TinyosNetworkP__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 148
static inline void CC2420TinyosNetworkP__grantTask__runTask(void );
#line 167
static inline error_t CC2420TinyosNetworkP__Resource__request(uint8_t id);
#line 184
static inline error_t CC2420TinyosNetworkP__Resource__immediateRequest(uint8_t id);
#line 198
static inline error_t CC2420TinyosNetworkP__Resource__release(uint8_t id);
#line 210
static inline message_t *CC2420TinyosNetworkP__BareReceive__default__receive(message_t *msg, void *payload, uint8_t len);


static inline void CC2420TinyosNetworkP__BareSend__default__sendDone(message_t *msg, error_t error);








static inline void CC2420TinyosNetworkP__Resource__default__granted(uint8_t client);
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0____nesc_unnamed4356 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[1];
uint8_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init(void );




static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );



static inline bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
static error_t CC2420ActiveMessageP__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

CC2420ActiveMessageP__SubSend__getPayload(
#line 122
message_t * msg, 


uint8_t len);
#line 112
static uint8_t CC2420ActiveMessageP__SubSend__maxPayloadLength(void );
# 70 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static uint16_t CC2420ActiveMessageP__CC2420Config__getPanAddr(void );
# 95 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP__RadioBackoff__requestCca(
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x107f24d60, 
# 95 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
#line 81
static void CC2420ActiveMessageP__RadioBackoff__requestInitialBackoff(
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x107f24d60, 
# 81 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);






static void CC2420ActiveMessageP__RadioBackoff__requestCongestionBackoff(
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x107f24d60, 
# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SendNotifier.nc"
static void CC2420ActiveMessageP__SendNotifier__aboutToSend(
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x107f24258, 
# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 110 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMSend.nc"
static void CC2420ActiveMessageP__AMSend__sendDone(
# 47 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x107f2a6c0, 
# 103 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420ActiveMessageP__Snoop__receive(
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x107f27480, 
# 71 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 50 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t CC2420ActiveMessageP__ActiveMessageAddress__amAddress(void );
# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420ActiveMessageP__CC2420PacketBody__getHeader(message_t * msg);
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420ActiveMessageP__Receive__receive(
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x107f28908, 
# 71 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420ActiveMessageP__RadioResource__release(void );
#line 97
static error_t CC2420ActiveMessageP__RadioResource__immediateRequest(void );
#line 88
static error_t CC2420ActiveMessageP__RadioResource__request(void );
# 70 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
uint16_t CC2420ActiveMessageP__pending_length;
message_t *CC2420ActiveMessageP__pending_message = (void *)0;

static void CC2420ActiveMessageP__RadioResource__granted(void );
#line 86
static error_t CC2420ActiveMessageP__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len);
#line 130
static inline am_addr_t CC2420ActiveMessageP__AMPacket__address(void );



static am_addr_t CC2420ActiveMessageP__AMPacket__destination(message_t *amsg);









static inline void CC2420ActiveMessageP__AMPacket__setDestination(message_t *amsg, am_addr_t addr);









static inline bool CC2420ActiveMessageP__AMPacket__isForMe(message_t *amsg);




static am_id_t CC2420ActiveMessageP__AMPacket__type(message_t *amsg);




static void CC2420ActiveMessageP__AMPacket__setType(message_t *amsg, am_id_t type);
#line 189
static inline uint8_t CC2420ActiveMessageP__Packet__payloadLength(message_t *msg);



static inline void CC2420ActiveMessageP__Packet__setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t CC2420ActiveMessageP__Packet__maxPayloadLength(void );



static inline void *CC2420ActiveMessageP__Packet__getPayload(message_t *msg, uint8_t len);





static inline void CC2420ActiveMessageP__SubSend__sendDone(message_t *msg, error_t result);






static inline message_t *CC2420ActiveMessageP__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 230
static inline void CC2420ActiveMessageP__CC2420Config__syncDone(error_t error);





static inline void CC2420ActiveMessageP__SubBackoff__requestInitialBackoff(message_t *msg);




static inline void CC2420ActiveMessageP__SubBackoff__requestCongestionBackoff(message_t *msg);



static inline void CC2420ActiveMessageP__SubBackoff__requestCca(message_t *msg);
#line 274
static inline message_t *CC2420ActiveMessageP__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t *CC2420ActiveMessageP__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);







static inline void CC2420ActiveMessageP__SendNotifier__default__aboutToSend(am_id_t amId, am_addr_t addr, message_t *msg);

static inline void CC2420ActiveMessageP__RadioBackoff__default__requestInitialBackoff(am_id_t id, 
message_t *msg);


static inline void CC2420ActiveMessageP__RadioBackoff__default__requestCongestionBackoff(am_id_t id, 
message_t *msg);


static inline void CC2420ActiveMessageP__RadioBackoff__default__requestCca(am_id_t id, 
message_t *msg);
# 110 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*SenseC.SenseSender.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*SenseC.SenseSender.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(
#line 67
message_t * msg, 







uint8_t len);
# 103 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMPacket.nc"
static void /*SenseC.SenseSender.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*SenseC.SenseSender.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*SenseC.SenseSender.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*SenseC.SenseSender.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err);
# 80 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x107ff97d8, 
# 80 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(
# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x107ffa5e8, 
# 96 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 94
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void );
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 147
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(
#line 143
message_t * amsg);
# 126 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4357 {
#line 126
  AMQueueImplP__0__CancelTask = 12U
};
#line 126
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask];
#line 169
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4358 {
#line 169
  AMQueueImplP__0__errorTask = 13U
};
#line 169
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask];
#line 57
#line 55
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4359 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 2;
/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[2];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[2 / 8 + 1];

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void );
#line 90
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 126
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
#line 163
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );




static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );
#line 189
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err);
#line 215
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err);
# 110 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*SenseC.HopSender.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*SenseC.HopSender.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__send(
#line 67
message_t * msg, 







uint8_t len);
# 103 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMPacket.nc"
static void /*SenseC.HopSender.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*SenseC.HopSender.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*SenseC.HopSender.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*SenseC.HopSender.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(message_t *m, error_t err);
# 76 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11.nc"
static error_t /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Hum__measureHumidity(void );
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Read.nc"
static void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Humidity__readDone(error_t result, /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Humidity__val_t val);
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__TempResource__release(void );
#line 88
static error_t /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__TempResource__request(void );
# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11.nc"
static error_t /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Temp__measureTemperature(void );
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__HumResource__release(void );
#line 88
static error_t /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__HumResource__request(void );
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Read.nc"
static void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Temperature__readDone(error_t result, /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Temperature__val_t val);
# 60 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11ReaderP.nc"
static inline error_t /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Temperature__read(void );




static inline void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__TempResource__granted(void );







static inline void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Temp__measureTemperatureDone(error_t result, uint16_t val);






static inline error_t /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Humidity__read(void );




static inline void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__HumResource__granted(void );







static inline void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Hum__measureHumidityDone(error_t result, uint16_t val);




static inline void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Temp__resetDone(error_t result);
static inline void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Temp__measureHumidityDone(error_t result, uint16_t val);
static inline void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Temp__readStatusRegDone(error_t result, uint8_t val);
static inline void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Temp__writeStatusRegDone(error_t result);

static inline void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Hum__resetDone(error_t result);
static inline void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Hum__measureTemperatureDone(error_t result, uint16_t val);
static inline void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Hum__readStatusRegDone(error_t result, uint8_t val);
static inline void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Hum__writeStatusRegDone(error_t result);
# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__InterruptDATA__disable(void );
#line 54
static error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__InterruptDATA__enableFallingEdge(void );
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__readSensor__postTask(void );
#line 67
static error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__signalStatusDone__postTask(void );
# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CLOCK__makeOutput(void );
#line 40
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CLOCK__set(void );
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CLOCK__clr(void );
# 84 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11.nc"
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__measureHumidityDone(
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x1080cc350, 
# 84 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11.nc"
error_t result, uint16_t val);
#line 116
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__writeStatusRegDone(
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x1080cc350, 
# 116 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11.nc"
error_t result);
#line 100
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__readStatusRegDone(
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x1080cc350, 
# 100 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11.nc"
error_t result, uint8_t val);
#line 54
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__resetDone(
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x1080cc350, 
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11.nc"
error_t result);
#line 69
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__measureTemperatureDone(
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x1080cc350, 
# 69 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11.nc"
error_t result, uint16_t val);
# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__makeInput(void );
#line 43
static bool /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__get(void );


static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__makeOutput(void );
#line 40
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__set(void );
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__clr(void );
# 73 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__Timer__startOneShot(uint32_t dt);




static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__Timer__stop(void );
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
enum /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0____nesc_unnamed4360 {
#line 102
  SensirionSht11LogicP__0__readSensor = 14U
};
#line 102
typedef int /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0____nesc_sillytask_readSensor[/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__readSensor];
enum /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0____nesc_unnamed4361 {
#line 103
  SensirionSht11LogicP__0__signalStatusDone = 15U
};
#line 103
typedef int /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0____nesc_sillytask_signalStatusDone[/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__signalStatusDone];
#line 72
#line 66
typedef enum /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0____nesc_unnamed4362 {
  SensirionSht11LogicP__0__CMD_MEASURE_TEMPERATURE = 0x3, 
  SensirionSht11LogicP__0__CMD_MEASURE_HUMIDITY = 0x5, 
  SensirionSht11LogicP__0__CMD_READ_STATUS = 0x7, 
  SensirionSht11LogicP__0__CMD_WRITE_STATUS = 0x6, 
  SensirionSht11LogicP__0__CMD_SOFT_RESET = 0x1E
} /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__sht_cmd_t;

enum /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0____nesc_unnamed4363 {
  SensirionSht11LogicP__0__TIMEOUT_RESET = 11, 
  SensirionSht11LogicP__0__TIMEOUT_14BIT = 250, 
  SensirionSht11LogicP__0__TIMEOUT_12BIT = 250, 
  SensirionSht11LogicP__0__TIMEOUT_8BIT = 250
};

bool /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__on = TRUE;
bool /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__busy = FALSE;
uint8_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__status = 0;
/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__sht_cmd_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__cmd;
uint8_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__newStatus;
bool /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__writeFail = FALSE;

uint8_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__currentClient;

static error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__performCommand(void );
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__initPins(void );
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__resetDevice(void );
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__transmissionStart(void );
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__sendCommand(uint8_t _cmd);
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__writeByte(uint8_t byte);
static error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__waitForResponse(void );
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__enableInterrupt(void );
static uint8_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__readByte(void );
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__ack(void );
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__endTransmission(void );
#line 113
static inline error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__measureTemperature(uint8_t client);







static inline error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__measureHumidity(uint8_t client);
#line 149
static error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__performCommand(void );
#line 220
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__initPins(void );







static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__resetDevice(void );










static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__transmissionStart(void );
#line 251
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__sendCommand(uint8_t _cmd);



static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__writeByte(uint8_t byte);
#line 268
static error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__waitForResponse(void );
#line 281
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__enableInterrupt(void );





static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__Timer__fired(void );
#line 315
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__InterruptDATA__fired(void );




static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__readSensor__runTask(void );
#line 355
static uint8_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__readByte(void );
#line 372
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__ack(void );








static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__endTransmission(void );






static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__signalStatusDone__runTask(void );
#line 406
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__default__resetDone(uint8_t client, error_t result);
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__default__measureTemperatureDone(uint8_t client, error_t result, uint16_t val);
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__default__measureHumidityDone(uint8_t client, error_t result, uint16_t val);
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__default__readStatusRegDone(uint8_t client, error_t result, uint8_t val);
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__default__writeStatusRegDone(uint8_t client, error_t result);
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__HplGeneralIO__makeInput(void );






static void /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__HplGeneralIO__makeOutput(void );
#line 70
static bool /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__HplGeneralIO__get(void );
#line 45
static void /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__HplGeneralIO__set(void );




static void /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__HplGeneralIO__clr(void );
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__GeneralIO__set(void );
static inline void /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__GeneralIO__clr(void );

static inline bool /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__GeneralIO__get(void );
static inline void /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__GeneralIO__makeInput(void );

static inline void /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__GeneralIO__makeOutput(void );
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__HplGeneralIO__makeInput(void );






static void /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__HplGeneralIO__makeOutput(void );
#line 45
static void /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__HplGeneralIO__set(void );




static void /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__HplGeneralIO__clr(void );
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__GeneralIO__set(void );
static inline void /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__GeneralIO__clr(void );


static inline void /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__GeneralIO__makeInput(void );

static inline void /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__GeneralIO__makeOutput(void );
# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplSensirionSht11C.PWRM*/Msp430GpioC__12__HplGeneralIO__makeOutput(void );
#line 45
static void /*HplSensirionSht11C.PWRM*/Msp430GpioC__12__HplGeneralIO__set(void );




static void /*HplSensirionSht11C.PWRM*/Msp430GpioC__12__HplGeneralIO__clr(void );
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplSensirionSht11C.PWRM*/Msp430GpioC__12__GeneralIO__set(void );
static inline void /*HplSensirionSht11C.PWRM*/Msp430GpioC__12__GeneralIO__clr(void );




static inline void /*HplSensirionSht11C.PWRM*/Msp430GpioC__12__GeneralIO__makeOutput(void );
# 113 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void HplSensirionSht11P__SplitControl__startDone(error_t error);
#line 138
static void HplSensirionSht11P__SplitControl__stopDone(error_t error);
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t HplSensirionSht11P__stopTask__postTask(void );
# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplSensirionSht11P__SCK__makeInput(void );
#line 41
static void HplSensirionSht11P__SCK__clr(void );




static void HplSensirionSht11P__PWR__makeOutput(void );
#line 40
static void HplSensirionSht11P__PWR__set(void );
static void HplSensirionSht11P__PWR__clr(void );


static void HplSensirionSht11P__DATA__makeInput(void );
#line 41
static void HplSensirionSht11P__DATA__clr(void );
# 73 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
static void HplSensirionSht11P__Timer__startOneShot(uint32_t dt);
# 50 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/platforms/telosa/chips/sht11/HplSensirionSht11P.nc"
enum HplSensirionSht11P____nesc_unnamed4364 {
#line 50
  HplSensirionSht11P__stopTask = 16U
};
#line 50
typedef int HplSensirionSht11P____nesc_sillytask_stopTask[HplSensirionSht11P__stopTask];

static error_t HplSensirionSht11P__SplitControl__start(void );






static inline void HplSensirionSht11P__Timer__fired(void );



static inline error_t HplSensirionSht11P__SplitControl__stop(void );









static inline void HplSensirionSht11P__stopTask__runTask(void );
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__HplInterrupt__clear(void );
#line 47
static void /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__HplInterrupt__disable(void );
#line 67
static void /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__HplInterrupt__edge(bool low_to_high);
#line 42
static void /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__HplInterrupt__enable(void );
# 68 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static void /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__Interrupt__fired(void );
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__enable(bool rising);
#line 65
static inline error_t /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__Interrupt__enableFallingEdge(void );



static error_t /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__Interrupt__disable(void );







static inline void /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__HplInterrupt__fired(void );
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2____nesc_unnamed4365 {
#line 49
  FcfsResourceQueueC__2__NO_ENTRY = 0xFF
};
uint8_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__resQ[2U];
uint8_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__qHead = /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY;
uint8_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__qTail = /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY;

static inline error_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__Init__init(void );




static inline bool /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty(void );



static inline bool /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceRequested__requested(
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x107a757e8);
# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(
# 60 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x107a739b8);
# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__configure(
# 60 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x107a739b8);
# 79 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__Queue__dequeue(void );
# 73 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__requested(void );
#line 46
static void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted(void );
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__Resource__granted(
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x107a77658);
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__grantedTask__postTask(void );
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
enum /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1____nesc_unnamed4366 {
#line 75
  ArbiterP__1__grantedTask = 17U
};
#line 75
typedef int /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1____nesc_sillytask_grantedTask[/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__grantedTask];
#line 67
enum /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1____nesc_unnamed4367 {
#line 67
  ArbiterP__1__RES_CONTROLLED, ArbiterP__1__RES_GRANTING, ArbiterP__1__RES_IMM_GRANTING, ArbiterP__1__RES_BUSY
};
#line 68
enum /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1____nesc_unnamed4368 {
#line 68
  ArbiterP__1__default_owner_id = 2U
};
#line 69
enum /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1____nesc_unnamed4369 {
#line 69
  ArbiterP__1__NO_RES = 0xFF
};
uint8_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__state = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__RES_CONTROLLED;
uint8_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__resId = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__default_owner_id;
uint8_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__reqResId;



static error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__Resource__request(uint8_t id);
#line 111
static error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__Resource__release(uint8_t id);
#line 133
static inline error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void );
#line 184
static inline uint8_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__isOwner(void );





static inline void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__grantedTask__runTask(void );
#line 202
static inline void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__Resource__default__granted(uint8_t id);

static inline void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(uint8_t id);
#line 216
static inline void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(uint8_t id);

static inline void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(uint8_t id);
# 104 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__SplitControl__start(void );
#line 130
static error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__SplitControl__stop(void );
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
static void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__PowerDownCleanup__cleanup(void );
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__stopTask__postTask(void );
# 56 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__release(void );








static bool /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__isOwner(void );
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__startTask__postTask(void );
# 95 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__StdControl__start(void );









static error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__StdControl__stop(void );
# 73 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
enum /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0____nesc_unnamed4370 {
#line 73
  PowerManagerP__0__startTask = 18U
};
#line 73
typedef int /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0____nesc_sillytask_startTask[/*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__startTask];




enum /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0____nesc_unnamed4371 {
#line 78
  PowerManagerP__0__stopTask = 19U
};
#line 78
typedef int /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0____nesc_sillytask_stopTask[/*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__stopTask];
#line 70
bool /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__stopping = FALSE;
bool /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__requested = FALSE;

static inline void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__startTask__runTask(void );




static inline void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__stopTask__runTask(void );





static inline void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__requested(void );









static inline error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__StdControl__default__start(void );







static inline void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__SplitControl__startDone(error_t error);




static inline void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__granted(void );




static inline void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__SplitControl__stopDone(error_t error);










static inline error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__StdControl__default__stop(void );







static inline void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Read.nc"
static void AdcP__Read__readDone(
# 38 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x1082158a8, 
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Read.nc"
error_t result, AdcP__Read__val_t val);
# 66 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ReadNow.nc"
static void AdcP__ReadNow__readDone(
# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x1082115f8, 
# 66 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ReadNow.nc"
error_t result, AdcP__ReadNow__val_t val);
# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
static AdcP__Config__adc_config_t AdcP__Config__getConfiguration(
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x10820ae28);
# 189 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t AdcP__SingleChannel__getData(
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x1081f8910);
# 84 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t AdcP__SingleChannel__configureSingle(
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x1081f8910, 
# 84 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config);
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t AdcP__ResourceRead__release(
# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x10820c548);
# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t AdcP__ResourceRead__request(
# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x10820c548);
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t AdcP__readDone__postTask(void );
# 136 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
enum AdcP____nesc_unnamed4372 {
#line 136
  AdcP__readDone = 20U
};
#line 136
typedef int AdcP____nesc_sillytask_readDone[AdcP__readDone];
#line 54
enum AdcP____nesc_unnamed4373 {
  AdcP__STATE_READ, 
  AdcP__STATE_READNOW, 
  AdcP__STATE_READNOW_INVALID_CONFIG
};


uint8_t AdcP__state;
uint8_t AdcP__owner;
uint16_t AdcP__value;

static inline error_t AdcP__configure(uint8_t client);









static inline error_t AdcP__Read__read(uint8_t client);




static void AdcP__ResourceRead__granted(uint8_t client);
#line 136
static inline void AdcP__readDone__runTask(void );





static error_t AdcP__SingleChannel__singleDataReady(uint8_t client, uint16_t data);
#line 161
static inline uint16_t *AdcP__SingleChannel__multipleDataReady(uint8_t client, 
uint16_t *buf, uint16_t numSamples);





static inline error_t AdcP__ResourceRead__default__request(uint8_t client);

static inline error_t AdcP__ResourceRead__default__release(uint8_t client);

static inline void AdcP__Read__default__readDone(uint8_t client, error_t result, uint16_t val);





static inline void AdcP__ReadNow__default__readDone(uint8_t client, error_t result, uint16_t val);

static inline error_t AdcP__SingleChannel__default__getData(uint8_t client);




const msp430adc12_channel_config_t AdcP__defaultConfig = { INPUT_CHANNEL_NONE, 0, 0, 0, 0, 0, 0, 0 };
static inline const msp430adc12_channel_config_t *
AdcP__Config__default__getConfiguration(uint8_t client);



static inline error_t AdcP__SingleChannel__default__configureSingle(uint8_t client, 
const msp430adc12_channel_config_t *config);
# 107 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
static void Msp430Adc12ImplP__MultiChannel__dataReady(
# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x1082710c8, 
# 107 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
uint16_t *buffer, uint16_t numSamples);
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
static adc12ctl0_t Msp430Adc12ImplP__HplAdc12__getCtl0(void );
#line 82
static adc12memctl_t Msp430Adc12ImplP__HplAdc12__getMCtl(uint8_t idx);
#line 106
static void Msp430Adc12ImplP__HplAdc12__resetIFGs(void );
#line 75
static void Msp430Adc12ImplP__HplAdc12__setMCtl(uint8_t idx, adc12memctl_t memControl);
#line 128
static void Msp430Adc12ImplP__HplAdc12__startConversion(void );
#line 51
static void Msp430Adc12ImplP__HplAdc12__setCtl0(adc12ctl0_t control0);
#line 89
static uint16_t Msp430Adc12ImplP__HplAdc12__getMem(uint8_t idx);





static void Msp430Adc12ImplP__HplAdc12__setIEFlags(uint16_t mask);
#line 123
static void Msp430Adc12ImplP__HplAdc12__stopConversion(void );
#line 57
static void Msp430Adc12ImplP__HplAdc12__setCtl1(adc12ctl1_t control1);
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430Adc12ImplP__Port64__makeInput(void );
#line 96
static void Msp430Adc12ImplP__Port64__selectIOFunc(void );
#line 89
static void Msp430Adc12ImplP__Port64__selectModuleFunc(void );
# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430Adc12ImplP__CompareA1__setEvent(uint16_t time);
# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void Msp430Adc12ImplP__ControlA0__setControl(msp430_compare_control_t control);
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430Adc12ImplP__Port62__makeInput(void );
#line 96
static void Msp430Adc12ImplP__Port62__selectIOFunc(void );
#line 89
static void Msp430Adc12ImplP__Port62__selectModuleFunc(void );
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
static void Msp430Adc12ImplP__Overflow__memOverflow(
# 43 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x108270020);
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
static void Msp430Adc12ImplP__Overflow__conversionTimeOverflow(
# 43 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x108270020);
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430Adc12ImplP__Port67__makeInput(void );
#line 96
static void Msp430Adc12ImplP__Port67__selectIOFunc(void );
#line 89
static void Msp430Adc12ImplP__Port67__selectModuleFunc(void );
#line 75
static void Msp430Adc12ImplP__Port60__makeInput(void );
#line 96
static void Msp430Adc12ImplP__Port60__selectIOFunc(void );
#line 89
static void Msp430Adc12ImplP__Port60__selectModuleFunc(void );
#line 75
static void Msp430Adc12ImplP__Port65__makeInput(void );
#line 96
static void Msp430Adc12ImplP__Port65__selectIOFunc(void );
#line 89
static void Msp430Adc12ImplP__Port65__selectModuleFunc(void );
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static void Msp430Adc12ImplP__TimerA__clear(void );


static void Msp430Adc12ImplP__TimerA__setClockSource(uint16_t clockSource);
#line 54
static void Msp430Adc12ImplP__TimerA__disableEvents(void );
#line 50
static void Msp430Adc12ImplP__TimerA__setMode(int mode);





static void Msp430Adc12ImplP__TimerA__setInputDivider(uint16_t inputDivider);
# 98 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static uint8_t Msp430Adc12ImplP__ADCArbiterInfo__userId(void );
# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void Msp430Adc12ImplP__ControlA1__setControl(msp430_compare_control_t control);
# 227 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static uint16_t * Msp430Adc12ImplP__SingleChannel__multipleDataReady(
# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x108274ac0, 
# 227 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t * buffer, uint16_t numSamples);
#line 206
static error_t Msp430Adc12ImplP__SingleChannel__singleDataReady(
# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x108274ac0, 
# 206 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t data);
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430Adc12ImplP__Port63__makeInput(void );
#line 96
static void Msp430Adc12ImplP__Port63__selectIOFunc(void );
#line 89
static void Msp430Adc12ImplP__Port63__selectModuleFunc(void );
# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430Adc12ImplP__CompareA0__setEvent(uint16_t time);
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430Adc12ImplP__Port61__makeInput(void );
#line 96
static void Msp430Adc12ImplP__Port61__selectIOFunc(void );
#line 89
static void Msp430Adc12ImplP__Port61__selectModuleFunc(void );
#line 75
static void Msp430Adc12ImplP__Port66__makeInput(void );
#line 96
static void Msp430Adc12ImplP__Port66__selectIOFunc(void );
#line 89
static void Msp430Adc12ImplP__Port66__selectModuleFunc(void );
# 71 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
enum Msp430Adc12ImplP____nesc_unnamed4374 {
  Msp430Adc12ImplP__SINGLE_DATA = 1, 
  Msp430Adc12ImplP__SINGLE_DATA_REPEAT = 2, 
  Msp430Adc12ImplP__MULTIPLE_DATA = 4, 
  Msp430Adc12ImplP__MULTIPLE_DATA_REPEAT = 8, 
  Msp430Adc12ImplP__MULTI_CHANNEL = 16, 
  Msp430Adc12ImplP__CONVERSION_MODE_MASK = 0x1F, 

  Msp430Adc12ImplP__ADC_BUSY = 32, 
  Msp430Adc12ImplP__USE_TIMERA = 64, 
  Msp430Adc12ImplP__ADC_OVERFLOW = 128
};

uint8_t Msp430Adc12ImplP__state;

uint16_t Msp430Adc12ImplP__resultBufferLength;
uint16_t * Msp430Adc12ImplP__resultBufferStart;
uint16_t Msp430Adc12ImplP__resultBufferIndex;
uint8_t Msp430Adc12ImplP__numChannels;
uint8_t Msp430Adc12ImplP__clientID;

static inline error_t Msp430Adc12ImplP__Init__init(void );










static inline void Msp430Adc12ImplP__prepareTimerA(uint16_t interval, uint16_t csSAMPCON, uint16_t cdSAMPCON);
#line 121
static inline void Msp430Adc12ImplP__startTimerA(void );
#line 142
static inline void Msp430Adc12ImplP__configureAdcPin(uint8_t inch);
#line 159
static void Msp430Adc12ImplP__resetAdcPin(uint8_t inch);
#line 176
static error_t Msp430Adc12ImplP__SingleChannel__configureSingle(uint8_t id, 
const msp430adc12_channel_config_t *config);
#line 271
static inline error_t Msp430Adc12ImplP__SingleChannel__configureMultiple(uint8_t id, 
const msp430adc12_channel_config_t *config, 
uint16_t *buf, uint16_t length, uint16_t jiffies);
#line 394
static error_t Msp430Adc12ImplP__SingleChannel__getData(uint8_t id);
#line 503
static void Msp430Adc12ImplP__stopConversion(void );
#line 540
static inline void Msp430Adc12ImplP__TimerA__overflow(void );
static inline void Msp430Adc12ImplP__CompareA0__fired(void );
static inline void Msp430Adc12ImplP__CompareA1__fired(void );

static inline void Msp430Adc12ImplP__HplAdc12__conversionDone(uint16_t iv);
#line 640
static inline error_t Msp430Adc12ImplP__SingleChannel__default__singleDataReady(uint8_t id, uint16_t data);




static inline uint16_t *Msp430Adc12ImplP__SingleChannel__default__multipleDataReady(uint8_t id, 
uint16_t *buf, uint16_t numSamples);




static inline void Msp430Adc12ImplP__MultiChannel__default__dataReady(uint8_t id, uint16_t *buffer, uint16_t numSamples);

static inline void Msp430Adc12ImplP__Overflow__default__memOverflow(uint8_t id);
static inline void Msp430Adc12ImplP__Overflow__default__conversionTimeOverflow(uint8_t id);
# 112 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
static void HplAdc12P__HplAdc12__conversionDone(uint16_t iv);
# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12P.nc"
static volatile uint16_t HplAdc12P__ADC12CTL0 __asm ("0x01A0");
static volatile uint16_t HplAdc12P__ADC12CTL1 __asm ("0x01A2");
static volatile uint16_t HplAdc12P__ADC12IFG __asm ("0x01A4");
static volatile uint16_t HplAdc12P__ADC12IE __asm ("0x01A6");
static volatile uint16_t HplAdc12P__ADC12IV __asm ("0x01A8");

static inline adc12ctl0_t HplAdc12P__int2adc12ctl0(uint16_t x)  ;

static inline uint16_t HplAdc12P__adc12ctl0cast2int(adc12ctl0_t x)  ;
static inline uint16_t HplAdc12P__adc12ctl1cast2int(adc12ctl1_t x)  ;
static inline uint8_t HplAdc12P__adc12memctl2int(adc12memctl_t x)  ;
static inline adc12memctl_t HplAdc12P__int2adc12memctl(uint8_t x)  ;

static inline void HplAdc12P__HplAdc12__setCtl0(adc12ctl0_t control0);



static inline void HplAdc12P__HplAdc12__setCtl1(adc12ctl1_t control1);



static inline adc12ctl0_t HplAdc12P__HplAdc12__getCtl0(void );







static inline void HplAdc12P__HplAdc12__setMCtl(uint8_t i, adc12memctl_t memCtl);



static inline adc12memctl_t HplAdc12P__HplAdc12__getMCtl(uint8_t i);



static inline uint16_t HplAdc12P__HplAdc12__getMem(uint8_t i);



static inline void HplAdc12P__HplAdc12__setIEFlags(uint16_t mask);


static inline void HplAdc12P__HplAdc12__resetIFGs(void );




static inline void HplAdc12P__HplAdc12__startConversion(void );




static void HplAdc12P__HplAdc12__stopConversion(void );
#line 118
static inline bool HplAdc12P__HplAdc12__isBusy(void );

void sig_ADC_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(14)))  ;
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
enum /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0____nesc_unnamed4375 {
  RoundRobinResourceQueueC__0__NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC__0__SIZE = 2U ? (2U - 1) / 8 + 1 : 0
};

uint8_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[/*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__SIZE];
uint8_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__last = 0;

static inline void /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id);



static inline error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void );




static inline bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
#line 97
static inline error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x108373c80);
# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(
# 56 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x108371220);
# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(
# 56 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x108371220);
# 79 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void );
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(
# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x1083749b0);
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void );
# 69 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/SimpleArbiterP.nc"
enum /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4376 {
#line 69
  SimpleArbiterP__0__grantedTask = 21U
};
#line 69
typedef int /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_sillytask_grantedTask[/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask];
#line 62
enum /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4377 {
#line 62
  SimpleArbiterP__0__RES_IDLE = 0, SimpleArbiterP__0__RES_GRANTING = 1, SimpleArbiterP__0__RES_BUSY = 2
};
#line 63
enum /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4378 {
#line 63
  SimpleArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE;
uint8_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
uint8_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId;



static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id);
#line 97
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id);
#line 137
static uint8_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__userId(void );
#line 155
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );









static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id);



static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
static adc12ctl0_t Msp430RefVoltGeneratorP__HplAdc12__getCtl0(void );
#line 118
static bool Msp430RefVoltGeneratorP__HplAdc12__isBusy(void );
#line 51
static void Msp430RefVoltGeneratorP__HplAdc12__setCtl0(adc12ctl0_t control0);
# 73 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
static void Msp430RefVoltGeneratorP__SwitchOffTimer__startOneShot(uint32_t dt);




static void Msp430RefVoltGeneratorP__SwitchOffTimer__stop(void );
# 113 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void Msp430RefVoltGeneratorP__RefVolt_2_5V__startDone(error_t error);
#line 138
static void Msp430RefVoltGeneratorP__RefVolt_2_5V__stopDone(error_t error);
#line 113
static void Msp430RefVoltGeneratorP__RefVolt_1_5V__startDone(error_t error);
#line 138
static void Msp430RefVoltGeneratorP__RefVolt_1_5V__stopDone(error_t error);
# 73 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
static void Msp430RefVoltGeneratorP__SwitchOnTimer__startOneShot(uint32_t dt);




static void Msp430RefVoltGeneratorP__SwitchOnTimer__stop(void );
# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
#line 52
typedef enum Msp430RefVoltGeneratorP____nesc_unnamed4379 {

  Msp430RefVoltGeneratorP__GENERATOR_OFF = 0, 

  Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE = 1, 
  Msp430RefVoltGeneratorP__REFERENCE_2_5V_STABLE = 2, 

  Msp430RefVoltGeneratorP__REFERENCE_1_5V_ON_PENDING = 3, 
  Msp430RefVoltGeneratorP__REFERENCE_2_5V_ON_PENDING = 4, 

  Msp430RefVoltGeneratorP__REFERENCE_1_5V_OFF_PENDING = 5, 
  Msp430RefVoltGeneratorP__REFERENCE_2_5V_OFF_PENDING = 6
} 
Msp430RefVoltGeneratorP__state_t;

Msp430RefVoltGeneratorP__state_t Msp430RefVoltGeneratorP__m_state;


static error_t Msp430RefVoltGeneratorP__switchOn(uint8_t level);
static error_t Msp430RefVoltGeneratorP__switchOff(void );
static void Msp430RefVoltGeneratorP__signalStartDone(Msp430RefVoltGeneratorP__state_t state, error_t result);
static void Msp430RefVoltGeneratorP__signalStopDone(Msp430RefVoltGeneratorP__state_t state, error_t result);
static error_t Msp430RefVoltGeneratorP__start(Msp430RefVoltGeneratorP__state_t targetState);
static inline error_t Msp430RefVoltGeneratorP__stop(Msp430RefVoltGeneratorP__state_t nextState);


static inline error_t Msp430RefVoltGeneratorP__RefVolt_1_5V__start(void );



static inline error_t Msp430RefVoltGeneratorP__RefVolt_2_5V__start(void );



static inline error_t Msp430RefVoltGeneratorP__RefVolt_1_5V__stop(void );







static error_t Msp430RefVoltGeneratorP__start(Msp430RefVoltGeneratorP__state_t targetState);
#line 126
static inline error_t Msp430RefVoltGeneratorP__stop(Msp430RefVoltGeneratorP__state_t nextState);
#line 152
static void Msp430RefVoltGeneratorP__signalStartDone(Msp430RefVoltGeneratorP__state_t state, error_t result);






static void Msp430RefVoltGeneratorP__signalStopDone(Msp430RefVoltGeneratorP__state_t state, error_t result);







static inline void Msp430RefVoltGeneratorP__SwitchOnTimer__fired(void );
#line 184
static inline void Msp430RefVoltGeneratorP__SwitchOffTimer__fired(void );
#line 212
static inline void Msp430RefVoltGeneratorP__HplAdc12__conversionDone(uint16_t iv);



static error_t Msp430RefVoltGeneratorP__switchOn(uint8_t level);
#line 235
static error_t Msp430RefVoltGeneratorP__switchOff(void );
# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
static Msp430RefVoltArbiterImplP__Config__adc_config_t Msp430RefVoltArbiterImplP__Config__getConfiguration(
# 43 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x10842ce08);
# 104 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t Msp430RefVoltArbiterImplP__RefVolt_2_5V__start(void );
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP__AdcResource__release(
# 40 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x10842f108);
# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP__AdcResource__request(
# 40 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x10842f108);
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static void Msp430RefVoltArbiterImplP__ClientResource__granted(
# 38 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x108408d48);
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t Msp430RefVoltArbiterImplP__switchOff__postTask(void );
# 104 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t Msp430RefVoltArbiterImplP__RefVolt_1_5V__start(void );
#line 130
static error_t Msp430RefVoltArbiterImplP__RefVolt_1_5V__stop(void );
# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
enum Msp430RefVoltArbiterImplP____nesc_unnamed4380 {
#line 51
  Msp430RefVoltArbiterImplP__switchOff = 22U
};
#line 51
typedef int Msp430RefVoltArbiterImplP____nesc_sillytask_switchOff[Msp430RefVoltArbiterImplP__switchOff];
#line 46
enum Msp430RefVoltArbiterImplP____nesc_unnamed4381 {
  Msp430RefVoltArbiterImplP__NO_OWNER = 0xFF
};
uint8_t Msp430RefVoltArbiterImplP__syncOwner = Msp430RefVoltArbiterImplP__NO_OWNER;



static inline error_t Msp430RefVoltArbiterImplP__ClientResource__request(uint8_t client);
#line 70
static void Msp430RefVoltArbiterImplP__AdcResource__granted(uint8_t client);
#line 98
static inline void Msp430RefVoltArbiterImplP__RefVolt_1_5V__startDone(error_t error);








static void Msp430RefVoltArbiterImplP__RefVolt_2_5V__startDone(error_t error);








static error_t Msp430RefVoltArbiterImplP__ClientResource__release(uint8_t client);
#line 136
static inline void Msp430RefVoltArbiterImplP__switchOff__runTask(void );










static inline void Msp430RefVoltArbiterImplP__RefVolt_1_5V__stopDone(error_t error);



static inline void Msp430RefVoltArbiterImplP__RefVolt_2_5V__stopDone(error_t error);








static inline void Msp430RefVoltArbiterImplP__ClientResource__default__granted(uint8_t client);
static inline error_t Msp430RefVoltArbiterImplP__AdcResource__default__request(uint8_t client);








static inline error_t Msp430RefVoltArbiterImplP__AdcResource__default__release(uint8_t client);
const msp430adc12_channel_config_t Msp430RefVoltArbiterImplP__defaultConfig = { INPUT_CHANNEL_NONE, 0, 0, 0, 0, 0, 0, 0 };
static inline const msp430adc12_channel_config_t *
Msp430RefVoltArbiterImplP__Config__default__getConfiguration(uint8_t client);
# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
static /*SenseC.LightC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfUp__adc_config_t /*SenseC.LightC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfUp__getConfiguration(void );
# 47 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ConfAlertC.nc"
static inline const msp430adc12_channel_config_t */*SenseC.LightC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfSub__getConfiguration(void );
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t AdcStreamP__bufferDone__postTask(void );
#line 67
static error_t AdcStreamP__readStreamDone__postTask(void );
#line 67
static error_t AdcStreamP__readStreamFail__postTask(void );
# 109 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
static AdcStreamP__Alarm__size_type AdcStreamP__Alarm__getNow(void );
#line 103
static void AdcStreamP__Alarm__startAt(AdcStreamP__Alarm__size_type t0, AdcStreamP__Alarm__size_type dt);
# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
static AdcStreamP__AdcConfigure__adc_config_t AdcStreamP__AdcConfigure__getConfiguration(
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x10849f318);
# 189 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t AdcStreamP__SingleChannel__getData(
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x1084a1b90);
# 84 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t AdcStreamP__SingleChannel__configureSingle(
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x1084a1b90, 
# 84 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config);
#line 138
static error_t AdcStreamP__SingleChannel__configureMultiple(
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x1084a1b90, 
# 138 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config, uint16_t * buffer, uint16_t numSamples, uint16_t jiffies);
# 89 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ReadStream.nc"
static void AdcStreamP__ReadStream__bufferDone(
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x1084a5b08, 
# 89 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ReadStream.nc"
error_t result, 
#line 86
AdcStreamP__ReadStream__val_t * buf, 



uint16_t count);
#line 102
static void AdcStreamP__ReadStream__readDone(
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
uint8_t arg_0x1084a5b08, 
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ReadStream.nc"
error_t result, uint32_t usActualPeriod);
# 119 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
enum AdcStreamP____nesc_unnamed4382 {
#line 119
  AdcStreamP__readStreamDone = 23U
};
#line 119
typedef int AdcStreamP____nesc_sillytask_readStreamDone[AdcStreamP__readStreamDone];
#line 135
enum AdcStreamP____nesc_unnamed4383 {
#line 135
  AdcStreamP__readStreamFail = 24U
};
#line 135
typedef int AdcStreamP____nesc_sillytask_readStreamFail[AdcStreamP__readStreamFail];
#line 156
enum AdcStreamP____nesc_unnamed4384 {
#line 156
  AdcStreamP__bufferDone = 25U
};
#line 156
typedef int AdcStreamP____nesc_sillytask_bufferDone[AdcStreamP__bufferDone];
#line 58
enum AdcStreamP____nesc_unnamed4385 {
  AdcStreamP__NSTREAM = 1U
};




uint8_t AdcStreamP__client = AdcStreamP__NSTREAM;


struct AdcStreamP__list_entry_t {
  uint16_t count;
  struct AdcStreamP__list_entry_t * next;
};
struct AdcStreamP__list_entry_t *AdcStreamP__bufferQueue[AdcStreamP__NSTREAM];
struct AdcStreamP__list_entry_t * *AdcStreamP__bufferQueueEnd[AdcStreamP__NSTREAM];
uint16_t * AdcStreamP__lastBuffer;
#line 74
uint16_t AdcStreamP__lastCount;

uint16_t AdcStreamP__count;
uint16_t * AdcStreamP__buffer;
uint16_t * AdcStreamP__pos;
uint32_t AdcStreamP__now;
#line 79
uint32_t AdcStreamP__period;
bool AdcStreamP__periodModified;


static inline error_t AdcStreamP__Init__init(void );








static inline void AdcStreamP__sampleSingle(void );



static inline error_t AdcStreamP__postBuffer(uint8_t c, uint16_t *buf, uint16_t n);
#line 119
static inline void AdcStreamP__readStreamDone__runTask(void );
#line 135
static inline void AdcStreamP__readStreamFail__runTask(void );
#line 156
static inline void AdcStreamP__bufferDone__runTask(void );
#line 168
static inline void AdcStreamP__nextAlarm(void );




static inline void AdcStreamP__Alarm__fired(void );



static error_t AdcStreamP__nextBuffer(bool startNextAlarm);
#line 206
static void AdcStreamP__nextMultiple(uint8_t c);
#line 221
static error_t AdcStreamP__ReadStream__read(uint8_t c, uint32_t usPeriod);
#line 242
static error_t AdcStreamP__SingleChannel__singleDataReady(uint8_t streamClient, uint16_t data);
#line 281
static uint16_t *AdcStreamP__SingleChannel__multipleDataReady(uint8_t streamClient, 
uint16_t *buf, uint16_t length);
#line 304
const msp430adc12_channel_config_t AdcStreamP__defaultConfig = { 
.inch = SUPPLY_VOLTAGE_HALF_CHANNEL, 
.sref = REFERENCE_VREFplus_AVss, 
.ref2_5v = REFVOLT_LEVEL_1_5, 
.adc12ssel = SHT_SOURCE_ACLK, 
.adc12div = SHT_CLOCK_DIV_1, 
.sht = SAMPLE_HOLD_4_CYCLES, 
.sampcon_ssel = SAMPCON_SOURCE_SMCLK, 
.sampcon_id = SAMPCON_CLOCK_DIV_1 };

static inline const msp430adc12_channel_config_t *AdcStreamP__AdcConfigure__default__getConfiguration(uint8_t c);



static inline error_t AdcStreamP__SingleChannel__default__configureMultiple(uint8_t c, 
const msp430adc12_channel_config_t *config, uint16_t b[], 
uint16_t numSamples, uint16_t jiffies);



static inline error_t AdcStreamP__SingleChannel__default__getData(uint8_t c);



static inline error_t AdcStreamP__SingleChannel__default__configureSingle(uint8_t c, 
const msp430adc12_channel_config_t *config);
# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEvent(uint16_t time);

static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEventFromNow(uint16_t delta);
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__get(void );
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__fired(void );
# 57 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__enableEvents(void );
static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__disableEvents(void );
#line 44
static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__clearPendingInterrupt(void );
# 70 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__fired(void );










static inline void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 114
static inline void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__overflow(void );
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__Alarm__fired(void );
#line 103
static void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__AlarmFrom__startAt(/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__AlarmFrom__size_type t0, /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__AlarmFrom__size_type dt);
# 64 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__Counter__size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__Counter__get(void );
# 77 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__to_size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__m_t0;
/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__to_size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__m_dt;

enum /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2____nesc_unnamed4386 {

  TransformAlarmC__2__MAX_DELAY_LOG2 = 8 * sizeof(/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__from_size_type ) - 1 - 5, 
  TransformAlarmC__2__MAX_DELAY = (/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__to_size_type )1 << /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__MAX_DELAY_LOG2
};

static inline /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__to_size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__Alarm__getNow(void );
#line 107
static void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__set_alarm(void );
#line 147
static inline void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__Alarm__startAt(/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__to_size_type t0, /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__to_size_type dt);
#line 162
static inline void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__AlarmFrom__fired(void );
#line 177
static inline void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__Counter__overflow(void );
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ReadStream.nc"
static error_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Service__read(
# 26 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x10851e148, 
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ReadStream.nc"
uint32_t usPeriod);










static void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__bufferDone(
# 24 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x108522020, 
# 89 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ReadStream.nc"
error_t result, 
#line 86
/*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__val_t * buf, 



uint16_t count);
#line 102
static void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__readDone(
# 24 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x108522020, 
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ReadStream.nc"
error_t result, uint32_t usActualPeriod);
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Resource__release(
# 27 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
uint8_t arg_0x10851a020);



uint32_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__period[1U];
#line 48
static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Service__bufferDone(uint8_t client, error_t result, /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__val_t *buf, uint16_t count);




static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Service__readDone(uint8_t client, error_t result, uint32_t actualPeriod);





static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Resource__granted(uint8_t client);







static inline error_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Resource__default__release(uint8_t client);
#line 79
static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__default__bufferDone(uint8_t client, error_t result, /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__val_t *buf, uint16_t count);



static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__default__readDone(uint8_t client, error_t result, uint32_t actualPeriod);
# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
static /*SenseC.LightC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfUp__adc_config_t /*SenseC.LightC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfUp__getConfiguration(void );
# 47 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ConfAlertC.nc"
static inline const msp430adc12_channel_config_t */*SenseC.LightC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfSub__getConfiguration(void );
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/platforms/telosa/chips/s1087/HamamatsuS1087ParP.nc"
msp430adc12_channel_config_t HamamatsuS1087ParP__config = { 
.inch = INPUT_CHANNEL_A4, 
.sref = REFERENCE_VREFplus_AVss, 
.ref2_5v = REFVOLT_LEVEL_1_5, 
.adc12ssel = SHT_SOURCE_ACLK, 
.adc12div = SHT_CLOCK_DIV_1, 
.sht = SAMPLE_HOLD_4_CYCLES, 
.sampcon_ssel = SAMPCON_SOURCE_SMCLK, 
.sampcon_id = SAMPCON_CLOCK_DIV_1 };




static inline const msp430adc12_channel_config_t *HamamatsuS1087ParP__AdcConfigure__getConfiguration(void );
# 223 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/msp430hardware.h"
static inline  void __nesc_enable_interrupt(void )
{
   __asm volatile ("eint");}

# 196 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void )
{
}

# 540 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__TimerA__overflow(void )
#line 540
{
}

# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow(void ){
#line 48
  Msp430Adc12ImplP__TimerA__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow();
#line 48
}
#line 48
# 137 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void )
{
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow();
}





static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(uint8_t n)
{
}

# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(uint8_t arg_0x106f8ec98){
#line 39
  switch (arg_0x106f8ec98) {
#line 39
    case 0:
#line 39
      /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired();
#line 39
      break;
#line 39
    case 1:
#line 39
      /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired();
#line 39
      break;
#line 39
    case 2:
#line 39
      /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired();
#line 39
      break;
#line 39
    case 5:
#line 39
      /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired();
#line 39
      break;
#line 39
    default:
#line 39
      /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(arg_0x106f8ec98);
#line 39
      break;
#line 39
    }
#line 39
}
#line 39
# 126 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void )
{
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(0);
}

# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerA0__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired();
#line 39
}
#line 39
# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0____nesc_unnamed4387 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(* (volatile uint16_t * )354U);
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t n)
{
}

# 86 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(time);
#line 86
}
#line 86
# 150 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void )
{
  return * (volatile uint16_t * )370U;
}

# 541 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__CompareA0__fired(void )
#line 541
{
}

# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired(void ){
#line 45
  Msp430Adc12ImplP__CompareA0__fired();
#line 45
}
#line 45
# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1____nesc_unnamed4388 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(* (volatile uint16_t * )356U);
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t n)
{
}

# 86 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(time);
#line 86
}
#line 86
# 150 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void )
{
  return * (volatile uint16_t * )372U;
}

# 542 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__CompareA1__fired(void )
#line 542
{
}

# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired(void ){
#line 45
  Msp430Adc12ImplP__CompareA1__fired();
#line 45
}
#line 45
# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2____nesc_unnamed4389 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(* (volatile uint16_t * )358U);
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t n)
{
}

# 86 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(time);
#line 86
}
#line 86
# 150 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void )
{
  return * (volatile uint16_t * )374U;
}

#line 192
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void )
{
}

# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired();
#line 45
}
#line 45
# 131 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void )
{
  uint8_t n = * (volatile uint16_t * )302U;

#line 134
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(n >> 1);
}

# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerA1__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired();
#line 39
}
#line 39
# 126 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void )
{
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(0);
}

# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerB0__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired();
#line 39
}
#line 39
# 196 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void )
{
}

# 114 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__overflow(void )
{
}

#line 114
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void )
{
}

#line 114
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void )
{
}

# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 177 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__overflow(void )
{
}

#line 177
static inline void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__Counter__overflow(void )
{
}

# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__Counter__overflow();
#line 82
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__overflow();
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMilli32C.Transform*/TransformCounterC__0__m_upper++;
    if ((/*CounterMilli32C.Transform*/TransformCounterC__0__m_upper & /*CounterMilli32C.Transform*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
      /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__overflow();
      }
  }
}

# 177 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__overflow(void )
{
}

# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void )
{
}

# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*Counter32khz32C.Transform*/TransformCounterC__1__Counter__overflow(void ){
#line 82
  /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow();
#line 82
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__overflow();
#line 82
}
#line 82
# 133 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline void /*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*Counter32khz32C.Transform*/TransformCounterC__1__m_upper++;
    if ((/*Counter32khz32C.Transform*/TransformCounterC__1__m_upper & /*Counter32khz32C.Transform*/TransformCounterC__1__OVERFLOW_MASK) == 0) {
      /*Counter32khz32C.Transform*/TransformCounterC__1__Counter__overflow();
      }
  }
}

# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow(void ){
#line 82
  /*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__overflow();
#line 82
  /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__overflow();
#line 82
}
#line 82
# 64 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void )
{
  /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow();
}

# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow(void ){
#line 48
  /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow();
#line 48
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow();
#line 48
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow();
#line 48
  /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow();
#line 48
}
#line 48
# 137 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void )
{
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow();
}

# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 162 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt == 0) 
      {
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__fired();
      }
    else 
      {
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__set_alarm();
      }
  }
}

# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__fired();
#line 78
}
#line 78
# 135 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void )
{
  * (volatile uint16_t * )386U &= ~0x0010;
}

# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents();
#line 58
}
#line 58
# 70 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired();
}

# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired(void ){
#line 45
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired();
#line 45
}
#line 45
# 150 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void )
{
  return * (volatile uint16_t * )402U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t n)
{
}

# 86 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3____nesc_unnamed4390 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(* (volatile uint16_t * )386U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired();
    }
}

# 97 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void )
{
  return /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get();
}

# 64 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__size_type /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__get(void ){
#line 64
  unsigned int __nesc_result;
#line 64

#line 64
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 81 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void )
{
  return * (volatile uint16_t * )384U & 1U;
}

# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending(void ){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void )
{
  return /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending();
}

# 71 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static bool /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 130 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void )
{
  * (volatile uint16_t * )386U |= 0x0010;
}

# 57 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents();
#line 57
}
#line 57
# 95 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )386U &= ~0x0001;
}

# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 155 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )402U = x;
}

# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(time);
#line 41
}
#line 41
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 165 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )402U = /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get() + x;
}

# 43 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(uint16_t delta){
#line 43
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(delta);
#line 43
}
#line 43
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 81 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get();
    uint16_t elapsed = now - t0;

#line 87
    if (elapsed >= dt) 
      {
        /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 94
        if (remaining <= 2) {
          /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(2);
          }
        else {
#line 97
          /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(now + remaining);
          }
      }
#line 99
    /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt();
    /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents();
  }
}

# 103 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type dt){
#line 103
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 192 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void )
{
}

# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired();
#line 45
}
#line 45
# 150 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void )
{
  return * (volatile uint16_t * )404U;
}

# 322 "/usr/local/Cellar/stow/2.2.0/repository/nesc-1.3.4/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 322
{
  const uint8_t *base = source;

#line 324
  return ((uint16_t )base[1] << 8) | base[0];
}

#line 347
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 347
{
  uint8_t *base = target;

#line 349
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

#line 340
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 340
{
  const uint8_t *base = source;

#line 342
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

# 70 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420TransmitP__PacketTimeStamp__clear(message_t * msg){
#line 70
  CC2420PacketP__PacketTimeStamp32khz__clear(msg);
#line 70
}
#line 70
# 195 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Receive__sfd_dropped(void )
#line 195
{
  if (CC2420ReceiveP__m_timestamp_size) {
      CC2420ReceiveP__m_timestamp_size--;
    }
}

# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP__CC2420Receive__sfd_dropped(void ){
#line 55
  CC2420ReceiveP__CC2420Receive__sfd_dropped();
#line 55
}
#line 55
# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge(void )
#line 61
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(MSP430TIMER_CM_RISING);
}

# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP__CaptureSFD__captureRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__getRaw(void )
#line 59
{
#line 59
  return * (volatile uint8_t * )28U & (0x01 << 1);
}

#line 60
static inline bool /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__get(void )
#line 60
{
#line 60
  return /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__getRaw() != 0;
}

# 70 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__get(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__get();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__get();
}

# 43 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP__SFD__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 186 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time)
#line 186
{
  if (CC2420ReceiveP__m_timestamp_size < CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE) {
      uint8_t tail = (CC2420ReceiveP__m_timestamp_head + CC2420ReceiveP__m_timestamp_size) % 
      CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE;

#line 190
      CC2420ReceiveP__m_timestamp_queue[tail] = time;
      CC2420ReceiveP__m_timestamp_size++;
    }
}

# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP__CC2420Receive__sfd(uint32_t time){
#line 49
  CC2420ReceiveP__CC2420Receive__sfd(time);
#line 49
}
#line 49
# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureFallingEdge(void )
#line 65
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(MSP430TIMER_CM_FALLING);
}

# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP__CaptureSFD__captureFallingEdge(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureFallingEdge();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 64 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*Counter32khz32C.Transform*/TransformCounterC__1__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__getNow(void )
{
  return /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__get();
}

#line 157
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type dt)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__getNow(), dt);
}

# 66 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__BackoffTimer__size_type dt){
#line 66
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__start(dt);
#line 66
}
#line 66
# 114 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline cc2420_header_t * CC2420PacketP__CC2420PacketBody__getHeader(message_t * msg)
#line 114
{
  return (cc2420_header_t * )((uint8_t *)msg + (size_t )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
}

# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420TransmitP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 135 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents(void )
{
  * (volatile uint16_t * )390U &= ~0x0010;
}

# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents();
#line 58
}
#line 58
# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents();
}

# 73 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__stop(void ){
#line 73
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop();
#line 73
}
#line 73
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__stop(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__stop();
}

# 73 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void CC2420TransmitP__BackoffTimer__stop(void ){
#line 73
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__stop();
#line 73
}
#line 73
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 797 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__releaseSpiResource(void )
#line 797
{
  CC2420TransmitP__SpiResource__release();
  return SUCCESS;
}

# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__set(void ){
#line 45
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set();
#line 45
}
#line 45
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set(void )
#line 48
{
#line 48
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__set();
}

# 40 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CSN__set(void ){
#line 40
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set();
#line 40
}
#line 40
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static cc2420_status_t CC2420TransmitP__TXFIFO_RAM__write(uint8_t offset, uint8_t * data, uint8_t length){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Ram__write(CC2420_RAM_TXFIFO, offset, data, length);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 50 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__clr(void ){
#line 50
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr();
#line 50
}
#line 50
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr(void )
#line 49
{
#line 49
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__clr();
}

# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CSN__clr(void ){
#line 41
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr();
#line 41
}
#line 41
# 292 "/usr/local/Cellar/stow/2.2.0/repository/nesc-1.3.4/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_leuint8(const void * source)
#line 292
{
  const uint8_t *base = source;

#line 294
  return base[0];
}

# 185 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline uint8_t CC2420PacketP__PacketTimeSyncOffset__get(message_t *msg)
{
  return __nesc_ntoh_leuint8(CC2420PacketP__CC2420PacketBody__getHeader(msg)->length.nxdata)
   + (sizeof(cc2420_header_t ) - MAC_HEADER_SIZE)
   - MAC_FOOTER_SIZE
   - sizeof(timesync_radio_t );
}

# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
inline static uint8_t CC2420TransmitP__PacketTimeSyncOffset__get(message_t * msg){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = CC2420PacketP__PacketTimeSyncOffset__get(msg);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 281 "/usr/local/Cellar/stow/2.2.0/repository/nesc-1.3.4/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

#line 303
static __inline  int8_t __nesc_ntoh_int8(const void * source)
#line 303
{
#line 303
  return __nesc_ntoh_uint8(source);
}

# 118 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline cc2420_metadata_t *CC2420PacketP__CC2420PacketBody__getMetadata(message_t *msg)
#line 118
{
  return (cc2420_metadata_t *)msg->metadata;
}

#line 176
static inline bool CC2420PacketP__PacketTimeSyncOffset__isSet(message_t *msg)
{
  return __nesc_ntoh_int8(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timesync.nxdata);
}

# 50 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
inline static bool CC2420TransmitP__PacketTimeSyncOffset__isSet(message_t * msg){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = CC2420PacketP__PacketTimeSyncOffset__isSet(msg);
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 143 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline void CC2420PacketP__PacketTimeStamp32khz__set(message_t *msg, uint32_t value)
{
  __nesc_hton_uint32(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timestamp.nxdata, value);
}

# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420TransmitP__PacketTimeStamp__set(message_t * msg, CC2420TransmitP__PacketTimeStamp__size_type value){
#line 78
  CC2420PacketP__PacketTimeStamp32khz__set(msg, value);
#line 78
}
#line 78
# 109 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static CC2420TransmitP__BackoffTimer__size_type CC2420TransmitP__BackoffTimer__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 259 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static __inline uint32_t CC2420TransmitP__getTime32(uint16_t captured_time)
{
  uint32_t now = CC2420TransmitP__BackoffTimer__getNow();


  return now - (uint16_t )(now - captured_time);
}

#line 280
static inline void CC2420TransmitP__CaptureSFD__captured(uint16_t time)
#line 280
{
  unsigned char *__nesc_temp45;
  unsigned char *__nesc_temp44;
#line 281
  uint32_t time32;
  uint8_t sfd_state = 0;

  /* atomic removed: atomic calls only */
#line 283
  {
    time32 = CC2420TransmitP__getTime32(time);
    switch (CC2420TransmitP__m_state) {

        case CC2420TransmitP__S_SFD: 
          CC2420TransmitP__m_state = CC2420TransmitP__S_EFD;
        CC2420TransmitP__sfdHigh = TRUE;


        CC2420TransmitP__m_receiving = FALSE;
        CC2420TransmitP__CaptureSFD__captureFallingEdge();
        CC2420TransmitP__PacketTimeStamp__set(CC2420TransmitP__m_msg, time32);
        if (CC2420TransmitP__PacketTimeSyncOffset__isSet(CC2420TransmitP__m_msg)) {
            uint8_t absOffset = sizeof(message_header_t ) - sizeof(cc2420_header_t ) + CC2420TransmitP__PacketTimeSyncOffset__get(CC2420TransmitP__m_msg);
            timesync_radio_t *timesync = (timesync_radio_t *)((nx_uint8_t *)CC2420TransmitP__m_msg + absOffset);

            (__nesc_temp44 = (*timesync).nxdata, __nesc_hton_uint32(__nesc_temp44, __nesc_ntoh_uint32(__nesc_temp44) - time32));
            CC2420TransmitP__CSN__clr();
            CC2420TransmitP__TXFIFO_RAM__write(absOffset, (uint8_t *)timesync, sizeof(timesync_radio_t ));
            CC2420TransmitP__CSN__set();

            (__nesc_temp45 = (*timesync).nxdata, __nesc_hton_uint32(__nesc_temp45, __nesc_ntoh_uint32(__nesc_temp45) + time32));
          }

        if (__nesc_ntoh_leuint16(CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg)->fcf.nxdata) & (1 << IEEE154_FCF_ACK_REQ)) {

            CC2420TransmitP__abortSpiRelease = TRUE;
          }
        CC2420TransmitP__releaseSpiResource();
        CC2420TransmitP__BackoffTimer__stop();

        if (CC2420TransmitP__SFD__get()) {
            break;
          }


        case CC2420TransmitP__S_EFD: 
          CC2420TransmitP__sfdHigh = FALSE;
        CC2420TransmitP__CaptureSFD__captureRisingEdge();

        if (__nesc_ntoh_leuint16(CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg)->fcf.nxdata) & (1 << IEEE154_FCF_ACK_REQ)) {
            CC2420TransmitP__m_state = CC2420TransmitP__S_ACK_WAIT;
            CC2420TransmitP__BackoffTimer__start(CC2420_ACK_WAIT_DELAY);
          }
        else 
#line 326
          {
            CC2420TransmitP__signalDone(SUCCESS);
          }

        if (!CC2420TransmitP__SFD__get()) {
            break;
          }


        default: 

          if (!CC2420TransmitP__m_receiving && CC2420TransmitP__sfdHigh == FALSE) {
              CC2420TransmitP__sfdHigh = TRUE;
              CC2420TransmitP__CaptureSFD__captureFallingEdge();

              sfd_state = CC2420TransmitP__SFD__get();
              CC2420TransmitP__CC2420Receive__sfd(time32);
              CC2420TransmitP__m_receiving = TRUE;
              CC2420TransmitP__m_prev_time = time;
              if (CC2420TransmitP__SFD__get()) {

                  return;
                }
            }



        if (CC2420TransmitP__sfdHigh == TRUE) {
            CC2420TransmitP__sfdHigh = FALSE;
            CC2420TransmitP__CaptureSFD__captureRisingEdge();
            CC2420TransmitP__m_receiving = FALSE;








            if (sfd_state == 0 && time - CC2420TransmitP__m_prev_time < 10) {
                CC2420TransmitP__CC2420Receive__sfd_dropped();
                if (CC2420TransmitP__m_msg) {
                  CC2420TransmitP__PacketTimeStamp__clear(CC2420TransmitP__m_msg);
                  }
              }
#line 370
            break;
          }
      }
  }
}

# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captured(uint16_t time){
#line 61
  CC2420TransmitP__CaptureSFD__captured(time);
#line 61
}
#line 61
# 175 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow(void )
{
  * (volatile uint16_t * )388U &= ~0x0002;
}

# 68 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow(void ){
#line 68
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow();
#line 68
}
#line 68
# 95 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )388U &= ~0x0001;
}

# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 76 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(uint16_t time)
#line 76
{
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt();
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow();
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captured(time);
}

# 86 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(uint16_t time){
#line 86
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(time);
#line 86
}
#line 86
# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4____nesc_unnamed4391 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(* (volatile uint16_t * )388U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired();
    }
}

# 64 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__size_type /*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__get(void ){
#line 64
  unsigned int __nesc_result;
#line 64

#line 64
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64







inline static bool /*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )31U |= 0x01 << 1;
}

# 89 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectModuleFunc(void ){
#line 89
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectModuleFunc();
#line 89
}
#line 89
# 57 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__CC2int(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4____nesc_unnamed4392 {
#line 57
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

#line 72
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__captureControl(uint8_t l_cm)
{
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t x = { 
  .cm = l_cm & 0x03, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 1, 
  .scs = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__CC2int(x);
}

#line 110
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(uint8_t cm)
{
  * (volatile uint16_t * )388U = /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__captureControl(cm);
}

# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__setControlAsCapture(uint8_t cm){
#line 55
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(cm);
#line 55
}
#line 55
# 130 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void )
{
  * (volatile uint16_t * )388U |= 0x0010;
}

# 57 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents();
#line 57
}
#line 57
# 382 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__tx(uint8_t data)
#line 382
{
  HplMsp430Usart0P__U0TXBUF = data;
}

# 224 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(uint8_t data){
#line 224
  HplMsp430Usart0P__Usart__tx(data);
#line 224
}
#line 224
# 330 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline bool HplMsp430Usart0P__Usart__isRxIntrPending(void )
#line 330
{
  if (HplMsp430Usart0P__IFG1 & (1 << 6)) {
      return TRUE;
    }
  return FALSE;
}

# 192 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__isRxIntrPending(void ){
#line 192
  unsigned char __nesc_result;
#line 192

#line 192
  __nesc_result = HplMsp430Usart0P__Usart__isRxIntrPending();
#line 192

#line 192
  return __nesc_result;
#line 192
}
#line 192
# 341 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__clrRxIntr(void )
#line 341
{
  HplMsp430Usart0P__IFG1 &= ~(1 << 6);
}

# 197 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__clrRxIntr(void ){
#line 197
  HplMsp430Usart0P__Usart__clrRxIntr();
#line 197
}
#line 197
# 386 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline uint8_t HplMsp430Usart0P__Usart__rx(void )
#line 386
{
  return U0RXBUF;
}

# 231 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__rx(void ){
#line 231
  unsigned char __nesc_result;
#line 231

#line 231
  __nesc_result = HplMsp430Usart0P__Usart__rx();
#line 231

#line 231
  return __nesc_result;
#line 231
}
#line 231
# 118 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/StateImplP.nc"
static inline void StateImplP__State__toIdle(uint8_t id)
#line 118
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 119
    StateImplP__state[id] = StateImplP__S_IDLE;
#line 119
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/State.nc"
inline static void CC2420SpiP__WorkingState__toIdle(void ){
#line 56
  StateImplP__State__toIdle(0U);
#line 56
}
#line 56
# 95 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__ChipSpiResource__abortRelease(void )
#line 95
{
  /* atomic removed: atomic calls only */
#line 96
  CC2420SpiP__release = FALSE;
}

# 31 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420TransmitP__ChipSpiResource__abortRelease(void ){
#line 31
  CC2420SpiP__ChipSpiResource__abortRelease();
#line 31
}
#line 31
# 377 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__ChipSpiResource__releasing(void )
#line 377
{
  if (CC2420TransmitP__abortSpiRelease) {
      CC2420TransmitP__ChipSpiResource__abortRelease();
    }
}

# 24 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420SpiP__ChipSpiResource__releasing(void ){
#line 24
  CC2420TransmitP__ChipSpiResource__releasing();
#line 24
}
#line 24
# 208 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void )
#line 208
{
}

# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void ){
#line 46
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted();
#line 46
}
#line 46
# 151 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__resetUsart(bool reset)
#line 151
{
  if (reset) {
      U0CTL = 0x01;
    }
  else {
      U0CTL &= ~0x01;
    }
}

# 97 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__resetUsart(bool reset){
#line 97
  HplMsp430Usart0P__Usart__resetUsart(reset);
#line 97
}
#line 97
#line 158
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableSpi(void ){
#line 158
  HplMsp430Usart0P__Usart__disableSpi();
#line 158
}
#line 158
# 124 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__unconfigure(uint8_t id)
#line 124
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__resetUsart(TRUE);
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableSpi();
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__resetUsart(FALSE);
}

# 218 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x107a739b8){
#line 65
  switch (arg_0x107a739b8) {
#line 65
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 65
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__unconfigure(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 65
      break;
#line 65
    default:
#line 65
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x107a739b8);
#line 65
      break;
#line 65
    }
#line 65
}
#line 65
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 68 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead != /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
        uint8_t id = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead;

#line 72
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ[/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead];
        if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qTail = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
          }
#line 75
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ[id] = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 60 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 111 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(uint8_t id)
#line 111
{
  /* atomic removed: atomic calls only */
#line 112
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY && /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId == id) {
        if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty() == FALSE) {
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue();
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__NO_RES;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_GRANTING;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask();
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
          }
        else {
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted();
          }
        {
          unsigned char __nesc_temp = 
#line 127
          SUCCESS;

#line 127
          return __nesc_temp;
        }
      }
  }
#line 130
  return FAIL;
}

# 176 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__release(uint8_t id)
#line 176
{
#line 176
  return FAIL;
}

# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__release(uint8_t arg_0x1078d2588){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x1078d2588) {
#line 120
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 120
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__release(arg_0x1078d2588);
#line 120
      break;
#line 120
    }
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 116 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__release(uint8_t id)
#line 116
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__release(id);
}

# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__release(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 1);
}

# 96 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__SIMO__selectIOFunc(void ){
#line 96
  /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc();
#line 96
}
#line 96
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 2);
}

# 96 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__SOMI__selectIOFunc(void ){
#line 96
  /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc();
#line 96
}
#line 96
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 3);
}

# 96 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__UCLK__selectIOFunc(void ){
#line 96
  /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc();
#line 96
}
#line 96
# 130 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents(void )
{
  * (volatile uint16_t * )390U |= 0x0010;
}

# 57 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents();
#line 57
}
#line 57
# 95 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )390U &= ~0x0001;
}

# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 155 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )406U = x;
}

# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(time);
#line 41
}
#line 41
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 165 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )406U = /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__get() + x;
}

# 43 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(uint16_t delta){
#line 43
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(delta);
#line 43
}
#line 43
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 81 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get();
    uint16_t elapsed = now - t0;

#line 87
    if (elapsed >= dt) 
      {
        /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 94
        if (remaining <= 2) {
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(2);
          }
        else {
#line 97
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(now + remaining);
          }
      }
#line 99
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt();
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents();
  }
}

# 103 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type dt){
#line 103
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP__ChipSpiResource__attemptRelease(void )
#line 102
{
  return CC2420SpiP__attemptRelease();
}

# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static error_t CC2420TransmitP__ChipSpiResource__attemptRelease(void ){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = CC2420SpiP__ChipSpiResource__attemptRelease();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 171 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Resource__request(void )
#line 171
{
  return CC2420ControlP__SpiResource__request();
}

# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420CsmaP__Resource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420ControlP__Resource__request();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 207 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__CC2420Power__startVRegDone(void )
#line 207
{
  CC2420CsmaP__Resource__request();
}

# 56 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static void CC2420ControlP__CC2420Power__startVRegDone(void ){
#line 56
  CC2420CsmaP__CC2420Power__startVRegDone();
#line 56
}
#line 56
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__set(void ){
#line 45
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__set();
#line 45
}
#line 45
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__set(void )
#line 48
{
#line 48
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__set();
}

# 40 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__set(void ){
#line 40
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__set();
#line 40
}
#line 40
# 50 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__clr(void ){
#line 50
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__clr();
#line 50
}
#line 50
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__clr(void )
#line 49
{
#line 49
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__clr();
}

# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__clr(void ){
#line 41
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__clr();
#line 41
}
#line 41
# 408 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__StartupTimer__fired(void )
#line 408
{
  if (CC2420ControlP__m_state == CC2420ControlP__S_VREG_STARTING) {
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTED;
      CC2420ControlP__RSTN__clr();
      CC2420ControlP__RSTN__set();
      CC2420ControlP__CC2420Power__startVRegDone();
    }
}

# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP__SFLUSHTX__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SFLUSHTX);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__getRaw(void )
#line 59
{
#line 59
  return * (volatile uint8_t * )32U & (0x01 << 4);
}

#line 60
static inline bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__get(void )
#line 60
{
#line 60
  return /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__getRaw() != 0;
}

# 70 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__get(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__get();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__get();
}

# 43 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP__CCA__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 498 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__BackoffTimer__fired(void )
#line 498
{
  /* atomic removed: atomic calls only */
#line 499
  {
    switch (CC2420TransmitP__m_state) {

        case CC2420TransmitP__S_SAMPLE_CCA: 


          if (CC2420TransmitP__CCA__get()) {
              CC2420TransmitP__m_state = CC2420TransmitP__S_BEGIN_TRANSMIT;
              CC2420TransmitP__BackoffTimer__start(CC2420_TIME_ACK_TURNAROUND);
            }
          else {
              CC2420TransmitP__congestionBackoff();
            }
        break;

        case CC2420TransmitP__S_BEGIN_TRANSMIT: 
          case CC2420TransmitP__S_CANCEL: 
            if (CC2420TransmitP__acquireSpiResource() == SUCCESS) {
                CC2420TransmitP__attemptSend();
              }
        break;

        case CC2420TransmitP__S_ACK_WAIT: 
          CC2420TransmitP__signalDone(SUCCESS);
        break;

        case CC2420TransmitP__S_SFD: 


          CC2420TransmitP__SFLUSHTX__strobe();
        CC2420TransmitP__CaptureSFD__captureRisingEdge();
        CC2420TransmitP__releaseSpiResource();
        CC2420TransmitP__signalDone(ERETRY);
        break;

        default: 
          break;
      }
  }
}

# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__fired(void ){
#line 78
  CC2420TransmitP__BackoffTimer__fired();
#line 78
  CC2420ControlP__StartupTimer__fired();
#line 78
}
#line 78
# 162 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt == 0) 
      {
        /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__fired();
      }
    else 
      {
        /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__set_alarm();
      }
  }
}

# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired(void ){
#line 78
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__fired();
#line 78
}
#line 78
# 70 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents();
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired();
}

# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired(void ){
#line 45
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired();
#line 45
}
#line 45
# 150 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void )
{
  return * (volatile uint16_t * )406U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t n)
{
}

# 86 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5____nesc_unnamed4393 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(* (volatile uint16_t * )390U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired();
    }
}

# 292 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__RadioBackoff__default__requestCongestionBackoff(am_id_t id, 
message_t *msg)
#line 293
{
}

# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420ActiveMessageP__RadioBackoff__requestCongestionBackoff(am_id_t arg_0x107f24d60, message_t * msg){
#line 88
    CC2420ActiveMessageP__RadioBackoff__default__requestCongestionBackoff(arg_0x107f24d60, msg);
#line 88
}
#line 88
# 241 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SubBackoff__requestCongestionBackoff(message_t *msg)
#line 241
{
  CC2420ActiveMessageP__RadioBackoff__requestCongestionBackoff(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (size_t )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.nxdata), msg);
}

# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__RadioBackoff__requestCongestionBackoff(message_t * msg){
#line 88
  CC2420ActiveMessageP__SubBackoff__requestCongestionBackoff(msg);
#line 88
}
#line 88
# 89 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC__Random__rand16(void )
#line 89
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t CC2420CsmaP__Random__rand16(void ){
#line 52
  unsigned int __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 251 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime)
#line 251
{
  CC2420TransmitP__myCongestionBackoff = backoffTime + 1;
}

# 66 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__SubBackoff__setCongestionBackoff(uint16_t backoffTime){
#line 66
  CC2420TransmitP__RadioBackoff__setCongestionBackoff(backoffTime);
#line 66
}
#line 66
# 227 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__SubBackoff__requestCongestionBackoff(message_t *msg)
#line 227
{
  CC2420CsmaP__SubBackoff__setCongestionBackoff(CC2420CsmaP__Random__rand16()
   % (0x7 * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP__RadioBackoff__requestCongestionBackoff(msg);
}

# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420TransmitP__RadioBackoff__requestCongestionBackoff(message_t * msg){
#line 88
  CC2420CsmaP__SubBackoff__requestCongestionBackoff(msg);
#line 88
}
#line 88
# 97 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = CC2420SpiP__Resource__immediateRequest(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/State.nc"
inline static error_t CC2420SpiP__WorkingState__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(0U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 173 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__isOwner(uint8_t id)
#line 173
{
#line 173
  return FAIL;
}

# 128 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__isOwner(uint8_t arg_0x1078d2588){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  switch (arg_0x1078d2588) {
#line 128
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 128
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 128
      break;
#line 128
    default:
#line 128
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__isOwner(arg_0x1078d2588);
#line 128
      break;
#line 128
    }
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 112 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__isOwner(uint8_t id)
#line 112
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__isOwner(id);
}

# 128 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static bool CC2420SpiP__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__isOwner(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 177 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__default__getConfig(uint8_t id)
#line 177
{
  return &msp430_spi_default_config;
}

# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiConfigure.nc"
inline static msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__getConfig(uint8_t arg_0x1078d0830){
#line 39
  union __nesc_unnamed4283 *__nesc_result;
#line 39

#line 39
    __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__default__getConfig(arg_0x1078d0830);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 168 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__setModeSpi(msp430_spi_union_config_t *config){
#line 168
  HplMsp430Usart0P__Usart__setModeSpi(config);
#line 168
}
#line 168
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__configure(uint8_t id)
#line 120
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__setModeSpi(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__getConfig(id));
}

# 216 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x107a739b8){
#line 59
  switch (arg_0x107a739b8) {
#line 59
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 59
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__configure(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 59
      break;
#line 59
    default:
#line 59
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x107a739b8);
#line 59
      break;
#line 59
    }
#line 59
}
#line 59
# 213 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested(void )
#line 213
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
}

# 81 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested(void ){
#line 81
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested();
#line 81
}
#line 81
# 206 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id)
#line 206
{
}

# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(uint8_t arg_0x107a757e8){
#line 61
    /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(arg_0x107a757e8);
#line 61
}
#line 61
# 93 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(uint8_t id)
#line 93
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
  /* atomic removed: atomic calls only */
#line 95
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_IMM_GRANTING;
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId = id;
      }
    else {
        unsigned char __nesc_temp = 
#line 100
        FAIL;

#line 100
        return __nesc_temp;
      }
  }
#line 102
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested();
  if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId == id) {
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
      return SUCCESS;
    }
  /* atomic removed: atomic calls only */
#line 107
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
  return FAIL;
}

# 175 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__immediateRequest(uint8_t id)
#line 175
{
#line 175
  return FAIL;
}

# 97 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__immediateRequest(uint8_t arg_0x1078d2588){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  switch (arg_0x1078d2588) {
#line 97
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 97
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 97
      break;
#line 97
    default:
#line 97
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__immediateRequest(arg_0x1078d2588);
#line 97
      break;
#line 97
    }
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 104 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__immediateRequest(uint8_t id)
#line 104
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__immediateRequest(id);
}

# 97 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__immediateRequest(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 97 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void HplMsp430I2C0P__HplUsart__resetUsart(bool reset){
#line 97
  HplMsp430Usart0P__Usart__resetUsart(reset);
#line 97
}
#line 97
# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2C0P.nc"
static inline void HplMsp430I2C0P__HplI2C__clearModeI2C(void )
#line 59
{
  /* atomic removed: atomic calls only */
#line 60
  {
    HplMsp430I2C0P__U0CTL &= ~((0x20 | 0x04) | 0x01);
    HplMsp430I2C0P__HplUsart__resetUsart(TRUE);
  }
}

# 7 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2C.nc"
inline static void HplMsp430Usart0P__HplI2C__clearModeI2C(void ){
#line 7
  HplMsp430I2C0P__HplI2C__clearModeI2C();
#line 7
}
#line 7
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 5);
}

# 96 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__URXD__selectIOFunc(void ){
#line 96
  /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc();
#line 96
}
#line 96
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 4);
}

# 96 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__UTXD__selectIOFunc(void ){
#line 96
  /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc();
#line 96
}
#line 96
# 207 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__disableUart(void )
#line 207
{
  /* atomic removed: atomic calls only */
#line 208
  {
    HplMsp430Usart0P__ME1 &= ~((1 << 7) | (1 << 6));
    HplMsp430Usart0P__UTXD__selectIOFunc();
    HplMsp430Usart0P__URXD__selectIOFunc();
  }
}

#line 143
static inline void HplMsp430Usart0P__Usart__setUmctl(uint8_t control)
#line 143
{
  U0MCTL = control;
}

#line 132
static inline void HplMsp430Usart0P__Usart__setUbr(uint16_t control)
#line 132
{
  /* atomic removed: atomic calls only */
#line 133
  {
    U0BR0 = control & 0x00FF;
    U0BR1 = (control >> 8) & 0x00FF;
  }
}

#line 256
static inline void HplMsp430Usart0P__configSpi(msp430_spi_union_config_t *config)
#line 256
{

  U0CTL = (config->spiRegisters.uctl | 0x04) | 0x01;
  HplMsp430Usart0P__U0TCTL = config->spiRegisters.utctl;

  HplMsp430Usart0P__Usart__setUbr(config->spiRegisters.ubr);
  HplMsp430Usart0P__Usart__setUmctl(0x00);
}

# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 3;
}

# 89 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__UCLK__selectModuleFunc(void ){
#line 89
  /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc();
#line 89
}
#line 89
# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 2;
}

# 89 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__SOMI__selectModuleFunc(void ){
#line 89
  /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectModuleFunc();
#line 89
}
#line 89
# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 1;
}

# 89 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__SIMO__selectModuleFunc(void ){
#line 89
  /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc();
#line 89
}
#line 89
# 238 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__enableSpi(void )
#line 238
{
  /* atomic removed: atomic calls only */
#line 239
  {
    HplMsp430Usart0P__SIMO__selectModuleFunc();
    HplMsp430Usart0P__SOMI__selectModuleFunc();
    HplMsp430Usart0P__UCLK__selectModuleFunc();
  }
  HplMsp430Usart0P__ME1 |= 1 << 6;
}

#line 345
static inline void HplMsp430Usart0P__Usart__clrIntr(void )
#line 345
{
  HplMsp430Usart0P__IFG1 &= ~((1 << 7) | (1 << 6));
}









static inline void HplMsp430Usart0P__Usart__disableIntr(void )
#line 357
{
  HplMsp430Usart0P__IE1 &= ~((1 << 7) | (1 << 6));
}

# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 210 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void )
#line 210
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
}

# 73 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void ){
#line 73
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested();
#line 73
}
#line 73
# 64 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ[id] != /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY || /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(id)) {
        if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead = id;
          }
        else {
#line 88
          /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ[/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qTail] = id;
          }
#line 89
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 204 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 204
{
}

# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__requested(uint8_t arg_0x107a757e8){
#line 53
    /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(arg_0x107a757e8);
#line 53
}
#line 53
# 77 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__request(uint8_t id)
#line 77
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__requested(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
  /* atomic removed: atomic calls only */
#line 79
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_GRANTING;
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId = id;
      }
    else {
#line 84
      if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId == id) {
          {
            unsigned char __nesc_temp = 
#line 85
            SUCCESS;

#line 85
            return __nesc_temp;
          }
        }
      else 
#line 87
        {
          unsigned char __nesc_temp = 
#line 87
          /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__enqueue(id);

#line 87
          return __nesc_temp;
        }
      }
  }
#line 89
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 174 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__request(uint8_t id)
#line 174
{
#line 174
  return FAIL;
}

# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__request(uint8_t arg_0x1078d2588){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  switch (arg_0x1078d2588) {
#line 88
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 88
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__request(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 88
      break;
#line 88
    default:
#line 88
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__request(arg_0x1078d2588);
#line 88
      break;
#line 88
    }
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 108 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__request(uint8_t id)
#line 108
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__request(id);
}

# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__request(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP__STXONCCA__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_STXONCCA);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
inline static cc2420_status_t CC2420TransmitP__STXON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_STXON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
inline static cc2420_status_t CC2420TransmitP__SNOP__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SNOP);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 324 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
static inline error_t AdcStreamP__SingleChannel__default__getData(uint8_t c)
{
  return FAIL;
}

# 189 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t AdcStreamP__SingleChannel__getData(uint8_t arg_0x1084a1b90){
#line 189
  unsigned char __nesc_result;
#line 189

#line 189
  switch (arg_0x1084a1b90) {
#line 189
    case /*SenseC.LightC.AdcReadStreamClientC*/AdcReadStreamClientC__0__RSCLIENT:
#line 189
      __nesc_result = Msp430Adc12ImplP__SingleChannel__getData(/*SenseC.LightC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1__ID);
#line 189
      break;
#line 189
    default:
#line 189
      __nesc_result = AdcStreamP__SingleChannel__default__getData(arg_0x1084a1b90);
#line 189
      break;
#line 189
    }
#line 189

#line 189
  return __nesc_result;
#line 189
}
#line 189
# 92 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
static inline void AdcStreamP__sampleSingle(void )
#line 92
{
  AdcStreamP__SingleChannel__getData(AdcStreamP__client);
}

#line 173
static inline void AdcStreamP__Alarm__fired(void )
#line 173
{
  AdcStreamP__sampleSingle();
}

# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__Alarm__fired(void ){
#line 78
  AdcStreamP__Alarm__fired();
#line 78
}
#line 78
# 162 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__m_dt == 0) 
      {
        /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__Alarm__fired();
      }
    else 
      {
        /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__set_alarm();
      }
  }
}

# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__fired(void ){
#line 78
  /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__AlarmFrom__fired();
#line 78
}
#line 78
# 135 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__disableEvents(void )
{
  * (volatile uint16_t * )392U &= ~0x0010;
}

# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__disableEvents();
#line 58
}
#line 58
# 70 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__fired(void )
{
  /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__disableEvents();
  /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__fired();
}

# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired(void ){
#line 45
  /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__fired();
#line 45
}
#line 45
# 150 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void )
{
  return * (volatile uint16_t * )408U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t n)
{
}

# 86 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6____nesc_unnamed4394 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(* (volatile uint16_t * )392U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired();
    }
}

# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )54U &= ~(0x01 << 7);
}

# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port67__makeInput(void ){
#line 75
  /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__makeInput();
#line 75
}
#line 75
# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )55U |= 0x01 << 7;
}

# 89 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port67__selectModuleFunc(void ){
#line 89
  /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__selectModuleFunc();
#line 89
}
#line 89
# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )54U &= ~(0x01 << 6);
}

# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port66__makeInput(void ){
#line 75
  /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__makeInput();
#line 75
}
#line 75
# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )55U |= 0x01 << 6;
}

# 89 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port66__selectModuleFunc(void ){
#line 89
  /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__selectModuleFunc();
#line 89
}
#line 89
# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )54U &= ~(0x01 << 5);
}

# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port65__makeInput(void ){
#line 75
  /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__makeInput();
#line 75
}
#line 75
# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )55U |= 0x01 << 5;
}

# 89 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port65__selectModuleFunc(void ){
#line 89
  /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__selectModuleFunc();
#line 89
}
#line 89
# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )54U &= ~(0x01 << 4);
}

# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port64__makeInput(void ){
#line 75
  /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__makeInput();
#line 75
}
#line 75
# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )55U |= 0x01 << 4;
}

# 89 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port64__selectModuleFunc(void ){
#line 89
  /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__selectModuleFunc();
#line 89
}
#line 89
# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )54U &= ~(0x01 << 3);
}

# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port63__makeInput(void ){
#line 75
  /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__makeInput();
#line 75
}
#line 75
# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )55U |= 0x01 << 3;
}

# 89 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port63__selectModuleFunc(void ){
#line 89
  /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__selectModuleFunc();
#line 89
}
#line 89
# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )54U &= ~(0x01 << 2);
}

# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port62__makeInput(void ){
#line 75
  /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__makeInput();
#line 75
}
#line 75
# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )55U |= 0x01 << 2;
}

# 89 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port62__selectModuleFunc(void ){
#line 89
  /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__selectModuleFunc();
#line 89
}
#line 89
# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )54U &= ~(0x01 << 1);
}

# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port61__makeInput(void ){
#line 75
  /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__makeInput();
#line 75
}
#line 75
# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )55U |= 0x01 << 1;
}

# 89 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port61__selectModuleFunc(void ){
#line 89
  /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__selectModuleFunc();
#line 89
}
#line 89
# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )54U &= ~(0x01 << 0);
}

# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port60__makeInput(void ){
#line 75
  /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__makeInput();
#line 75
}
#line 75
# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )55U |= 0x01 << 0;
}

# 89 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port60__selectModuleFunc(void ){
#line 89
  /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__selectModuleFunc();
#line 89
}
#line 89
# 142 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__configureAdcPin(uint8_t inch)
{

  switch (inch) 
    {
      case 0: Msp430Adc12ImplP__Port60__selectModuleFunc();
#line 147
      Msp430Adc12ImplP__Port60__makeInput();
#line 147
      break;
      case 1: Msp430Adc12ImplP__Port61__selectModuleFunc();
#line 148
      Msp430Adc12ImplP__Port61__makeInput();
#line 148
      break;
      case 2: Msp430Adc12ImplP__Port62__selectModuleFunc();
#line 149
      Msp430Adc12ImplP__Port62__makeInput();
#line 149
      break;
      case 3: Msp430Adc12ImplP__Port63__selectModuleFunc();
#line 150
      Msp430Adc12ImplP__Port63__makeInput();
#line 150
      break;
      case 4: Msp430Adc12ImplP__Port64__selectModuleFunc();
#line 151
      Msp430Adc12ImplP__Port64__makeInput();
#line 151
      break;
      case 5: Msp430Adc12ImplP__Port65__selectModuleFunc();
#line 152
      Msp430Adc12ImplP__Port65__makeInput();
#line 152
      break;
      case 6: Msp430Adc12ImplP__Port66__selectModuleFunc();
#line 153
      Msp430Adc12ImplP__Port66__makeInput();
#line 153
      break;
      case 7: Msp430Adc12ImplP__Port67__selectModuleFunc();
#line 154
      Msp430Adc12ImplP__Port67__makeInput();
#line 154
      break;
    }
}

# 100 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline void HplAdc12P__HplAdc12__startConversion(void )
#line 100
{
  HplAdc12P__ADC12CTL0 |= 0x0010;
  HplAdc12P__ADC12CTL0 |= 0x0001 + 0x0002;
}

# 128 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP__HplAdc12__startConversion(void ){
#line 128
  HplAdc12P__HplAdc12__startConversion();
#line 128
}
#line 128
# 50 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static void Msp430Adc12ImplP__TimerA__setMode(int mode){
#line 50
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setMode(mode);
#line 50
}
#line 50
# 57 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__CC2int(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1____nesc_unnamed4395 {
#line 57
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

#line 100
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__setControl(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t x)
{
  * (volatile uint16_t * )356U = /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__CC2int(x);
}

# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void Msp430Adc12ImplP__ControlA1__setControl(msp430_compare_control_t control){
#line 46
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__setControl(control);
#line 46
}
#line 46
# 121 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__startTimerA(void )
{

  msp430_compare_control_t ccSetSHI = { 
  .ccifg = 0, .cov = 0, .out = 1, .cci = 0, .ccie = 0, 
  .outmod = 0, .cap = 0, .clld = 0, .scs = 0, .ccis = 0, .cm = 0 };
  msp430_compare_control_t ccResetSHI = { 
  .ccifg = 0, .cov = 0, .out = 0, .cci = 0, .ccie = 0, 
  .outmod = 0, .cap = 0, .clld = 0, .scs = 0, .ccis = 0, .cm = 0 };
  msp430_compare_control_t ccRSOutmod = { 
  .ccifg = 0, .cov = 0, .out = 0, .cci = 0, .ccie = 0, 
  .outmod = 7, .cap = 0, .clld = 0, .scs = 0, .ccis = 0, .cm = 0 };

  Msp430Adc12ImplP__ControlA1__setControl(ccResetSHI);
  Msp430Adc12ImplP__ControlA1__setControl(ccSetSHI);

  Msp430Adc12ImplP__ControlA1__setControl(ccRSOutmod);
  Msp430Adc12ImplP__TimerA__setMode(MSP430TIMER_UP_MODE);
}

# 130 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__enableEvents(void )
{
  * (volatile uint16_t * )392U |= 0x0010;
}

# 57 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__enableEvents();
#line 57
}
#line 57
# 95 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )392U &= ~0x0001;
}

# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 155 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )408U = x;
}

# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEvent(time);
#line 41
}
#line 41
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 165 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )408U = /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__get() + x;
}

# 43 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEventFromNow(uint16_t delta){
#line 43
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEventFromNow(delta);
#line 43
}
#line 43
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 81 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__get();
    uint16_t elapsed = now - t0;

#line 87
    if (elapsed >= dt) 
      {
        /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 94
        if (remaining <= 2) {
          /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEventFromNow(2);
          }
        else {
#line 97
          /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEvent(now + remaining);
          }
      }
#line 99
    /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__clearPendingInterrupt();
    /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__enableEvents();
  }
}

# 103 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__AlarmFrom__startAt(/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__AlarmFrom__size_type t0, /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__AlarmFrom__size_type dt){
#line 103
  /*WireAdcStreamP.Alarm.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 192 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void )
{
}

# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired();
#line 45
}
#line 45
# 150 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void )
{
  return * (volatile uint16_t * )410U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t n)
{
}

# 86 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7____nesc_unnamed4396 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(* (volatile uint16_t * )394U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(/*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void )
{
}

# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired();
#line 45
}
#line 45
# 150 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void )
{
  return * (volatile uint16_t * )412U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t n)
{
}

# 86 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8____nesc_unnamed4397 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(* (volatile uint16_t * )396U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(/*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void )
{
}

# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired();
#line 45
}
#line 45
# 150 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void )
{
  return * (volatile uint16_t * )414U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t n)
{
}

# 86 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9____nesc_unnamed4398 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(* (volatile uint16_t * )398U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(/*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired();
    }
}

# 131 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void )
{
  uint8_t n = * (volatile uint16_t * )286U;

#line 134
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(n >> 1);
}

# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerB1__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired();
#line 39
}
#line 39
# 124 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 56 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )49U |= 0x01 << 6;
}

# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set(void ){
#line 45
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set();
#line 45
}
#line 45
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set();
}

# 40 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set();
#line 40
}
#line 40
# 56 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )49U |= 0x01 << 5;
}

# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set(void ){
#line 45
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set();
#line 45
}
#line 45
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set();
}

# 40 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 40
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set();
#line 40
}
#line 40
# 56 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )49U |= 0x01 << 4;
}

# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set(void ){
#line 45
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set();
#line 45
}
#line 45
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set();
}

# 40 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 40
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set();
#line 40
}
#line 40
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )50U |= 0x01 << 6;
}

# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput(void ){
#line 82
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput();
#line 82
}
#line 82
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput();
}

# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput();
#line 46
}
#line 46
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )50U |= 0x01 << 5;
}

# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput(void ){
#line 82
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput();
#line 82
}
#line 82
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput();
}

# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput();
#line 46
}
#line 46
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )50U |= 0x01 << 4;
}

# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput(void ){
#line 82
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput();
#line 82
}
#line 82
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput();
}

# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput();
#line 46
}
#line 46
# 56 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP__LedsInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 36 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/platforms/telosb/hardware.h"
static inline  void TOSH_SET_SIMO0_PIN()
#line 36
{
#line 36
  static volatile uint8_t r __asm ("0x0019");

#line 36
  r |= 1 << 1;
}

#line 37
static inline  void TOSH_SET_UCLK0_PIN()
#line 37
{
#line 37
  static volatile uint8_t r __asm ("0x0019");

#line 37
  r |= 1 << 3;
}

#line 88
static inline  void TOSH_SET_FLASH_CS_PIN()
#line 88
{
#line 88
  static volatile uint8_t r __asm ("0x001D");

#line 88
  r |= 1 << 4;
}

#line 37
static inline  void TOSH_CLR_UCLK0_PIN()
#line 37
{
#line 37
  static volatile uint8_t r __asm ("0x0019");

#line 37
  r &= ~(1 << 3);
}

#line 88
static inline  void TOSH_CLR_FLASH_CS_PIN()
#line 88
{
#line 88
  static volatile uint8_t r __asm ("0x001D");

#line 88
  r &= ~(1 << 4);
}

# 11 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/platforms/telosb/MotePlatformC.nc"
static __inline void MotePlatformC__TOSH_wait(void )
#line 11
{
   __asm volatile ("nop"); __asm volatile ("nop");}

# 89 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/platforms/telosb/hardware.h"
static inline  void TOSH_SET_FLASH_HOLD_PIN()
#line 89
{
#line 89
  static volatile uint8_t r __asm ("0x001D");

#line 89
  r |= 1 << 7;
}

#line 88
static inline  void TOSH_MAKE_FLASH_CS_OUTPUT()
#line 88
{
#line 88
  static volatile uint8_t r __asm ("0x001E");

#line 88
  r |= 1 << 4;
}

#line 89
static inline  void TOSH_MAKE_FLASH_HOLD_OUTPUT()
#line 89
{
#line 89
  static volatile uint8_t r __asm ("0x001E");

#line 89
  r |= 1 << 7;
}

#line 37
static inline  void TOSH_MAKE_UCLK0_OUTPUT()
#line 37
{
#line 37
  static volatile uint8_t r __asm ("0x001A");

#line 37
  r |= 1 << 3;
}

#line 36
static inline  void TOSH_MAKE_SIMO0_OUTPUT()
#line 36
{
#line 36
  static volatile uint8_t r __asm ("0x001A");

#line 36
  r |= 1 << 1;
}

# 27 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/platforms/telosb/MotePlatformC.nc"
static inline void MotePlatformC__TOSH_FLASH_M25P_DP(void )
#line 27
{

  TOSH_MAKE_SIMO0_OUTPUT();
  TOSH_MAKE_UCLK0_OUTPUT();
  TOSH_MAKE_FLASH_HOLD_OUTPUT();
  TOSH_MAKE_FLASH_CS_OUTPUT();
  TOSH_SET_FLASH_HOLD_PIN();
  TOSH_SET_FLASH_CS_PIN();

  MotePlatformC__TOSH_wait();


  TOSH_CLR_FLASH_CS_PIN();
  TOSH_CLR_UCLK0_PIN();

  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(FALSE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(FALSE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(FALSE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);

  TOSH_SET_FLASH_CS_PIN();
  TOSH_SET_UCLK0_PIN();
  TOSH_SET_SIMO0_PIN();
}

#line 6
static __inline void MotePlatformC__uwait(uint16_t u)
#line 6
{
  uint16_t t0 = TA0R;

#line 8
  while (TA0R - t0 <= u) ;
}

#line 56
static inline error_t MotePlatformC__Init__init(void )
#line 56
{
  /* atomic removed: atomic calls only */

  {
    P1SEL = 0;
    P2SEL = 0;
    P3SEL = 0;
    P4SEL = 0;
    P5SEL = 0;
    P6SEL = 0;

    P1OUT = 0x00;
    P1DIR = 0xe0;

    P2OUT = 0x30;
    P2DIR = 0x7b;

    P3OUT = 0x00;
    P3DIR = 0xf1;

    P4OUT = 0xdd;
    P4DIR = 0xfd;

    P5OUT = 0xff;
    P5DIR = 0xff;

    P6OUT = 0x00;
    P6DIR = 0xff;

    P1IE = 0;
    P2IE = 0;






    MotePlatformC__uwait(1024 * 10);

    MotePlatformC__TOSH_FLASH_M25P_DP();
  }

  return SUCCESS;
}

# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MotePlatformC__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 163 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__startTimerB(void )
{

  Msp430ClockP__TBCTL = 0x0020 | (Msp430ClockP__TBCTL & ~(0x0020 | 0x0010));
}

#line 151
static inline void Msp430ClockP__startTimerA(void )
{

  Msp430ClockP__TA0CTL = 0x0020 | (Msp430ClockP__TA0CTL & ~(0x0020 | 0x0010));
}

#line 115
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void )
{
  TBR = 0;









  Msp430ClockP__TBCTL = 0x0100 | 0x0002;
}

#line 145
static inline void Msp430ClockP__Msp430ClockInit__default__initTimerB(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitTimerB();
}

# 43 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initTimerB(void ){
#line 43
  Msp430ClockP__Msp430ClockInit__default__initTimerB();
#line 43
}
#line 43
# 100 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void )
{
  TA0R = 0;









  Msp430ClockP__TA0CTL = 0x0200 | 0x0002;
}

#line 140
static inline void Msp430ClockP__Msp430ClockInit__default__initTimerA(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitTimerA();
}

# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initTimerA(void ){
#line 42
  Msp430ClockP__Msp430ClockInit__default__initTimerA();
#line 42
}
#line 42
# 79 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void )
{





  BCSCTL1 = 0x80 | (BCSCTL1 & ((0x04 | 0x02) | 0x01));







  BCSCTL2 = 0x04;


  Msp430ClockP__IE1 &= ~(1 << 1);
}

#line 135
static inline void Msp430ClockP__Msp430ClockInit__default__initClocks(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitClocks();
}

# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initClocks(void ){
#line 41
  Msp430ClockP__Msp430ClockInit__default__initClocks();
#line 41
}
#line 41
# 181 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline uint16_t Msp430ClockP__test_calib_busywait_delta(int calib)
{
  int8_t aclk_count = 2;
  uint16_t dco_prev = 0;
  uint16_t dco_curr = 0;

  Msp430ClockP__set_dco_calib(calib);

  while (aclk_count-- > 0) 
    {
      TBCCR0 = TBR + Msp430ClockP__ACLK_CALIB_PERIOD;
      TBCCTL0 &= ~0x0001;
      while ((TBCCTL0 & 0x0001) == 0) ;
      dco_prev = dco_curr;
      dco_curr = TA0R;
    }

  return dco_curr - dco_prev;
}




static inline void Msp430ClockP__busyCalibrateDco(void )
{

  int calib;
  int step;






  for (calib = 0, step = 0x800; step != 0; step >>= 1) 
    {

      if (Msp430ClockP__test_calib_busywait_delta(calib | step) <= Msp430ClockP__TARGET_DCO_DELTA) {
        calib |= step;
        }
    }

  if ((calib & 0x0e0) == 0x0e0) {
    calib &= ~0x01f;
    }
  Msp430ClockP__set_dco_calib(calib);
}

#line 67
static inline void Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate(void )
{



  Msp430ClockP__TA0CTL = 0x0200 | 0x0020;
  Msp430ClockP__TBCTL = 0x0100 | 0x0020;
  BCSCTL1 = 0x80 | 0x04;
  BCSCTL2 = 0;
  TBCCTL0 = 0x4000;
}

#line 130
static inline void Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate(void )
{
  Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate();
}

# 40 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__setupDcoCalibrate(void ){
#line 40
  Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate();
#line 40
}
#line 40
# 229 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline error_t Msp430ClockP__Init__init(void )
{

  Msp430ClockP__TA0CTL = 0x0004;
  Msp430ClockP__TA0IV = 0;
  Msp430ClockP__TBCTL = 0x0004;
  Msp430ClockP__TBIV = 0;
  /* atomic removed: atomic calls only */

  {
    Msp430ClockP__Msp430ClockInit__setupDcoCalibrate();
    Msp430ClockP__busyCalibrateDco();
    Msp430ClockP__Msp430ClockInit__initClocks();
    Msp430ClockP__Msp430ClockInit__initTimerA();
    Msp430ClockP__Msp430ClockInit__initTimerB();
    Msp430ClockP__startTimerA();
    Msp430ClockP__startTimerB();
  }

  return SUCCESS;
}

# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteClockInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Msp430ClockP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 10 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/platforms/telosa/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
#line 10
{
  PlatformP__MoteClockInit__init();
  PlatformP__MoteInit__init();
  PlatformP__LedsInit__init();
  return SUCCESS;
}

# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 36 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/platforms/telosb/hardware.h"
static inline  void TOSH_CLR_SIMO0_PIN()
#line 36
{
#line 36
  static volatile uint8_t r __asm ("0x0019");

#line 36
  r &= ~(1 << 1);
}

# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 79 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__default__bufferDone(uint8_t client, error_t result, /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__val_t *buf, uint16_t count)
{
}

# 89 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ReadStream.nc"
inline static void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__bufferDone(uint8_t arg_0x108522020, error_t result, /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__val_t * buf, uint16_t count){
#line 89
    /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__default__bufferDone(arg_0x108522020, result, buf, count);
#line 89
}
#line 89
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Service__bufferDone(uint8_t client, error_t result, /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__val_t *buf, uint16_t count)
{
  /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__bufferDone(client, result, buf, count);
}

# 89 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ReadStream.nc"
inline static void AdcStreamP__ReadStream__bufferDone(uint8_t arg_0x1084a5b08, error_t result, AdcStreamP__ReadStream__val_t * buf, uint16_t count){
#line 89
  /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Service__bufferDone(arg_0x1084a5b08, result, buf, count);
#line 89
}
#line 89
# 156 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
static inline void AdcStreamP__bufferDone__runTask(void )
#line 156
{
  uint16_t *b;
#line 157
  uint16_t c;

#line 158
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      b = AdcStreamP__lastBuffer;
      c = AdcStreamP__lastCount;
      AdcStreamP__lastBuffer = (void *)0;
    }
#line 163
    __nesc_atomic_end(__nesc_atomic); }

  AdcStreamP__ReadStream__bufferDone(AdcStreamP__client, SUCCESS, b, c);
}

# 83 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__default__readDone(uint8_t client, error_t result, uint32_t actualPeriod)
{
}

# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ReadStream.nc"
inline static void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__readDone(uint8_t arg_0x108522020, error_t result, uint32_t usActualPeriod){
#line 102
    /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__default__readDone(arg_0x108522020, result, usActualPeriod);
#line 102
}
#line 102
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
static inline error_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Resource__default__release(uint8_t client)
#line 67
{
#line 67
  return FAIL;
}

# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Resource__release(uint8_t arg_0x10851a020){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x10851a020) {
#line 120
    case /*SenseC.LightC.AdcReadStreamClientC*/AdcReadStreamClientC__0__RSCLIENT:
#line 120
      __nesc_result = Msp430RefVoltArbiterImplP__ClientResource__release(/*SenseC.LightC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1__ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Resource__default__release(arg_0x10851a020);
#line 120
      break;
#line 120
    }
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Service__readDone(uint8_t client, error_t result, uint32_t actualPeriod)
{
  /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Resource__release(client);
  /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__ReadStream__readDone(client, result, actualPeriod);
}

# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ReadStream.nc"
inline static void AdcStreamP__ReadStream__readDone(uint8_t arg_0x1084a5b08, error_t result, uint32_t usActualPeriod){
#line 102
  /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Service__readDone(arg_0x1084a5b08, result, usActualPeriod);
#line 102
}
#line 102
# 135 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
static inline void AdcStreamP__readStreamFail__runTask(void )
#line 135
{

  struct AdcStreamP__list_entry_t *entry;
  uint8_t c = AdcStreamP__client;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 140
    entry = AdcStreamP__bufferQueue[c];
#line 140
    __nesc_atomic_end(__nesc_atomic); }
  for (; entry; entry = entry->next) {
      uint16_t tmp_count __attribute((unused))  = entry->count;

#line 143
      AdcStreamP__ReadStream__bufferDone(c, FAIL, (uint16_t * )entry, entry->count);
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      AdcStreamP__bufferQueue[c] = (void *)0;
      AdcStreamP__bufferQueueEnd[c] = &AdcStreamP__bufferQueue[c];
    }
#line 150
    __nesc_atomic_end(__nesc_atomic); }

  AdcStreamP__client = AdcStreamP__NSTREAM;
  AdcStreamP__ReadStream__readDone(c, FAIL, 0);
}

# 170 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline error_t Msp430RefVoltArbiterImplP__AdcResource__default__release(uint8_t client)
#line 170
{
#line 170
  return FAIL;
}

# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t Msp430RefVoltArbiterImplP__AdcResource__release(uint8_t arg_0x10842f108){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x10842f108) {
#line 120
    case /*SenseC.LightC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID:
#line 120
      __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(/*SenseC.LightC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID);
#line 120
      break;
#line 120
    case /*SenseC.LightC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1__ID:
#line 120
      __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(/*SenseC.LightC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1__ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = Msp430RefVoltArbiterImplP__AdcResource__default__release(arg_0x10842f108);
#line 120
      break;
#line 120
    }
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 66 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void )
#line 66
{
  int i;

  /* atomic removed: atomic calls only */
#line 68
  {
    for (i = 0; i < sizeof /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ; i++) 
      if (/*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 70
          FALSE;

#line 70
          return __nesc_temp;
        }
#line 71
    {
      unsigned char __nesc_temp = 
#line 71
      TRUE;

#line 71
      return __nesc_temp;
    }
  }
}

# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static bool /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 57 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static inline void /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id)
#line 57
{
  /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] &= ~(1 << id % 8);
}

#line 79
static inline resource_client_id_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void )
#line 79
{
  int i;

  /* atomic removed: atomic calls only */
#line 81
  {
    for (i = /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__last + 1; ; i++) {
        if (i == 2U) {
          i = 0;
          }
#line 85
        if (/*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(i)) {
            /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(i);
            /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__last = i;
            {
              unsigned char __nesc_temp = 
#line 88
              i;

#line 88
              return __nesc_temp;
            }
          }
#line 90
        if (i == /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__last) {
          break;
          }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__NO_ENTRY;

#line 93
      return __nesc_temp;
    }
  }
}

# 70 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 173 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 173
{
}

# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x108371220){
#line 65
    /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x108371220);
#line 65
}
#line 65
# 119 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
static inline void AdcStreamP__readStreamDone__runTask(void )
#line 119
{
  uint8_t c = AdcStreamP__client;
  uint32_t actualPeriod = AdcStreamP__period;

#line 122
  if (AdcStreamP__periodModified) {
    actualPeriod = AdcStreamP__period - AdcStreamP__period % 1000;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      AdcStreamP__bufferQueue[c] = (void *)0;
      AdcStreamP__bufferQueueEnd[c] = &AdcStreamP__bufferQueue[c];
    }
#line 129
    __nesc_atomic_end(__nesc_atomic); }

  AdcStreamP__client = AdcStreamP__NSTREAM;
  AdcStreamP__ReadStream__readDone(c, SUCCESS, actualPeriod);
}

# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t Msp430RefVoltArbiterImplP__switchOff__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(Msp430RefVoltArbiterImplP__switchOff);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 164 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void Msp430RefVoltGeneratorP__SwitchOnTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(4U);
#line 78
}
#line 78
# 64 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getNow(void )
{
  return /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__get();
}

# 109 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 159 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

# 73 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void Msp430RefVoltGeneratorP__SwitchOffTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(5U, dt);
#line 73
}
#line 73
# 126 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline error_t Msp430RefVoltGeneratorP__stop(Msp430RefVoltGeneratorP__state_t nextState)
#line 126
{
  error_t result;

  if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__GENERATOR_OFF) {
    result = EALREADY;
    }
  else {
#line 131
    if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE || Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_2_5V_STABLE) {
        result = SUCCESS;
        Msp430RefVoltGeneratorP__m_state = nextState;
        Msp430RefVoltGeneratorP__SwitchOffTimer__startOneShot(20);
      }
    else {
#line 135
      if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_ON_PENDING || Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_2_5V_ON_PENDING) {
          if ((result = Msp430RefVoltGeneratorP__switchOff()) == SUCCESS) {

              Msp430RefVoltGeneratorP__state_t oldState = Msp430RefVoltGeneratorP__m_state;

#line 139
              Msp430RefVoltGeneratorP__SwitchOnTimer__stop();
              Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__GENERATOR_OFF;
              Msp430RefVoltGeneratorP__signalStartDone(oldState, FAIL);
              Msp430RefVoltGeneratorP__signalStopDone(nextState, SUCCESS);
            }
        }
      else {
#line 144
        if (Msp430RefVoltGeneratorP__m_state == nextState) {
          result = SUCCESS;
          }
        else {
#line 147
          result = EBUSY;
          }
        }
      }
    }
#line 149
  return result;
}

#line 86
static inline error_t Msp430RefVoltGeneratorP__RefVolt_1_5V__stop(void )
#line 86
{
  return Msp430RefVoltGeneratorP__stop(Msp430RefVoltGeneratorP__REFERENCE_1_5V_OFF_PENDING);
}

# 130 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t Msp430RefVoltArbiterImplP__RefVolt_1_5V__stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = Msp430RefVoltGeneratorP__RefVolt_1_5V__stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 136 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline void Msp430RefVoltArbiterImplP__switchOff__runTask(void )
{

  if (Msp430RefVoltArbiterImplP__syncOwner != Msp430RefVoltArbiterImplP__NO_OWNER) {
      if (Msp430RefVoltArbiterImplP__RefVolt_1_5V__stop() == SUCCESS) {
          Msp430RefVoltArbiterImplP__syncOwner = Msp430RefVoltArbiterImplP__NO_OWNER;
        }
      else {
#line 143
        Msp430RefVoltArbiterImplP__switchOff__postTask();
        }
    }
}

# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 118 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline bool HplAdc12P__HplAdc12__isBusy(void )
#line 118
{
#line 118
  return HplAdc12P__ADC12CTL1 & 0x0001;
}

# 118 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
inline static bool Msp430RefVoltGeneratorP__HplAdc12__isBusy(void ){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  __nesc_result = HplAdc12P__HplAdc12__isBusy();
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
# 57 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline  adc12ctl0_t HplAdc12P__int2adc12ctl0(uint16_t x)
#line 57
{
#line 57
  union __nesc_unnamed4399 {
#line 57
    uint16_t f;
#line 57
    adc12ctl0_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

#line 72
static inline adc12ctl0_t HplAdc12P__HplAdc12__getCtl0(void )
#line 72
{
  return HplAdc12P__int2adc12ctl0(HplAdc12P__ADC12CTL0);
}

# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
inline static adc12ctl0_t Msp430RefVoltGeneratorP__HplAdc12__getCtl0(void ){
#line 63
  struct __nesc_unnamed4254 __nesc_result;
#line 63

#line 63
  __nesc_result = HplAdc12P__HplAdc12__getCtl0();
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline  uint16_t HplAdc12P__adc12ctl0cast2int(adc12ctl0_t x)
#line 59
{
#line 59
  union __nesc_unnamed4400 {
#line 59
    adc12ctl0_t f;
#line 59
    uint16_t t;
  } 
#line 59
  c = { .f = x };

#line 59
  return c.t;
}



static inline void HplAdc12P__HplAdc12__setCtl0(adc12ctl0_t control0)
#line 64
{
  HplAdc12P__ADC12CTL0 = HplAdc12P__adc12ctl0cast2int(control0);
}

# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430RefVoltGeneratorP__HplAdc12__setCtl0(adc12ctl0_t control0){
#line 51
  HplAdc12P__HplAdc12__setCtl0(control0);
#line 51
}
#line 51
# 64 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__Counter__size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__to_size_type /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__Alarm__getNow(void )
{
  return /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__Counter__get();
}

# 109 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static AdcStreamP__Alarm__size_type AdcStreamP__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 328 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
static inline error_t AdcStreamP__SingleChannel__default__configureSingle(uint8_t c, 
const msp430adc12_channel_config_t *config)
#line 329
{
#line 329
  return FAIL;
}

# 84 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t AdcStreamP__SingleChannel__configureSingle(uint8_t arg_0x1084a1b90, const msp430adc12_channel_config_t * config){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  switch (arg_0x1084a1b90) {
#line 84
    case /*SenseC.LightC.AdcReadStreamClientC*/AdcReadStreamClientC__0__RSCLIENT:
#line 84
      __nesc_result = Msp430Adc12ImplP__SingleChannel__configureSingle(/*SenseC.LightC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1__ID, config);
#line 84
      break;
#line 84
    default:
#line 84
      __nesc_result = AdcStreamP__SingleChannel__default__configureSingle(arg_0x1084a1b90, config);
#line 84
      break;
#line 84
    }
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/platforms/telosa/chips/s1087/HamamatsuS1087ParP.nc"
static inline const msp430adc12_channel_config_t *HamamatsuS1087ParP__AdcConfigure__getConfiguration(void )
#line 61
{
  return &HamamatsuS1087ParP__config;
}

# 314 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
static inline const msp430adc12_channel_config_t *AdcStreamP__AdcConfigure__default__getConfiguration(uint8_t c)
{
  return &AdcStreamP__defaultConfig;
}

# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
inline static AdcStreamP__AdcConfigure__adc_config_t AdcStreamP__AdcConfigure__getConfiguration(uint8_t arg_0x10849f318){
#line 58
  struct __nesc_unnamed4297 const *__nesc_result;
#line 58

#line 58
  switch (arg_0x10849f318) {
#line 58
    case /*SenseC.LightC.AdcReadStreamClientC*/AdcReadStreamClientC__0__RSCLIENT:
#line 58
      __nesc_result = HamamatsuS1087ParP__AdcConfigure__getConfiguration();
#line 58
      break;
#line 58
    default:
#line 58
      __nesc_result = AdcStreamP__AdcConfigure__default__getConfiguration(arg_0x10849f318);
#line 58
      break;
#line 58
    }
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t AdcStreamP__readStreamDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(AdcStreamP__readStreamDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 147 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__Alarm__startAt(/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__to_size_type t0, /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__to_size_type dt)
{
  /* atomic removed: atomic calls only */
  {
    /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__m_t0 = t0;
    /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__m_dt = dt;
    /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__set_alarm();
  }
}

# 103 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void AdcStreamP__Alarm__startAt(AdcStreamP__Alarm__size_type t0, AdcStreamP__Alarm__size_type dt){
#line 103
  /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 168 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
static inline void AdcStreamP__nextAlarm(void )
#line 168
{
  AdcStreamP__Alarm__startAt(AdcStreamP__now, AdcStreamP__period);
  AdcStreamP__now += AdcStreamP__period;
}

# 155 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )372U = x;
}

# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void Msp430Adc12ImplP__CompareA1__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__setEvent(time);
#line 41
}
#line 41
# 155 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )370U = x;
}

# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void Msp430Adc12ImplP__CompareA0__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__setEvent(time);
#line 41
}
#line 41
# 57 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__CC2int(/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0____nesc_unnamed4401 {
#line 57
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

#line 100
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__setControl(/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t x)
{
  * (volatile uint16_t * )354U = /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__CC2int(x);
}

# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void Msp430Adc12ImplP__ControlA0__setControl(msp430_compare_control_t control){
#line 46
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__setControl(control);
#line 46
}
#line 46
# 121 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setInputDivider(uint16_t inputDivider)
{
  * (volatile uint16_t * )352U = (* (volatile uint16_t * )352U & ~(0x0040 | 0x0080)) | ((inputDivider << 6) & (0x0040 | 0x0080));
}

# 56 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static void Msp430Adc12ImplP__TimerA__setInputDivider(uint16_t inputDivider){
#line 56
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setInputDivider(inputDivider);
#line 56
}
#line 56
# 116 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setClockSource(uint16_t clockSource)
{
  * (volatile uint16_t * )352U = (* (volatile uint16_t * )352U & ~(256U | 512U)) | ((clockSource << 8) & (256U | 512U));
}

# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static void Msp430Adc12ImplP__TimerA__setClockSource(uint16_t clockSource){
#line 55
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setClockSource(clockSource);
#line 55
}
#line 55
# 111 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__disableEvents(void )
{
  * (volatile uint16_t * )352U &= ~2U;
}

# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static void Msp430Adc12ImplP__TimerA__disableEvents(void ){
#line 54
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__disableEvents();
#line 54
}
#line 54
# 101 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__clear(void )
{
  * (volatile uint16_t * )352U |= 4U;
}

# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static void Msp430Adc12ImplP__TimerA__clear(void ){
#line 52
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__clear();
#line 52
}
#line 52
# 103 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__prepareTimerA(uint16_t interval, uint16_t csSAMPCON, uint16_t cdSAMPCON)
{

  msp430_compare_control_t ccResetSHI = { 
  .ccifg = 0, .cov = 0, .out = 0, .cci = 0, .ccie = 0, 
  .outmod = 0, .cap = 0, .clld = 0, .scs = 0, .ccis = 0, .cm = 0 };

  Msp430Adc12ImplP__TimerA__setMode(MSP430TIMER_STOP_MODE);
  Msp430Adc12ImplP__TimerA__clear();
  Msp430Adc12ImplP__TimerA__disableEvents();
  Msp430Adc12ImplP__TimerA__setClockSource(csSAMPCON);
  Msp430Adc12ImplP__TimerA__setInputDivider(cdSAMPCON);
  Msp430Adc12ImplP__ControlA0__setControl(ccResetSHI);
  Msp430Adc12ImplP__CompareA0__setEvent(interval - 1);
  Msp430Adc12ImplP__CompareA1__setEvent((interval - 1) / 2);
}

# 92 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline void HplAdc12P__HplAdc12__setIEFlags(uint16_t mask)
#line 92
{
#line 92
  HplAdc12P__ADC12IE = mask;
}

# 95 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP__HplAdc12__setIEFlags(uint16_t mask){
#line 95
  HplAdc12P__HplAdc12__setIEFlags(mask);
#line 95
}
#line 95
# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline  uint8_t HplAdc12P__adc12memctl2int(adc12memctl_t x)
#line 61
{
#line 61
  union __nesc_unnamed4402 {
#line 61
    adc12memctl_t f;
#line 61
    uint8_t t;
  } 
#line 61
  c = { .f = x };

#line 61
  return c.t;
}

#line 80
static inline void HplAdc12P__HplAdc12__setMCtl(uint8_t i, adc12memctl_t memCtl)
#line 80
{
  ((char *)0x0080)[i] = HplAdc12P__adc12memctl2int(memCtl);
}

# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP__HplAdc12__setMCtl(uint8_t idx, adc12memctl_t memControl){
#line 75
  HplAdc12P__HplAdc12__setMCtl(idx, memControl);
#line 75
}
#line 75
# 60 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline  uint16_t HplAdc12P__adc12ctl1cast2int(adc12ctl1_t x)
#line 60
{
#line 60
  union __nesc_unnamed4403 {
#line 60
    adc12ctl1_t f;
#line 60
    uint16_t t;
  } 
#line 60
  c = { .f = x };

#line 60
  return c.t;
}






static inline void HplAdc12P__HplAdc12__setCtl1(adc12ctl1_t control1)
#line 68
{
  HplAdc12P__ADC12CTL1 = HplAdc12P__adc12ctl1cast2int(control1);
}

# 57 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP__HplAdc12__setCtl1(adc12ctl1_t control1){
#line 57
  HplAdc12P__HplAdc12__setCtl1(control1);
#line 57
}
#line 57
#line 51
inline static void Msp430Adc12ImplP__HplAdc12__setCtl0(adc12ctl0_t control0){
#line 51
  HplAdc12P__HplAdc12__setCtl0(control0);
#line 51
}
#line 51
#line 63
inline static adc12ctl0_t Msp430Adc12ImplP__HplAdc12__getCtl0(void ){
#line 63
  struct __nesc_unnamed4254 __nesc_result;
#line 63

#line 63
  __nesc_result = HplAdc12P__HplAdc12__getCtl0();
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 98 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
inline static uint8_t Msp430Adc12ImplP__ADCArbiterInfo__userId(void ){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__userId();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 271 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline error_t Msp430Adc12ImplP__SingleChannel__configureMultiple(uint8_t id, 
const msp430adc12_channel_config_t *config, 
uint16_t *buf, uint16_t length, uint16_t jiffies)
{
  error_t result = ERESERVE;





  if ((((!config || !buf) || !length) || jiffies == 1) || jiffies == 2) {
    return EINVAL;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 284
    {
      if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__ADC_BUSY) 
        {
          unsigned char __nesc_temp = 
#line 286
          EBUSY;

          {
#line 286
            __nesc_atomic_end(__nesc_atomic); 
#line 286
            return __nesc_temp;
          }
        }
#line 287
      if (Msp430Adc12ImplP__ADCArbiterInfo__userId() == id) {
          adc12ctl1_t ctl1 = { 
          .adc12busy = 0, 
          .conseq = length > 16 ? 3 : 1, 
          .adc12ssel = config->adc12ssel, 
          .adc12div = config->adc12div, 
          .issh = 0, 
          .shp = 1, 
          .shs = jiffies == 0 ? 0 : 1, 
          .cstartadd = 0 };

          adc12memctl_t memctl = { 
          .inch = config->inch, 
          .sref = config->sref, 
          .eos = 0 };

          uint16_t i;
#line 303
          uint16_t mask = 1;
          adc12ctl0_t ctl0 = Msp430Adc12ImplP__HplAdc12__getCtl0();

#line 305
          ctl0.msc = jiffies == 0 ? 1 : 0;
          ctl0.sht0 = config->sht;
          ctl0.sht1 = config->sht;

          Msp430Adc12ImplP__state = Msp430Adc12ImplP__MULTIPLE_DATA;
          Msp430Adc12ImplP__resultBufferStart = (void *)0;
          Msp430Adc12ImplP__resultBufferLength = length;
          Msp430Adc12ImplP__resultBufferStart = buf;
          Msp430Adc12ImplP__resultBufferIndex = 0;
          Msp430Adc12ImplP__HplAdc12__setCtl0(ctl0);
          Msp430Adc12ImplP__HplAdc12__setCtl1(ctl1);
          for (i = 0; i < length - 1 && i < 15; i++) 
            Msp430Adc12ImplP__HplAdc12__setMCtl(i, memctl);
          memctl.eos = 1;
          Msp430Adc12ImplP__HplAdc12__setMCtl(i, memctl);
          Msp430Adc12ImplP__HplAdc12__setIEFlags(mask << i);

          if (jiffies) {
              Msp430Adc12ImplP__state |= Msp430Adc12ImplP__USE_TIMERA;
              Msp430Adc12ImplP__prepareTimerA(jiffies, config->sampcon_ssel, config->sampcon_id);
            }
          result = SUCCESS;
        }
    }
#line 328
    __nesc_atomic_end(__nesc_atomic); }
  return result;
}

# 318 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
static inline error_t AdcStreamP__SingleChannel__default__configureMultiple(uint8_t c, 
const msp430adc12_channel_config_t *config, uint16_t b[], 
uint16_t numSamples, uint16_t jiffies)
{
  return FAIL;
}

# 138 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t AdcStreamP__SingleChannel__configureMultiple(uint8_t arg_0x1084a1b90, const msp430adc12_channel_config_t * config, uint16_t * buffer, uint16_t numSamples, uint16_t jiffies){
#line 138
  unsigned char __nesc_result;
#line 138

#line 138
  switch (arg_0x1084a1b90) {
#line 138
    case /*SenseC.LightC.AdcReadStreamClientC*/AdcReadStreamClientC__0__RSCLIENT:
#line 138
      __nesc_result = Msp430Adc12ImplP__SingleChannel__configureMultiple(/*SenseC.LightC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1__ID, config, buffer, numSamples, jiffies);
#line 138
      break;
#line 138
    default:
#line 138
      __nesc_result = AdcStreamP__SingleChannel__default__configureMultiple(arg_0x1084a1b90, config, buffer, numSamples, jiffies);
#line 138
      break;
#line 138
    }
#line 138

#line 138
  return __nesc_result;
#line 138
}
#line 138
# 96 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
static inline error_t AdcStreamP__postBuffer(uint8_t c, uint16_t *buf, uint16_t n)
{
  if (n < sizeof(struct AdcStreamP__list_entry_t )) {
    return ESIZE;
    }
#line 100
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      struct AdcStreamP__list_entry_t * newEntry = (struct AdcStreamP__list_entry_t * )buf;

      if (!AdcStreamP__bufferQueueEnd[c]) 
        {
          unsigned char __nesc_temp = 
#line 105
          FAIL;

          {
#line 105
            __nesc_atomic_end(__nesc_atomic); 
#line 105
            return __nesc_temp;
          }
        }
#line 107
      newEntry->count = n;
      newEntry->next = (void *)0;
      *AdcStreamP__bufferQueueEnd[c] = newEntry;
      AdcStreamP__bufferQueueEnd[c] = & newEntry->next;
    }
#line 111
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t AdcStreamP__readStreamFail__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(AdcStreamP__readStreamFail);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 191 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
static inline error_t AdcP__SingleChannel__default__configureSingle(uint8_t client, 
const msp430adc12_channel_config_t *config)
#line 192
{
#line 192
  return FAIL;
}

# 84 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t AdcP__SingleChannel__configureSingle(uint8_t arg_0x1081f8910, const msp430adc12_channel_config_t * config){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  switch (arg_0x1081f8910) {
#line 84
    case /*SenseC.LightC.AdcReadClientC*/AdcReadClientC__0__CLIENT:
#line 84
      __nesc_result = Msp430Adc12ImplP__SingleChannel__configureSingle(/*SenseC.LightC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID, config);
#line 84
      break;
#line 84
    default:
#line 84
      __nesc_result = AdcP__SingleChannel__default__configureSingle(arg_0x1081f8910, config);
#line 84
      break;
#line 84
    }
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 186 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
static inline const msp430adc12_channel_config_t *
AdcP__Config__default__getConfiguration(uint8_t client)
{
  return &AdcP__defaultConfig;
}

# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
inline static AdcP__Config__adc_config_t AdcP__Config__getConfiguration(uint8_t arg_0x10820ae28){
#line 58
  struct __nesc_unnamed4297 const *__nesc_result;
#line 58

#line 58
  switch (arg_0x10820ae28) {
#line 58
    case /*SenseC.LightC.AdcReadClientC*/AdcReadClientC__0__CLIENT:
#line 58
      __nesc_result = HamamatsuS1087ParP__AdcConfigure__getConfiguration();
#line 58
      break;
#line 58
    default:
#line 58
      __nesc_result = AdcP__Config__default__getConfiguration(arg_0x10820ae28);
#line 58
      break;
#line 58
    }
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
static inline error_t AdcP__configure(uint8_t client)
{
  error_t result = EINVAL;
  const msp430adc12_channel_config_t * config;

#line 69
  config = AdcP__Config__getConfiguration(client);
  if (config->inch != INPUT_CHANNEL_NONE) {
    result = AdcP__SingleChannel__configureSingle(client, config);
    }
#line 72
  return result;
}

#line 180
static inline error_t AdcP__SingleChannel__default__getData(uint8_t client)
{
  return EINVAL;
}

# 189 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t AdcP__SingleChannel__getData(uint8_t arg_0x1081f8910){
#line 189
  unsigned char __nesc_result;
#line 189

#line 189
  switch (arg_0x1081f8910) {
#line 189
    case /*SenseC.LightC.AdcReadClientC*/AdcReadClientC__0__CLIENT:
#line 189
      __nesc_result = Msp430Adc12ImplP__SingleChannel__getData(/*SenseC.LightC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID);
#line 189
      break;
#line 189
    default:
#line 189
      __nesc_result = AdcP__SingleChannel__default__getData(arg_0x1081f8910);
#line 189
      break;
#line 189
    }
#line 189

#line 189
  return __nesc_result;
#line 189
}
#line 189
# 165 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__default__granted(uint8_t id)
#line 165
{
}

# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(uint8_t arg_0x1083749b0){
#line 102
  switch (arg_0x1083749b0) {
#line 102
    case /*SenseC.LightC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID:
#line 102
      Msp430RefVoltArbiterImplP__AdcResource__granted(/*SenseC.LightC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID);
#line 102
      break;
#line 102
    case /*SenseC.LightC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1__ID:
#line 102
      Msp430RefVoltArbiterImplP__AdcResource__granted(/*SenseC.LightC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1__ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__default__granted(arg_0x1083749b0);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 171 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 171
{
}

# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x108371220){
#line 59
    /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(arg_0x108371220);
#line 59
}
#line 59
# 155 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void )
#line 155
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 156
    {
      /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId;
      /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY;
    }
#line 159
    __nesc_atomic_end(__nesc_atomic); }
  /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
  /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
}

# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
inline static /*SenseC.LightC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfUp__adc_config_t /*SenseC.LightC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfUp__getConfiguration(void ){
#line 58
  struct __nesc_unnamed4297 const *__nesc_result;
#line 58

#line 58
  __nesc_result = HamamatsuS1087ParP__AdcConfigure__getConfiguration();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 47 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ConfAlertC.nc"
static inline const msp430adc12_channel_config_t */*SenseC.LightC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfSub__getConfiguration(void )
{
  return /*SenseC.LightC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfUp__getConfiguration();
}

# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
inline static /*SenseC.LightC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfUp__adc_config_t /*SenseC.LightC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfUp__getConfiguration(void ){
#line 58
  struct __nesc_unnamed4297 const *__nesc_result;
#line 58

#line 58
  __nesc_result = HamamatsuS1087ParP__AdcConfigure__getConfiguration();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 47 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ConfAlertC.nc"
static inline const msp430adc12_channel_config_t */*SenseC.LightC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfSub__getConfiguration(void )
{
  return /*SenseC.LightC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfUp__getConfiguration();
}

# 172 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline const msp430adc12_channel_config_t *
Msp430RefVoltArbiterImplP__Config__default__getConfiguration(uint8_t client)
{
  return &Msp430RefVoltArbiterImplP__defaultConfig;
}

# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AdcConfigure.nc"
inline static Msp430RefVoltArbiterImplP__Config__adc_config_t Msp430RefVoltArbiterImplP__Config__getConfiguration(uint8_t arg_0x10842ce08){
#line 58
  struct __nesc_unnamed4297 const *__nesc_result;
#line 58

#line 58
  switch (arg_0x10842ce08) {
#line 58
    case /*SenseC.LightC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID:
#line 58
      __nesc_result = /*SenseC.LightC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfSub__getConfiguration();
#line 58
      break;
#line 58
    case /*SenseC.LightC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1__ID:
#line 58
      __nesc_result = /*SenseC.LightC.AdcReadStreamClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfSub__getConfiguration();
#line 58
      break;
#line 58
    default:
#line 58
      __nesc_result = Msp430RefVoltArbiterImplP__Config__default__getConfiguration(arg_0x10842ce08);
#line 58
      break;
#line 58
    }
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 167 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 167
{
}

# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(uint8_t arg_0x108373c80){
#line 53
    /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(arg_0x108373c80);
#line 53
}
#line 53
# 97 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id)
#line 97
{
  /* atomic removed: atomic calls only */
#line 98
  {
    if (!/*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(id)) {
        /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] |= 1 << id % 8;
        {
          unsigned char __nesc_temp = 
#line 101
          SUCCESS;

#line 101
          return __nesc_temp;
        }
      }
#line 103
    {
      unsigned char __nesc_temp = 
#line 103
      EBUSY;

#line 103
      return __nesc_temp;
    }
  }
}

# 79 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline error_t Msp430RefVoltGeneratorP__RefVolt_1_5V__start(void )
#line 78
{
  return Msp430RefVoltGeneratorP__start(Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE);
}

# 104 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t Msp430RefVoltArbiterImplP__RefVolt_1_5V__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = Msp430RefVoltGeneratorP__RefVolt_1_5V__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 73 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void Msp430RefVoltGeneratorP__SwitchOnTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(4U, dt);
#line 73
}
#line 73





inline static void Msp430RefVoltGeneratorP__SwitchOffTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(5U);
#line 78
}
#line 78
# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline error_t Msp430RefVoltGeneratorP__RefVolt_2_5V__start(void )
#line 82
{
  return Msp430RefVoltGeneratorP__start(Msp430RefVoltGeneratorP__REFERENCE_2_5V_STABLE);
}

# 104 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t Msp430RefVoltArbiterImplP__RefVolt_2_5V__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = Msp430RefVoltGeneratorP__RefVolt_2_5V__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 171 "SenseP.nc"
static inline void SenseP__Light__readDone(error_t error, uint16_t data)
{
  SenseP__light = data;
}

# 172 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
static inline void AdcP__Read__default__readDone(uint8_t client, error_t result, uint16_t val)
#line 172
{
}

# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Read.nc"
inline static void AdcP__Read__readDone(uint8_t arg_0x1082158a8, error_t result, AdcP__Read__val_t val){
#line 63
  switch (arg_0x1082158a8) {
#line 63
    case /*SenseC.LightC.AdcReadClientC*/AdcReadClientC__0__CLIENT:
#line 63
      SenseP__Light__readDone(result, val);
#line 63
      break;
#line 63
    default:
#line 63
      AdcP__Read__default__readDone(arg_0x1082158a8, result, val);
#line 63
      break;
#line 63
    }
#line 63
}
#line 63
# 170 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
static inline error_t AdcP__ResourceRead__default__release(uint8_t client)
#line 170
{
#line 170
  return FAIL;
}

# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t AdcP__ResourceRead__release(uint8_t arg_0x10820c548){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x10820c548) {
#line 120
    case /*SenseC.LightC.AdcReadClientC*/AdcReadClientC__0__CLIENT:
#line 120
      __nesc_result = Msp430RefVoltArbiterImplP__ClientResource__release(/*SenseC.LightC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = AdcP__ResourceRead__default__release(arg_0x10820c548);
#line 120
      break;
#line 120
    }
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 136 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
static inline void AdcP__readDone__runTask(void )
{
  AdcP__ResourceRead__release(AdcP__owner);
  AdcP__Read__readDone(AdcP__owner, SUCCESS, AdcP__value);
}

# 104 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__SplitControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = HplSensirionSht11P__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 94 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
static inline error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__StdControl__default__start(void )
#line 94
{
  return SUCCESS;
}

# 95 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__StdControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__StdControl__default__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 73 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
static inline void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__startTask__runTask(void )
#line 73
{
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__StdControl__start();
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__SplitControl__start();
}

# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P17*/HplMsp430GeneralIOP__7__IO__makeOutput(void )
#line 63
{
#line 63
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 63
    * (volatile uint8_t * )34U |= 0x01 << 7;
#line 63
    __nesc_atomic_end(__nesc_atomic); }
}

# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplSensirionSht11C.PWRM*/Msp430GpioC__12__HplGeneralIO__makeOutput(void ){
#line 82
  /*HplMsp430GeneralIOC.P17*/HplMsp430GeneralIOP__7__IO__makeOutput();
#line 82
}
#line 82
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplSensirionSht11C.PWRM*/Msp430GpioC__12__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*HplSensirionSht11C.PWRM*/Msp430GpioC__12__HplGeneralIO__makeOutput();
}

# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplSensirionSht11P__PWR__makeOutput(void ){
#line 46
  /*HplSensirionSht11C.PWRM*/Msp430GpioC__12__GeneralIO__makeOutput();
#line 46
}
#line 46
# 56 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P17*/HplMsp430GeneralIOP__7__IO__set(void )
#line 56
{
#line 56
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    * (volatile uint8_t * )33U |= 0x01 << 7;
#line 56
    __nesc_atomic_end(__nesc_atomic); }
}

# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplSensirionSht11C.PWRM*/Msp430GpioC__12__HplGeneralIO__set(void ){
#line 45
  /*HplMsp430GeneralIOC.P17*/HplMsp430GeneralIOP__7__IO__set();
#line 45
}
#line 45
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplSensirionSht11C.PWRM*/Msp430GpioC__12__GeneralIO__set(void )
#line 48
{
#line 48
  /*HplSensirionSht11C.PWRM*/Msp430GpioC__12__HplGeneralIO__set();
}

# 40 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplSensirionSht11P__PWR__set(void ){
#line 40
  /*HplSensirionSht11C.PWRM*/Msp430GpioC__12__GeneralIO__set();
#line 40
}
#line 40
# 73 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void HplSensirionSht11P__Timer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(2U, dt);
#line 73
}
#line 73
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t HplSensirionSht11P__stopTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(HplSensirionSht11P__stopTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 57 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P17*/HplMsp430GeneralIOP__7__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )33U &= ~(0x01 << 7);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 50 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplSensirionSht11C.PWRM*/Msp430GpioC__12__HplGeneralIO__clr(void ){
#line 50
  /*HplMsp430GeneralIOC.P17*/HplMsp430GeneralIOP__7__IO__clr();
#line 50
}
#line 50
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplSensirionSht11C.PWRM*/Msp430GpioC__12__GeneralIO__clr(void )
#line 49
{
#line 49
  /*HplSensirionSht11C.PWRM*/Msp430GpioC__12__HplGeneralIO__clr();
}

# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplSensirionSht11P__PWR__clr(void ){
#line 41
  /*HplSensirionSht11C.PWRM*/Msp430GpioC__12__GeneralIO__clr();
#line 41
}
#line 41
# 50 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__HplGeneralIO__clr(void ){
#line 50
  /*HplMsp430GeneralIOC.P15*/HplMsp430GeneralIOP__5__IO__clr();
#line 50
}
#line 50
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__GeneralIO__clr(void )
#line 49
{
#line 49
  /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__HplGeneralIO__clr();
}

# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplSensirionSht11P__DATA__clr(void ){
#line 41
  /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__GeneralIO__clr();
#line 41
}
#line 41
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__HplGeneralIO__makeInput(void ){
#line 75
  /*HplMsp430GeneralIOC.P15*/HplMsp430GeneralIOP__5__IO__makeInput();
#line 75
}
#line 75
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__GeneralIO__makeInput(void )
#line 52
{
#line 52
  /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__HplGeneralIO__makeInput();
}

# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplSensirionSht11P__DATA__makeInput(void ){
#line 44
  /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__GeneralIO__makeInput();
#line 44
}
#line 44
# 50 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__HplGeneralIO__clr(void ){
#line 50
  /*HplMsp430GeneralIOC.P16*/HplMsp430GeneralIOP__6__IO__clr();
#line 50
}
#line 50
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__GeneralIO__clr(void )
#line 49
{
#line 49
  /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__HplGeneralIO__clr();
}

# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplSensirionSht11P__SCK__clr(void ){
#line 41
  /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__GeneralIO__clr();
#line 41
}
#line 41
# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P16*/HplMsp430GeneralIOP__6__IO__makeInput(void )
#line 61
{
#line 61
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 61
    * (volatile uint8_t * )34U &= ~(0x01 << 6);
#line 61
    __nesc_atomic_end(__nesc_atomic); }
}

# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__HplGeneralIO__makeInput(void ){
#line 75
  /*HplMsp430GeneralIOC.P16*/HplMsp430GeneralIOP__6__IO__makeInput();
#line 75
}
#line 75
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__GeneralIO__makeInput(void )
#line 52
{
#line 52
  /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__HplGeneralIO__makeInput();
}

# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplSensirionSht11P__SCK__makeInput(void ){
#line 44
  /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__GeneralIO__makeInput();
#line 44
}
#line 44
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/platforms/telosa/chips/sht11/HplSensirionSht11P.nc"
static inline error_t HplSensirionSht11P__SplitControl__stop(void )
#line 63
{
  HplSensirionSht11P__SCK__makeInput();
  HplSensirionSht11P__SCK__clr();
  HplSensirionSht11P__DATA__makeInput();
  HplSensirionSht11P__DATA__clr();
  HplSensirionSht11P__PWR__clr();
  HplSensirionSht11P__stopTask__postTask();
  return SUCCESS;
}

# 130 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__SplitControl__stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = HplSensirionSht11P__SplitControl__stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 123 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
static inline error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__StdControl__default__stop(void )
#line 123
{
  return SUCCESS;
}

# 105 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__StdControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__StdControl__default__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 131 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
static inline void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__PowerDownCleanup__default__cleanup(void )
#line 131
{
}

# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
inline static void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__PowerDownCleanup__cleanup(void ){
#line 62
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__PowerDownCleanup__default__cleanup();
#line 62
}
#line 62
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
static inline void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__stopTask__runTask(void )
#line 78
{
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__PowerDownCleanup__cleanup();
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__StdControl__stop();
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__SplitControl__stop();
}

# 161 "SenseP.nc"
static inline void SenseP__Temperature__readDone(error_t error, uint16_t data)
{
  SenseP__temperature = data;
}

# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Read.nc"
inline static void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Temperature__readDone(error_t result, /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Temperature__val_t val){
#line 63
  SenseP__Temperature__readDone(result, val);
#line 63
}
#line 63
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__TempResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__Resource__release(/*SenseC.SHT11C*/SensirionSht11C__0__TEMP_KEY);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 113 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
static inline error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__measureTemperature(uint8_t client)
#line 113
{
  if (!/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__on) {
#line 114
      return EOFF;
    }
#line 115
  if (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__busy) {
#line 115
      return EBUSY;
    }
  else 
#line 115
    {
#line 115
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__busy = TRUE;
    }
#line 116
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__cmd = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CMD_MEASURE_TEMPERATURE;
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__currentClient = client;
  return /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__performCommand();
}

# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11.nc"
inline static error_t /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Temp__measureTemperature(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__measureTemperature(/*SenseC.SHT11C*/SensirionSht11C__0__TEMP_KEY);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11ReaderP.nc"
static inline void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__TempResource__granted(void )
#line 65
{
  error_t result;

#line 67
  if ((result = /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Temp__measureTemperature()) != SUCCESS) {
      /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__TempResource__release();
      /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Temperature__readDone(result, 0);
    }
}

# 166 "SenseP.nc"
static inline void SenseP__Humidity__readDone(error_t error, uint16_t data)
{
  SenseP__humidity = data;
}

# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Read.nc"
inline static void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Humidity__readDone(error_t result, /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Humidity__val_t val){
#line 63
  SenseP__Humidity__readDone(result, val);
#line 63
}
#line 63
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__HumResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__Resource__release(/*SenseC.SHT11C*/SensirionSht11C__0__HUM_KEY);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 121 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
static inline error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__measureHumidity(uint8_t client)
#line 121
{
  if (!/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__on) {
#line 122
      return EOFF;
    }
#line 123
  if (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__busy) {
#line 123
      return EBUSY;
    }
  else 
#line 123
    {
#line 123
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__busy = TRUE;
    }
#line 124
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__cmd = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CMD_MEASURE_HUMIDITY;
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__currentClient = client;
  return /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__performCommand();
}

# 76 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11.nc"
inline static error_t /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Hum__measureHumidity(void ){
#line 76
  unsigned char __nesc_result;
#line 76

#line 76
  __nesc_result = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__measureHumidity(/*SenseC.SHT11C*/SensirionSht11C__0__HUM_KEY);
#line 76

#line 76
  return __nesc_result;
#line 76
}
#line 76
# 85 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11ReaderP.nc"
static inline void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__HumResource__granted(void )
#line 85
{
  error_t result;

#line 87
  if ((result = /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Hum__measureHumidity()) != SUCCESS) {
      /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__HumResource__release();
      /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Humidity__readDone(result, 0);
    }
}

# 202 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__Resource__granted(uint8_t arg_0x107a77658){
#line 102
  switch (arg_0x107a77658) {
#line 102
    case /*SenseC.SHT11C*/SensirionSht11C__0__TEMP_KEY:
#line 102
      /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__TempResource__granted();
#line 102
      break;
#line 102
    case /*SenseC.SHT11C*/SensirionSht11C__0__HUM_KEY:
#line 102
      /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__HumResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__Resource__default__granted(arg_0x107a77658);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 216 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__configure(uint8_t arg_0x107a739b8){
#line 59
    /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(arg_0x107a739b8);
#line 59
}
#line 59
# 190 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__resId = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__reqResId;
      /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__state = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__configure(/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__resId);
  /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__Resource__granted(/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__resId);
}

# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__InterruptDATA__disable(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__Interrupt__disable();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__HplGeneralIO__set(void ){
#line 45
  /*HplMsp430GeneralIOC.P15*/HplMsp430GeneralIOP__5__IO__set();
#line 45
}
#line 45
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__GeneralIO__set(void )
#line 48
{
#line 48
  /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__HplGeneralIO__set();
}

# 40 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__set(void ){
#line 40
  /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__GeneralIO__set();
#line 40
}
#line 40




inline static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__makeInput(void ){
#line 44
  /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__GeneralIO__makeInput();
#line 44
}
#line 44
#line 41
inline static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CLOCK__clr(void ){
#line 41
  /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__GeneralIO__clr();
#line 41
}
#line 41
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P16*/HplMsp430GeneralIOP__6__IO__makeOutput(void )
#line 63
{
#line 63
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 63
    * (volatile uint8_t * )34U |= 0x01 << 6;
#line 63
    __nesc_atomic_end(__nesc_atomic); }
}

# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__HplGeneralIO__makeOutput(void ){
#line 82
  /*HplMsp430GeneralIOC.P16*/HplMsp430GeneralIOP__6__IO__makeOutput();
#line 82
}
#line 82
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__HplGeneralIO__makeOutput();
}

# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CLOCK__makeOutput(void ){
#line 46
  /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__GeneralIO__makeOutput();
#line 46
}
#line 46
# 220 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__initPins(void )
#line 220
{
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CLOCK__makeOutput();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CLOCK__clr();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__makeInput();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__InterruptDATA__disable();
}

# 99 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port15__disable(void )
#line 99
{
#line 99
  P1IE &= ~(1 << 5);
}

# 47 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__HplInterrupt__disable(void ){
#line 47
  HplMsp430InterruptP__Port15__disable();
#line 47
}
#line 47
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__HplGeneralIO__set(void ){
#line 45
  /*HplMsp430GeneralIOC.P16*/HplMsp430GeneralIOP__6__IO__set();
#line 45
}
#line 45
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__GeneralIO__set(void )
#line 48
{
#line 48
  /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__HplGeneralIO__set();
}

# 40 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CLOCK__set(void ){
#line 40
  /*HplSensirionSht11C.SCKM*/Msp430GpioC__11__GeneralIO__set();
#line 40
}
#line 40
# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__HplGeneralIO__makeOutput(void ){
#line 82
  /*HplMsp430GeneralIOC.P15*/HplMsp430GeneralIOP__5__IO__makeOutput();
#line 82
}
#line 82
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__HplGeneralIO__makeOutput();
}

# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__makeOutput(void ){
#line 46
  /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__GeneralIO__makeOutput();
#line 46
}
#line 46
# 228 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__resetDevice(void )
#line 228
{
  uint8_t i;

#line 230
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__makeOutput();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CLOCK__clr();
  for (i = 0; i < 9; i++) {
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CLOCK__set();
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CLOCK__clr();
    }
}

# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__clr(void ){
#line 41
  /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__GeneralIO__clr();
#line 41
}
#line 41
# 239 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__transmissionStart(void )
#line 239
{
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__makeOutput();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CLOCK__clr();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CLOCK__set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__clr();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CLOCK__clr();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CLOCK__set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CLOCK__clr();
}

static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__sendCommand(uint8_t _cmd)
#line 251
{
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__writeByte(_cmd);
}

# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P15*/HplMsp430GeneralIOP__5__IO__getRaw(void )
#line 59
{
#line 59
  return * (volatile uint8_t * )32U & (0x01 << 5);
}

#line 60
static inline bool /*HplMsp430GeneralIOC.P15*/HplMsp430GeneralIOP__5__IO__get(void )
#line 60
{
#line 60
  return /*HplMsp430GeneralIOC.P15*/HplMsp430GeneralIOP__5__IO__getRaw() != 0;
}

# 70 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__HplGeneralIO__get(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*HplMsp430GeneralIOC.P15*/HplMsp430GeneralIOP__5__IO__get();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__HplGeneralIO__get();
}

# 43 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplSensirionSht11C.DATAM*/Msp430GpioC__10__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 91 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port15__enable(void )
#line 91
{
#line 91
  P1IE |= 1 << 5;
}

# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__HplInterrupt__enable(void ){
#line 42
  HplMsp430InterruptP__Port15__enable();
#line 42
}
#line 42
# 148 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port15__edge(bool l2h)
#line 148
{
  /* atomic removed: atomic calls only */
#line 149
  {
    if (l2h) {
#line 150
      P1IES &= ~(1 << 5);
      }
    else {
#line 151
      P1IES |= 1 << 5;
      }
  }
}

# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__HplInterrupt__edge(bool low_to_high){
#line 67
  HplMsp430InterruptP__Port15__edge(low_to_high);
#line 67
}
#line 67
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__enable(bool rising)
#line 52
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 53
    {
      /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__Interrupt__disable();
      /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__HplInterrupt__edge(rising);
      /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__HplInterrupt__enable();
    }
#line 57
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}





static inline error_t /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__Interrupt__enableFallingEdge(void )
#line 65
{
  return /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__enable(FALSE);
}

# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__InterruptDATA__enableFallingEdge(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__Interrupt__enableFallingEdge();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 372 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__ack(void )
#line 372
{
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__makeOutput();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__clr();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CLOCK__set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CLOCK__clr();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__makeInput();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__set();
}

# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__signalStatusDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__signalStatusDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 60 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__qHead == /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static bool /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 68 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__qHead != /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY) {
        uint8_t id = /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__qHead;

#line 72
        /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__qHead = /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__resQ[/*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__qHead];
        if (/*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__qHead == /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY) {
          /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__qTail = /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY;
          }
#line 75
        /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__resQ[id] = /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 218 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(uint8_t arg_0x107a739b8){
#line 65
    /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(arg_0x107a739b8);
#line 65
}
#line 65
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__stopTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__stopTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 107 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
static inline void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__granted(void )
#line 107
{
  /* atomic removed: atomic calls only */
#line 108
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__stopping = TRUE;
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__stopTask__postTask();
}

# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted(void ){
#line 46
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__granted();
#line 46
}
#line 46
# 112 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
static inline void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__SplitControl__stopDone(error_t error)
#line 112
{
  if (/*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__requested == TRUE) {
      /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__StdControl__start();
      /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__SplitControl__start();
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 117
    {
      /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__requested = FALSE;
      /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__stopping = FALSE;
    }
#line 120
    __nesc_atomic_end(__nesc_atomic); }
}

# 138 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void HplSensirionSht11P__SplitControl__stopDone(error_t error){
#line 138
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__SplitControl__stopDone(error);
#line 138
}
#line 138
# 73 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/platforms/telosa/chips/sht11/HplSensirionSht11P.nc"
static inline void HplSensirionSht11P__stopTask__runTask(void )
#line 73
{
  HplSensirionSht11P__SplitControl__stopDone(SUCCESS);
}

# 99 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11ReaderP.nc"
static inline void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Temp__measureHumidityDone(error_t result, uint16_t val)
#line 99
{
}

#line 93
static inline void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Hum__measureHumidityDone(error_t result, uint16_t val)
#line 93
{
  /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__HumResource__release();
  /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Humidity__readDone(result, val);
}

# 408 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__default__measureHumidityDone(uint8_t client, error_t result, uint16_t val)
#line 408
{
}

# 84 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11.nc"
inline static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__measureHumidityDone(uint8_t arg_0x1080cc350, error_t result, uint16_t val){
#line 84
  switch (arg_0x1080cc350) {
#line 84
    case /*SenseC.SHT11C*/SensirionSht11C__0__TEMP_KEY:
#line 84
      /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Temp__measureHumidityDone(result, val);
#line 84
      break;
#line 84
    case /*SenseC.SHT11C*/SensirionSht11C__0__HUM_KEY:
#line 84
      /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Hum__measureHumidityDone(result, val);
#line 84
      break;
#line 84
    default:
#line 84
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__default__measureHumidityDone(arg_0x1080cc350, result, val);
#line 84
      break;
#line 84
    }
#line 84
}
#line 84
# 73 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11ReaderP.nc"
static inline void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Temp__measureTemperatureDone(error_t result, uint16_t val)
#line 73
{
  /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__TempResource__release();
  /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Temperature__readDone(result, val);
}

#line 104
static inline void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Hum__measureTemperatureDone(error_t result, uint16_t val)
#line 104
{
}

# 407 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__default__measureTemperatureDone(uint8_t client, error_t result, uint16_t val)
#line 407
{
}

# 69 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11.nc"
inline static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__measureTemperatureDone(uint8_t arg_0x1080cc350, error_t result, uint16_t val){
#line 69
  switch (arg_0x1080cc350) {
#line 69
    case /*SenseC.SHT11C*/SensirionSht11C__0__TEMP_KEY:
#line 69
      /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Temp__measureTemperatureDone(result, val);
#line 69
      break;
#line 69
    case /*SenseC.SHT11C*/SensirionSht11C__0__HUM_KEY:
#line 69
      /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Hum__measureTemperatureDone(result, val);
#line 69
      break;
#line 69
    default:
#line 69
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__default__measureTemperatureDone(arg_0x1080cc350, result, val);
#line 69
      break;
#line 69
    }
#line 69
}
#line 69
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__Timer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(3U);
#line 78
}
#line 78
# 320 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__readSensor__runTask(void )
#line 320
{
  uint16_t data = 0;
  uint8_t crc = 0;

  if (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__busy == FALSE) {


      return;
    }

  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__Timer__stop();

  data = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__readByte() << 8;
  data |= /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__readByte();

  crc = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__readByte();

  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__endTransmission();

  switch (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__cmd) {
      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CMD_MEASURE_TEMPERATURE: 
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__busy = FALSE;
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__measureTemperatureDone(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__currentClient, SUCCESS, data);
      break;

      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CMD_MEASURE_HUMIDITY: 
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__busy = FALSE;
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__measureHumidityDone(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__currentClient, SUCCESS, data);
      break;

      default: 
        break;
    }
}

# 101 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11ReaderP.nc"
static inline void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Temp__writeStatusRegDone(error_t result)
#line 101
{
}



static inline void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Hum__writeStatusRegDone(error_t result)
#line 106
{
}

# 410 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__default__writeStatusRegDone(uint8_t client, error_t result)
#line 410
{
}

# 116 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11.nc"
inline static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__writeStatusRegDone(uint8_t arg_0x1080cc350, error_t result){
#line 116
  switch (arg_0x1080cc350) {
#line 116
    case /*SenseC.SHT11C*/SensirionSht11C__0__TEMP_KEY:
#line 116
      /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Temp__writeStatusRegDone(result);
#line 116
      break;
#line 116
    case /*SenseC.SHT11C*/SensirionSht11C__0__HUM_KEY:
#line 116
      /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Hum__writeStatusRegDone(result);
#line 116
      break;
#line 116
    default:
#line 116
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__default__writeStatusRegDone(arg_0x1080cc350, result);
#line 116
      break;
#line 116
    }
#line 116
}
#line 116
# 100 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11ReaderP.nc"
static inline void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Temp__readStatusRegDone(error_t result, uint8_t val)
#line 100
{
}



static inline void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Hum__readStatusRegDone(error_t result, uint8_t val)
#line 105
{
}

# 409 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__default__readStatusRegDone(uint8_t client, error_t result, uint8_t val)
#line 409
{
}

# 100 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11.nc"
inline static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__readStatusRegDone(uint8_t arg_0x1080cc350, error_t result, uint8_t val){
#line 100
  switch (arg_0x1080cc350) {
#line 100
    case /*SenseC.SHT11C*/SensirionSht11C__0__TEMP_KEY:
#line 100
      /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Temp__readStatusRegDone(result, val);
#line 100
      break;
#line 100
    case /*SenseC.SHT11C*/SensirionSht11C__0__HUM_KEY:
#line 100
      /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Hum__readStatusRegDone(result, val);
#line 100
      break;
#line 100
    default:
#line 100
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__default__readStatusRegDone(arg_0x1080cc350, result, val);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 388 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__signalStatusDone__runTask(void )
#line 388
{
  bool _writeFail = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__writeFail;

#line 390
  switch (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__cmd) {
      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CMD_READ_STATUS: 
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__busy = FALSE;
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__readStatusRegDone(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__currentClient, SUCCESS, /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__status);
      break;
      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CMD_WRITE_STATUS: 
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__busy = FALSE;
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__writeFail = FALSE;
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__writeStatusRegDone(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__currentClient, _writeFail ? FAIL : SUCCESS);
      break;
      default: 

        break;
    }
}

# 191 "SenseP.nc"
static inline void SenseP__SenseSend__sendDone(message_t *msg, error_t error)
{


  SenseP__busy = FALSE;
}

# 110 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*SenseC.SenseSender.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  SenseP__SenseSend__sendDone(msg, error);
#line 110
}
#line 110
# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*SenseC.SenseSender.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*SenseC.SenseSender.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(m, err);
}

# 110 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*SenseC.HopSender.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  SenseP__HopSend__sendDone(msg, error);
#line 110
}
#line 110
# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*SenseC.HopSender.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*SenseC.HopSender.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(m, err);
}

# 215 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
#line 215
{
}

# 100 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(uint8_t arg_0x107ffa5e8, message_t * msg, error_t error){
#line 100
  switch (arg_0x107ffa5e8) {
#line 100
    case 0U:
#line 100
      /*SenseC.SenseSender.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    case 1U:
#line 100
      /*SenseC.HopSender.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(arg_0x107ffa5e8, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 126 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void )
#line 126
{
  uint8_t i;
#line 127
  uint8_t j;
#line 127
  uint8_t mask;
#line 127
  uint8_t last;
  message_t *msg;

#line 129
  for (i = 0; i < 2 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

# 315 "/usr/local/Cellar/stow/2.2.0/repository/nesc-1.3.4/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 170 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline uint8_t CC2420CsmaP__Send__maxPayloadLength(void )
#line 170
{
  return 28;
}

# 112 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
inline static uint8_t UniqueSendP__SubSend__maxPayloadLength(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = CC2420CsmaP__Send__maxPayloadLength();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 95 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline uint8_t UniqueSendP__Send__maxPayloadLength(void )
#line 95
{
  return UniqueSendP__SubSend__maxPayloadLength();
}

# 112 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
inline static uint8_t CC2420TinyosNetworkP__SubSend__maxPayloadLength(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = UniqueSendP__Send__maxPayloadLength();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline uint8_t CC2420TinyosNetworkP__ActiveSend__maxPayloadLength(void )
#line 82
{
  return CC2420TinyosNetworkP__SubSend__maxPayloadLength();
}

static inline void *CC2420TinyosNetworkP__ActiveSend__getPayload(message_t *msg, uint8_t len)
#line 86
{
  if (len <= CC2420TinyosNetworkP__ActiveSend__maxPayloadLength()) {
      return msg->data;
    }
  else 
#line 89
    {
      return (void *)0;
    }
}

# 125 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
inline static void * CC2420ActiveMessageP__SubSend__getPayload(message_t * msg, uint8_t len){
#line 125
  void *__nesc_result;
#line 125

#line 125
  __nesc_result = CC2420TinyosNetworkP__ActiveSend__getPayload(msg, len);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 201 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void *CC2420ActiveMessageP__Packet__getPayload(message_t *msg, uint8_t len)
#line 201
{
  return CC2420ActiveMessageP__SubSend__getPayload(msg, len);
}

# 126 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void * SenseP__Packet__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = CC2420ActiveMessageP__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 48 "SenseP.nc"
static inline void SenseP__prepareSenseMsg(void )
#line 48
{
  SenseMsg *msg = (SenseMsg *)SenseP__Packet__getPayload(&SenseP__sensePkt, (void *)0);

#line 50
  __nesc_hton_uint16(msg->seqnum.nxdata, ++SenseP__seqnum);
  if (SenseP__seqnum == 0) {
#line 51
    __nesc_hton_uint16(msg->seqnum.nxdata, ++SenseP__seqnum);
    }
#line 52
  __nesc_hton_uint16(msg->nodeid.nxdata, TOS_NODE_ID);
  __nesc_hton_uint16(msg->temperature.nxdata, SenseP__temperature);
  __nesc_hton_uint16(msg->humidity.nxdata, SenseP__humidity);
  __nesc_hton_uint16(msg->light.nxdata, SenseP__light);
}

# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*SenseC.SenseSender.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(0U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 162 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*SenseC.SenseSender.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(message_t * amsg, am_id_t t){
#line 162
  CC2420ActiveMessageP__AMPacket__setType(amsg, t);
#line 162
}
#line 162
# 327 "/usr/local/Cellar/stow/2.2.0/repository/nesc-1.3.4/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 327
{
  uint8_t *base = target;

#line 329
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420ActiveMessageP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 144 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__AMPacket__setDestination(message_t *amsg, am_addr_t addr)
#line 144
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(amsg);

#line 146
  __nesc_hton_leuint16(header->dest.nxdata, addr);
}

# 103 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*SenseC.SenseSender.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 103
  CC2420ActiveMessageP__AMPacket__setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*SenseC.SenseSender.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*SenseC.SenseSender.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(msg, dest);
  /*SenseC.SenseSender.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(msg, 6);
  return /*SenseC.SenseSender.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(msg, len);
}

# 80 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t SenseP__SenseSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*SenseC.SenseSender.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 297 "/usr/local/Cellar/stow/2.2.0/repository/nesc-1.3.4/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_leuint8(void * target, uint8_t value)
#line 297
{
  uint8_t *base = target;

#line 299
  base[0] = value;
  return value;
}

# 193 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__Packet__setPayloadLength(message_t *msg, uint8_t len)
#line 193
{
  __nesc_hton_leuint8(CC2420ActiveMessageP__CC2420PacketBody__getHeader(msg)->length.nxdata, len + CC2420_SIZE);
}

# 94 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(message_t * msg, uint8_t len){
#line 94
  CC2420ActiveMessageP__Packet__setPayloadLength(msg, len);
#line 94
}
#line 94
# 112 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
inline static uint8_t CC2420ActiveMessageP__SubSend__maxPayloadLength(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = CC2420TinyosNetworkP__ActiveSend__maxPayloadLength();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 197 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline uint8_t CC2420ActiveMessageP__Packet__maxPayloadLength(void )
#line 197
{
  return CC2420ActiveMessageP__SubSend__maxPayloadLength();
}

# 287 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline uint16_t CC2420ControlP__CC2420Config__getPanAddr(void )
#line 287
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 288
    {
      unsigned int __nesc_temp = 
#line 288
      CC2420ControlP__m_pan;

      {
#line 288
        __nesc_atomic_end(__nesc_atomic); 
#line 288
        return __nesc_temp;
      }
    }
#line 290
    __nesc_atomic_end(__nesc_atomic); }
}

# 70 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static uint16_t CC2420ActiveMessageP__CC2420Config__getPanAddr(void ){
#line 70
  unsigned int __nesc_result;
#line 70

#line 70
  __nesc_result = CC2420ControlP__CC2420Config__getPanAddr();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static bool CC2420TinyosNetworkP__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 184 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP__Resource__immediateRequest(uint8_t id)
#line 184
{
  if (CC2420TinyosNetworkP__resource_owner == id) {
#line 185
    return EALREADY;
    }
  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      if (CC2420TinyosNetworkP__resource_owner == CC2420TinyosNetworkP__OWNER_NONE && CC2420TinyosNetworkP__Queue__isEmpty()) {
          CC2420TinyosNetworkP__resource_owner = id;
          return SUCCESS;
        }
      return FAIL;
    }
  else 
#line 193
    {
      CC2420TinyosNetworkP__resource_owner = id;
      return SUCCESS;
    }
}

# 97 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ActiveMessageP__RadioResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = CC2420TinyosNetworkP__Resource__immediateRequest(CC2420ActiveMessageC__CC2420_AM_SEND_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 286 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SendNotifier__default__aboutToSend(am_id_t amId, am_addr_t addr, message_t *msg)
#line 286
{
}

# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SendNotifier.nc"
inline static void CC2420ActiveMessageP__SendNotifier__aboutToSend(am_id_t arg_0x107f24258, am_addr_t dest, message_t * msg){
#line 59
    CC2420ActiveMessageP__SendNotifier__default__aboutToSend(arg_0x107f24258, dest, msg);
#line 59
}
#line 59
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t CC2420TinyosNetworkP__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = UniqueSendP__Send__send(msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 77 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Packet.nc"
inline static void CC2420TinyosNetworkP__CC2420Packet__setNetwork(message_t *p_msg, uint8_t networkId){
#line 77
  CC2420PacketP__CC2420Packet__setNetwork(p_msg, networkId);
#line 77
}
#line 77
# 73 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP__ActiveSend__send(message_t *msg, uint8_t len)
#line 73
{
  CC2420TinyosNetworkP__CC2420Packet__setNetwork(msg, 0x3f);
  return CC2420TinyosNetworkP__SubSend__send(msg, len);
}

# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t CC2420ActiveMessageP__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = CC2420TinyosNetworkP__ActiveSend__send(msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/State.nc"
inline static error_t UniqueSendP__State__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(2U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * UniqueSendP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 286 "/usr/local/Cellar/stow/2.2.0/repository/nesc-1.3.4/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

#line 303
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 303
{
#line 303
  __nesc_hton_uint8(target, value);
#line 303
  return value;
}

# 547 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__send(message_t * p_msg, bool cca)
#line 547
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 548
    {
      if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
          {
            unsigned char __nesc_temp = 
#line 550
            ECANCEL;

            {
#line 550
              __nesc_atomic_end(__nesc_atomic); 
#line 550
              return __nesc_temp;
            }
          }
        }
#line 553
      if (CC2420TransmitP__m_state != CC2420TransmitP__S_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 554
            FAIL;

            {
#line 554
              __nesc_atomic_end(__nesc_atomic); 
#line 554
              return __nesc_temp;
            }
          }
        }


      CC2420TransmitP__m_state = CC2420TransmitP__S_LOAD;
      CC2420TransmitP__m_cca = cca;
      CC2420TransmitP__m_msg = p_msg;
      CC2420TransmitP__totalCcaChecks = 0;
    }
#line 564
    __nesc_atomic_end(__nesc_atomic); }

  if (CC2420TransmitP__acquireSpiResource() == SUCCESS) {
      CC2420TransmitP__loadTXFIFO();
    }

  return SUCCESS;
}

#line 192
static inline error_t CC2420TransmitP__Send__send(message_t * p_msg, bool useCca)
#line 192
{
  return CC2420TransmitP__send(p_msg, useCca);
}

# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static error_t CC2420CsmaP__CC2420Transmit__send(message_t * p_msg, bool useCca){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420TransmitP__Send__send(p_msg, useCca);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 296 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__RadioBackoff__default__requestCca(am_id_t id, 
message_t *msg)
#line 297
{
}

# 95 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420ActiveMessageP__RadioBackoff__requestCca(am_id_t arg_0x107f24d60, message_t * msg){
#line 95
    CC2420ActiveMessageP__RadioBackoff__default__requestCca(arg_0x107f24d60, msg);
#line 95
}
#line 95
# 245 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SubBackoff__requestCca(message_t *msg)
#line 245
{

  CC2420ActiveMessageP__RadioBackoff__requestCca(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (size_t )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.nxdata), msg);
}

# 95 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__RadioBackoff__requestCca(message_t * msg){
#line 95
  CC2420ActiveMessageP__SubBackoff__requestCca(msg);
#line 95
}
#line 95
# 111 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/StateImplP.nc"
static inline void StateImplP__State__forceState(uint8_t id, uint8_t reqState)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    StateImplP__state[id] = reqState;
#line 112
    __nesc_atomic_end(__nesc_atomic); }
}

# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/State.nc"
inline static void CC2420CsmaP__SplitControlState__forceState(uint8_t reqState){
#line 51
  StateImplP__State__forceState(1U, reqState);
#line 51
}
#line 51
#line 66
inline static bool CC2420CsmaP__SplitControlState__isState(uint8_t myState){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = StateImplP__State__isState(1U, myState);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 47 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420CsmaP__CC2420PacketBody__getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *__nesc_result;
#line 47

#line 47
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
#line 42
inline static cc2420_header_t * CC2420CsmaP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 122 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline error_t CC2420CsmaP__Send__send(message_t *p_msg, uint8_t len)
#line 122
{
  unsigned char *__nesc_temp43;
  unsigned char *__nesc_temp42;
#line 124
  cc2420_header_t *header = CC2420CsmaP__CC2420PacketBody__getHeader(p_msg);
  cc2420_metadata_t *metadata = CC2420CsmaP__CC2420PacketBody__getMetadata(p_msg);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 127
    {
      if (!CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTED)) {
          {
            unsigned char __nesc_temp = 
#line 129
            FAIL;

            {
#line 129
              __nesc_atomic_end(__nesc_atomic); 
#line 129
              return __nesc_temp;
            }
          }
        }
#line 132
      CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_TRANSMITTING);
      CC2420CsmaP__m_msg = p_msg;
    }
#line 134
    __nesc_atomic_end(__nesc_atomic); }

  __nesc_hton_leuint8(header->length.nxdata, len + CC2420_SIZE);



  (__nesc_temp42 = header->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp42, __nesc_ntoh_leuint16(__nesc_temp42) & (1 << IEEE154_FCF_ACK_REQ)));

  (__nesc_temp43 = header->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp43, __nesc_ntoh_leuint16(__nesc_temp43) | ((((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE) | (
  1 << IEEE154_FCF_INTRAPAN)) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE)) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE))));

  __nesc_hton_int8(metadata->ack.nxdata, FALSE);
  __nesc_hton_uint8(metadata->rssi.nxdata, 0);
  __nesc_hton_uint8(metadata->lqi.nxdata, 0);

  __nesc_hton_uint32(metadata->timestamp.nxdata, CC2420_INVALID_TIMESTAMP);

  CC2420CsmaP__ccaOn = TRUE;
  CC2420CsmaP__RadioBackoff__requestCca(CC2420CsmaP__m_msg);

  CC2420CsmaP__CC2420Transmit__send(CC2420CsmaP__m_msg, CC2420CsmaP__ccaOn);
  return SUCCESS;
}

# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t UniqueSendP__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = CC2420CsmaP__Send__send(msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420TransmitP__TXCTRL__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_TXCTRL, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 70 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SpiPacket.nc"
inline static error_t CC2420SpiP__SpiPacket__send(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__send(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID, txBuf, rxBuf, len);
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SpiByte.nc"
inline static uint8_t CC2420SpiP__SpiByte__write(uint8_t tx){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiByte__write(tx);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 126 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/StateImplP.nc"
static inline bool StateImplP__State__isIdle(uint8_t id)
#line 126
{
  return StateImplP__State__isState(id, StateImplP__S_IDLE);
}

# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/State.nc"
inline static bool CC2420SpiP__WorkingState__isIdle(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = StateImplP__State__isIdle(0U);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 214 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP__Fifo__write(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 215
{

  uint8_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 219
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 221
            status;

            {
#line 221
              __nesc_atomic_end(__nesc_atomic); 
#line 221
              return __nesc_temp;
            }
          }
        }
    }
#line 225
    __nesc_atomic_end(__nesc_atomic); }
#line 225
  CC2420SpiP__m_addr = addr;

  status = CC2420SpiP__SpiByte__write(CC2420SpiP__m_addr);
  CC2420SpiP__SpiPacket__send(data, (void *)0, len);

  return status;
}

# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static cc2420_status_t CC2420TransmitP__TXFIFO__write(uint8_t * data, uint8_t length){
#line 82
  unsigned char __nesc_result;
#line 82

#line 82
  __nesc_result = CC2420SpiP__Fifo__write(CC2420_TXFIFO, data, length);
#line 82

#line 82
  return __nesc_result;
#line 82
}
#line 82
# 361 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__enableRxIntr(void )
#line 361
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 362
    {
      HplMsp430Usart0P__IFG1 &= ~(1 << 6);
      HplMsp430Usart0P__IE1 |= 1 << 6;
    }
#line 365
    __nesc_atomic_end(__nesc_atomic); }
}

# 180 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__enableRxIntr(void ){
#line 180
  HplMsp430Usart0P__Usart__enableRxIntr();
#line 180
}
#line 180
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 64 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[id] != /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY || /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 83
    {
      if (!/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(id)) {
          if (/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead == /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY) {
            /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead = id;
            }
          else {
#line 88
            /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail] = id;
            }
#line 89
          /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail = id;
          {
            unsigned char __nesc_temp = 
#line 90
            SUCCESS;

            {
#line 90
              __nesc_atomic_end(__nesc_atomic); 
#line 90
              return __nesc_temp;
            }
          }
        }
#line 92
      {
        unsigned char __nesc_temp = 
#line 92
        EBUSY;

        {
#line 92
          __nesc_atomic_end(__nesc_atomic); 
#line 92
          return __nesc_temp;
        }
      }
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
}

# 79 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static error_t CC2420TinyosNetworkP__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420TinyosNetworkP__grantTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420TinyosNetworkP__grantTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 167 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP__Resource__request(uint8_t id)
#line 167
{

  CC2420TinyosNetworkP__grantTask__postTask();

  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {

      return CC2420TinyosNetworkP__Queue__enqueue(id);
    }
  else 
#line 174
    {
      if (id == CC2420TinyosNetworkP__resource_owner) {
          return EALREADY;
        }
      else 
#line 177
        {
          CC2420TinyosNetworkP__next_owner = id;
          return SUCCESS;
        }
    }
}

# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ActiveMessageP__RadioResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420TinyosNetworkP__Resource__request(CC2420ActiveMessageC__CC2420_AM_SEND_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__toggle(void )
#line 58
{
  /* atomic removed: atomic calls only */
#line 58
  * (volatile uint8_t * )49U ^= 0x01 << 4;
}

# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__toggle(void ){
#line 55
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__toggle();
#line 55
}
#line 55
# 50 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__toggle(void )
#line 50
{
#line 50
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__toggle();
}

# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__toggle(void ){
#line 42
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__toggle();
#line 42
}
#line 42
# 84 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP__Leds__led0Toggle(void )
#line 84
{
  LedsP__Led0__toggle();
  ;
#line 86
  ;
}

# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void SenseP__Leds__led0Toggle(void ){
#line 67
  LedsP__Leds__led0Toggle();
#line 67
}
#line 67
# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__toggle(void )
#line 58
{
  /* atomic removed: atomic calls only */
#line 58
  * (volatile uint8_t * )49U ^= 0x01 << 5;
}

# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__toggle(void ){
#line 55
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__toggle();
#line 55
}
#line 55
# 50 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__toggle(void )
#line 50
{
#line 50
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__toggle();
}

# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__toggle(void ){
#line 42
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__toggle();
#line 42
}
#line 42
# 99 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1Toggle(void )
#line 99
{
  LedsP__Led1__toggle();
  ;
#line 101
  ;
}

# 83 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void SenseP__Leds__led1Toggle(void ){
#line 83
  LedsP__Leds__led1Toggle();
#line 83
}
#line 83
# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__toggle(void )
#line 58
{
  /* atomic removed: atomic calls only */
#line 58
  * (volatile uint8_t * )49U ^= 0x01 << 6;
}

# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__toggle(void ){
#line 55
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__toggle();
#line 55
}
#line 55
# 50 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__toggle(void )
#line 50
{
#line 50
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__toggle();
}

# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__toggle(void ){
#line 42
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__toggle();
#line 42
}
#line 42
# 114 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP__Leds__led2Toggle(void )
#line 114
{
  LedsP__Led2__toggle();
  ;
#line 116
  ;
}

# 100 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void SenseP__Leds__led2Toggle(void ){
#line 100
  LedsP__Leds__led2Toggle();
#line 100
}
#line 100
# 169 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void )
#line 169
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current, /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg, FAIL);
}

# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 80 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(am_id_t arg_0x107ff97d8, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = CC2420ActiveMessageP__AMSend__send(arg_0x107ff97d8, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 189 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline uint8_t CC2420ActiveMessageP__Packet__payloadLength(message_t *msg)
#line 189
{
  return __nesc_ntoh_leuint8(CC2420ActiveMessageP__CC2420PacketBody__getHeader(msg)->length.nxdata) - CC2420_SIZE;
}

# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = CC2420ActiveMessageP__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(message_t * amsg){
#line 78
  unsigned int __nesc_result;
#line 78

#line 78
  __nesc_result = CC2420ActiveMessageP__AMPacket__destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
#line 147
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = CC2420ActiveMessageP__AMPacket__type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void )
#line 65
{
  uint8_t i;

#line 67
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 2;
  for (i = 0; i < 2; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 2;
        }
      else {
          break;
        }
    }
  if (i >= 2) {
#line 78
    /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 2;
    }
}

#line 174
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void )
#line 174
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current < 2) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(nextMsg);

#line 182
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask();
        }
    }
}

# 198 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP__Resource__release(uint8_t id)
#line 198
{
  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      CC2420TinyosNetworkP__grantTask__postTask();
    }
  CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__OWNER_NONE;
  return SUCCESS;
}

#line 222
static inline void CC2420TinyosNetworkP__Resource__default__granted(uint8_t client)
#line 222
{
  CC2420TinyosNetworkP__Resource__release(client);
}

# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void CC2420TinyosNetworkP__Resource__granted(uint8_t arg_0x107e84550){
#line 102
  switch (arg_0x107e84550) {
#line 102
    case CC2420ActiveMessageC__CC2420_AM_SEND_ID:
#line 102
      CC2420ActiveMessageP__RadioResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      CC2420TinyosNetworkP__Resource__default__granted(arg_0x107e84550);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 68 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 68
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 69
    {
      if (/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead != /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY) {
          uint8_t id = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead;

#line 72
          /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead];
          if (/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead == /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY) {
            /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;
            }
#line 75
          /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[id] = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;
          {
            unsigned char __nesc_temp = 
#line 76
            id;

            {
#line 76
              __nesc_atomic_end(__nesc_atomic); 
#line 76
              return __nesc_temp;
            }
          }
        }
#line 78
      {
        unsigned char __nesc_temp = 
#line 78
        /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;

        {
#line 78
          __nesc_atomic_end(__nesc_atomic); 
#line 78
          return __nesc_temp;
        }
      }
    }
#line 81
    __nesc_atomic_end(__nesc_atomic); }
}

# 70 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t CC2420TinyosNetworkP__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 148 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP__grantTask__runTask(void )
#line 148
{


  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      if (CC2420TinyosNetworkP__resource_owner == CC2420TinyosNetworkP__OWNER_NONE && !CC2420TinyosNetworkP__Queue__isEmpty()) {
          CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__Queue__dequeue();

          if (CC2420TinyosNetworkP__resource_owner != CC2420TinyosNetworkP__OWNER_NONE) {
              CC2420TinyosNetworkP__Resource__granted(CC2420TinyosNetworkP__resource_owner);
            }
        }
    }
  else 
#line 159
    {
      if (CC2420TinyosNetworkP__next_owner != CC2420TinyosNetworkP__resource_owner) {
          CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__next_owner;
          CC2420TinyosNetworkP__Resource__granted(CC2420TinyosNetworkP__resource_owner);
        }
    }
}

#line 210
static inline message_t *CC2420TinyosNetworkP__BareReceive__default__receive(message_t *msg, void *payload, uint8_t len)
#line 210
{
  return msg;
}

# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * CC2420TinyosNetworkP__BareReceive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = CC2420TinyosNetworkP__BareReceive__default__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420TinyosNetworkP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 278 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline message_t *CC2420ActiveMessageP__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 278
{
  return msg;
}

# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * CC2420ActiveMessageP__Snoop__receive(am_id_t arg_0x107f27480, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = CC2420ActiveMessageP__Snoop__default__receive(arg_0x107f27480, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 310 "/usr/local/Cellar/stow/2.2.0/repository/nesc-1.3.4/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

# 108 "SenseP.nc"
static inline message_t *SenseP__SenseReceive__receive(message_t *msg, void *payload, uint8_t l)
#line 108
{
  if (l == sizeof(SenseMsg )) {
      SenseMsg *sense = (SenseMsg *)payload;

#line 111
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 111
        {
          if (__nesc_ntoh_uint16(sense->nodeid.nxdata) != SenseP__lastFirstHop && !SenseP__busy) {
              SenseP__sendPacket(msg);
            }
        }
#line 115
        __nesc_atomic_end(__nesc_atomic); }
    }

  return msg;
}

#line 120
static inline message_t *SenseP__HopReceive__receive(message_t *msg, void *payload, uint8_t l)
#line 120
{
  if (l == sizeof(HopMsg )) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 122
        {
          HopMsg *hop = (HopMsg *)payload;

#line 124
          if (__nesc_ntoh_uint16(hop->len.nxdata) + 1 < SenseP__len) {
              SenseP__len = __nesc_ntoh_uint16(hop->len.nxdata) + 1;
              SenseP__firstHop = __nesc_ntoh_uint16(hop->nodeid.nxdata);
            }
        }
#line 128
        __nesc_atomic_end(__nesc_atomic); }
    }


  return msg;
}

# 274 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline message_t *CC2420ActiveMessageP__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 274
{
  return msg;
}

# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * CC2420ActiveMessageP__Receive__receive(am_id_t arg_0x107f28908, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x107f28908) {
#line 78
    case 6:
#line 78
      __nesc_result = SenseP__SenseReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    case 7:
#line 78
      __nesc_result = SenseP__HopReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = CC2420ActiveMessageP__Receive__default__receive(arg_0x107f28908, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 72 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void )
#line 72
{
  return ActiveMessageAddressC__amAddress();
}

# 50 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t CC2420ActiveMessageP__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned int __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 130 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline am_addr_t CC2420ActiveMessageP__AMPacket__address(void )
#line 130
{
  return CC2420ActiveMessageP__ActiveMessageAddress__amAddress();
}

#line 154
static inline bool CC2420ActiveMessageP__AMPacket__isForMe(message_t *amsg)
#line 154
{
  return CC2420ActiveMessageP__AMPacket__destination(amsg) == CC2420ActiveMessageP__AMPacket__address() || 
  CC2420ActiveMessageP__AMPacket__destination(amsg) == AM_BROADCAST_ADDR;
}

#line 214
static inline message_t *CC2420ActiveMessageP__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 214
{

  if (CC2420ActiveMessageP__AMPacket__isForMe(msg)) {
      return CC2420ActiveMessageP__Receive__receive(CC2420ActiveMessageP__AMPacket__type(msg), msg, payload, len);
    }
  else {
      return CC2420ActiveMessageP__Snoop__receive(CC2420ActiveMessageP__AMPacket__type(msg), msg, payload, len);
    }
}

# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * CC2420TinyosNetworkP__ActiveReceive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = CC2420ActiveMessageP__SubReceive__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Packet.nc"
inline static uint8_t CC2420TinyosNetworkP__CC2420Packet__getNetwork(message_t *p_msg){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = CC2420PacketP__CC2420Packet__getNetwork(p_msg);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 47 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420TinyosNetworkP__CC2420PacketBody__getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *__nesc_result;
#line 47

#line 47
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 127 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline message_t *CC2420TinyosNetworkP__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 127
{

  if (! __nesc_ntoh_int8(CC2420TinyosNetworkP__CC2420PacketBody__getMetadata(msg)->crc.nxdata)) {
      return msg;
    }

  if (CC2420TinyosNetworkP__CC2420Packet__getNetwork(msg) == 0x3f) {
      return CC2420TinyosNetworkP__ActiveReceive__receive(msg, payload, len);
    }
  else 
#line 135
    {
      cc2420_header_t *hdr = CC2420TinyosNetworkP__CC2420PacketBody__getHeader(msg);

#line 137
      return CC2420TinyosNetworkP__BareReceive__receive(msg, & hdr->network, len + AM_OVERHEAD);
    }
}

# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * UniqueReceiveP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = CC2420TinyosNetworkP__SubReceive__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 137 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn)
#line 137
{
  uint8_t element = UniqueReceiveP__recycleSourceElement;
  bool increment = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 141
    {
      if (element == UniqueReceiveP__INVALID_ELEMENT || UniqueReceiveP__writeIndex == element) {

          element = UniqueReceiveP__writeIndex;
          increment = TRUE;
        }

      UniqueReceiveP__receivedMessages[element].source = msgSource;
      UniqueReceiveP__receivedMessages[element].dsn = msgDsn;
      if (increment) {
          UniqueReceiveP__writeIndex++;
          UniqueReceiveP__writeIndex %= 4;
        }
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}


static inline message_t *UniqueReceiveP__DuplicateReceive__default__receive(message_t *msg, void *payload, uint8_t len)
#line 158
{
  return msg;
}

# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * UniqueReceiveP__DuplicateReceive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = UniqueReceiveP__DuplicateReceive__default__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 111 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn)
#line 111
{
  int i;

#line 113
  UniqueReceiveP__recycleSourceElement = UniqueReceiveP__INVALID_ELEMENT;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 115
    {
      for (i = 0; i < 4; i++) {
          if (UniqueReceiveP__receivedMessages[i].source == msgSource) {
              if (UniqueReceiveP__receivedMessages[i].dsn == msgDsn) {

                  {
                    unsigned char __nesc_temp = 
#line 120
                    TRUE;

                    {
#line 120
                      __nesc_atomic_end(__nesc_atomic); 
#line 120
                      return __nesc_temp;
                    }
                  }
                }
#line 123
              UniqueReceiveP__recycleSourceElement = i;
            }
        }
    }
#line 126
    __nesc_atomic_end(__nesc_atomic); }

  return FALSE;
}

# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * UniqueReceiveP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 85 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline message_t *UniqueReceiveP__SubReceive__receive(message_t *msg, void *payload, 
uint8_t len)
#line 86
{
  uint16_t msgSource = __nesc_ntoh_leuint16(UniqueReceiveP__CC2420PacketBody__getHeader(msg)->src.nxdata);
  uint8_t msgDsn = __nesc_ntoh_leuint8(UniqueReceiveP__CC2420PacketBody__getHeader(msg)->dsn.nxdata);

  if (UniqueReceiveP__hasSeen(msgSource, msgDsn)) {
      return UniqueReceiveP__DuplicateReceive__receive(msg, payload, len);
    }
  else {
      UniqueReceiveP__insert(msgSource, msgDsn);
      return UniqueReceiveP__Receive__receive(msg, payload, len);
    }
}

# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * CC2420ReceiveP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = UniqueReceiveP__SubReceive__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 64 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static uint16_t CC2420ReceiveP__CC2420Config__getShortAddr(void ){
#line 64
  unsigned int __nesc_result;
#line 64

#line 64
  __nesc_result = CC2420ControlP__CC2420Config__getShortAddr();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 332 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP__CC2420Config__isAddressRecognitionEnabled(void )
#line 332
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 333
    {
      unsigned char __nesc_temp = 
#line 333
      CC2420ControlP__addressRecognition;

      {
#line 333
        __nesc_atomic_end(__nesc_atomic); 
#line 333
        return __nesc_temp;
      }
    }
#line 335
    __nesc_atomic_end(__nesc_atomic); }
}

# 86 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP__CC2420Config__isAddressRecognitionEnabled(void ){
#line 86
  unsigned char __nesc_result;
#line 86

#line 86
  __nesc_result = CC2420ControlP__CC2420Config__isAddressRecognitionEnabled();
#line 86

#line 86
  return __nesc_result;
#line 86
}
#line 86
# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420ReceiveP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 819 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline bool CC2420ReceiveP__passesAddressCheck(message_t *msg)
#line 819
{
  cc2420_header_t *header = CC2420ReceiveP__CC2420PacketBody__getHeader(msg);

  if (!CC2420ReceiveP__CC2420Config__isAddressRecognitionEnabled()) {
      return TRUE;
    }

  return __nesc_ntoh_leuint16(header->dest.nxdata) == CC2420ReceiveP__CC2420Config__getShortAddr()
   || __nesc_ntoh_leuint16(header->dest.nxdata) == AM_BROADCAST_ADDR;
}

# 47 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420ReceiveP__CC2420PacketBody__getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *__nesc_result;
#line 47

#line 47
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 671 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__receiveDone_task__runTask(void )
#line 671
{
  cc2420_metadata_t *metadata = CC2420ReceiveP__CC2420PacketBody__getMetadata(CC2420ReceiveP__m_p_rx_buf);
  cc2420_header_t *header = CC2420ReceiveP__CC2420PacketBody__getHeader(CC2420ReceiveP__m_p_rx_buf);
  uint8_t length = __nesc_ntoh_leuint8(header->length.nxdata);
  uint8_t tmpLen __attribute((unused))  = sizeof(message_t ) - ((size_t )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
  uint8_t * buf = (uint8_t * )header;

  __nesc_hton_int8(metadata->crc.nxdata, buf[length] >> 7);
  __nesc_hton_uint8(metadata->lqi.nxdata, buf[length] & 0x7f);
  __nesc_hton_uint8(metadata->rssi.nxdata, buf[length - 1]);

  if (CC2420ReceiveP__passesAddressCheck(CC2420ReceiveP__m_p_rx_buf) && length >= CC2420_SIZE) {
#line 696
      CC2420ReceiveP__m_p_rx_buf = CC2420ReceiveP__Receive__receive(CC2420ReceiveP__m_p_rx_buf, CC2420ReceiveP__m_p_rx_buf->data, 
      length - CC2420_SIZE);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 699
    CC2420ReceiveP__receivingPacket = FALSE;
#line 699
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ReceiveP__waitForNextPacket();
}

# 178 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline uint8_t CC2420SpiP__Resource__isOwner(uint8_t id)
#line 178
{
  /* atomic removed: atomic calls only */
#line 179
  {
    unsigned char __nesc_temp = 
#line 179
    CC2420SpiP__m_holder == id;

#line 179
    return __nesc_temp;
  }
}

# 128 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static bool CC2420ReceiveP__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = CC2420SpiP__Resource__isOwner(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
#line 97
inline static error_t CC2420ReceiveP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = CC2420SpiP__Resource__immediateRequest(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
#line 88
inline static error_t CC2420ReceiveP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420SpiP__grant__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420SpiP__grant);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 184 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__SpiResource__granted(void )
#line 184
{
  CC2420SpiP__grant__postTask();
}

# 181 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__default__granted(uint8_t id)
#line 181
{
}

# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__granted(uint8_t arg_0x1078d6648){
#line 102
  switch (arg_0x1078d6648) {
#line 102
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 102
      CC2420SpiP__SpiResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__default__granted(arg_0x1078d6648);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 130 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__granted(uint8_t id)
#line 130
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__granted(id);
}

# 202 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x107a77658){
#line 102
  switch (arg_0x107a77658) {
#line 102
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 102
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__granted(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(arg_0x107a77658);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 190 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId;
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
}

# 252 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__default__sendDone(uint8_t id, uint8_t *tx_buf, uint8_t *rx_buf, uint16_t len, error_t error)
#line 252
{
}

# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SpiPacket.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__sendDone(uint8_t arg_0x1078d37d8, uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 82
  switch (arg_0x1078d37d8) {
#line 82
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 82
      CC2420SpiP__SpiPacket__sendDone(txBuf, rxBuf, len, error);
#line 82
      break;
#line 82
    default:
#line 82
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__default__sendDone(arg_0x1078d37d8, txBuf, rxBuf, len, error);
#line 82
      break;
#line 82
    }
#line 82
}
#line 82
# 245 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone(void )
#line 245
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__sendDone(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_client, /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf, /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf, /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len, 
  SUCCESS);
}

#line 228
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__runTask(void )
#line 228
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 229
    /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone();
#line 229
    __nesc_atomic_end(__nesc_atomic); }
}

# 486 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__TXFIFO__readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 487
{
}

# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ReceiveP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 40 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP__CSN__set(void ){
#line 40
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set();
#line 40
}
#line 40
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ReceiveP__receiveDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420ReceiveP__receiveDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 47 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420TransmitP__CC2420PacketBody__getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *__nesc_result;
#line 47

#line 47
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 389 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t *ack_msg)
#line 389
{
  cc2420_header_t *ack_header;
  cc2420_header_t *msg_header;
  cc2420_metadata_t *msg_metadata;
  uint8_t *ack_buf;
  uint8_t length;

  if (type == IEEE154_TYPE_ACK && CC2420TransmitP__m_msg) {
      ack_header = CC2420TransmitP__CC2420PacketBody__getHeader(ack_msg);
      msg_header = CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg);

      if (CC2420TransmitP__m_state == CC2420TransmitP__S_ACK_WAIT && __nesc_ntoh_leuint8(msg_header->dsn.nxdata) == __nesc_ntoh_leuint8(ack_header->dsn.nxdata)) {
          CC2420TransmitP__BackoffTimer__stop();

          msg_metadata = CC2420TransmitP__CC2420PacketBody__getMetadata(CC2420TransmitP__m_msg);
          ack_buf = (uint8_t *)ack_header;
          length = __nesc_ntoh_leuint8(ack_header->length.nxdata);

          __nesc_hton_int8(msg_metadata->ack.nxdata, TRUE);
          __nesc_hton_uint8(msg_metadata->rssi.nxdata, ack_buf[length - 1]);
          __nesc_hton_uint8(msg_metadata->lqi.nxdata, ack_buf[length] & 0x7f);
          CC2420TransmitP__signalDone(SUCCESS);
        }
    }
}

# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420ReceiveP__CC2420Receive__receive(uint8_t type, message_t * message){
#line 63
  CC2420TransmitP__CC2420Receive__receive(type, message);
#line 63
}
#line 63
# 70 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420ReceiveP__PacketTimeStamp__clear(message_t * msg){
#line 70
  CC2420PacketP__PacketTimeStamp32khz__clear(msg);
#line 70
}
#line 70








inline static void CC2420ReceiveP__PacketTimeStamp__set(message_t * msg, CC2420ReceiveP__PacketTimeStamp__size_type value){
#line 78
  CC2420PacketP__PacketTimeStamp32khz__set(msg, value);
#line 78
}
#line 78
# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__getRaw(void )
#line 59
{
#line 59
  return * (volatile uint8_t * )32U & (0x01 << 0);
}

#line 60
static inline bool /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__get(void )
#line 60
{
#line 60
  return /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__getRaw() != 0;
}

# 70 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__HplGeneralIO__get(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__get();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__HplGeneralIO__get();
}

# 43 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP__FIFOP__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__getRaw(void )
#line 59
{
#line 59
  return * (volatile uint8_t * )32U & (0x01 << 3);
}

#line 60
static inline bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__get(void )
#line 60
{
#line 60
  return /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__getRaw() != 0;
}

# 70 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__HplGeneralIO__get(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__get();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__HplGeneralIO__get();
}

# 43 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP__FIFO__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 209 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP__Fifo__continueRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 210
{
  return CC2420SpiP__SpiPacket__send((void *)0, data, len);
}

# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static error_t CC2420ReceiveP__RXFIFO__continueRead(uint8_t * data, uint8_t length){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = CC2420SpiP__Fifo__continueRead(CC2420_RXFIFO, data, length);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
#line 51
inline static cc2420_status_t CC2420ReceiveP__RXFIFO__beginRead(uint8_t * data, uint8_t length){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420SpiP__Fifo__beginRead(CC2420_RXFIFO, data, length);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP__CSN__clr(void ){
#line 41
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr();
#line 41
}
#line 41
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ReceiveP__SACK__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SACK);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 359 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP__CC2420Config__isHwAutoAckDefault(void )
#line 359
{
  /* atomic removed: atomic calls only */
#line 360
  {
    unsigned char __nesc_temp = 
#line 360
    CC2420ControlP__hwAutoAckDefault;

#line 360
    return __nesc_temp;
  }
}

# 105 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP__CC2420Config__isHwAutoAckDefault(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = CC2420ControlP__CC2420Config__isHwAutoAckDefault();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 366 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void )
#line 366
{
  /* atomic removed: atomic calls only */
#line 367
  {
    unsigned char __nesc_temp = 
#line 367
    CC2420ControlP__autoAckEnabled;

#line 367
    return __nesc_temp;
  }
}

# 110 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP__CC2420Config__isAutoAckEnabled(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420ControlP__CC2420Config__isAutoAckEnabled();
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 525 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__RXFIFO__readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error)
#line 526
{
  cc2420_header_t *header = CC2420ReceiveP__CC2420PacketBody__getHeader(CC2420ReceiveP__m_p_rx_buf);
  uint8_t tmpLen __attribute((unused))  = sizeof(message_t ) - ((size_t )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
  uint8_t * buf = (uint8_t * )header;

#line 530
  CC2420ReceiveP__rxFrameLength = buf[0];

  switch (CC2420ReceiveP__m_state) {

      case CC2420ReceiveP__S_RX_LENGTH: 
        CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_FCF;



      if (CC2420ReceiveP__rxFrameLength + 1 > CC2420ReceiveP__m_bytes_left) 



        {

          CC2420ReceiveP__flush();
        }
      else {
          if (!CC2420ReceiveP__FIFO__get() && !CC2420ReceiveP__FIFOP__get()) {
              CC2420ReceiveP__m_bytes_left -= CC2420ReceiveP__rxFrameLength + 1;
            }

          if (CC2420ReceiveP__rxFrameLength <= MAC_PACKET_SIZE) {
              if (CC2420ReceiveP__rxFrameLength > 0) {
                  if (CC2420ReceiveP__rxFrameLength > CC2420ReceiveP__SACK_HEADER_LENGTH) {

                      CC2420ReceiveP__RXFIFO__continueRead(buf + 1, CC2420ReceiveP__SACK_HEADER_LENGTH);
                    }
                  else {

                      CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_PAYLOAD;
                      CC2420ReceiveP__RXFIFO__continueRead(buf + 1, CC2420ReceiveP__rxFrameLength);
                    }
                }
              else {
                  /* atomic removed: atomic calls only */
                  CC2420ReceiveP__receivingPacket = FALSE;
                  CC2420ReceiveP__CSN__set();
                  CC2420ReceiveP__SpiResource__release();
                  CC2420ReceiveP__waitForNextPacket();
                }
            }
          else {

              CC2420ReceiveP__flush();
            }
        }
      break;

      case CC2420ReceiveP__S_RX_FCF: 
        CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_PAYLOAD;










      if (CC2420ReceiveP__CC2420Config__isAutoAckEnabled() && !CC2420ReceiveP__CC2420Config__isHwAutoAckDefault()) {



          if (((__nesc_ntoh_leuint16(
#line 592
          header->fcf.nxdata) >> IEEE154_FCF_ACK_REQ) & 0x01) == 1
           && (__nesc_ntoh_leuint16(header->dest.nxdata) == CC2420ReceiveP__CC2420Config__getShortAddr()
           || __nesc_ntoh_leuint16(header->dest.nxdata) == AM_BROADCAST_ADDR)
           && ((__nesc_ntoh_leuint16(header->fcf.nxdata) >> IEEE154_FCF_FRAME_TYPE) & 7) == IEEE154_TYPE_DATA) {

              CC2420ReceiveP__CSN__set();
              CC2420ReceiveP__CSN__clr();
              CC2420ReceiveP__SACK__strobe();
              CC2420ReceiveP__CSN__set();
              CC2420ReceiveP__CSN__clr();
              CC2420ReceiveP__RXFIFO__beginRead(buf + 1 + CC2420ReceiveP__SACK_HEADER_LENGTH, 
              CC2420ReceiveP__rxFrameLength - CC2420ReceiveP__SACK_HEADER_LENGTH);
              return;
            }
        }

      CC2420ReceiveP__RXFIFO__continueRead(buf + 1 + CC2420ReceiveP__SACK_HEADER_LENGTH, 
      CC2420ReceiveP__rxFrameLength - CC2420ReceiveP__SACK_HEADER_LENGTH);
      break;

      case CC2420ReceiveP__S_RX_PAYLOAD: 

        CC2420ReceiveP__CSN__set();
      if (!CC2420ReceiveP__m_missed_packets) {

          CC2420ReceiveP__SpiResource__release();
        }




      if ((((
#line 621
      CC2420ReceiveP__m_missed_packets && CC2420ReceiveP__FIFO__get()) || !CC2420ReceiveP__FIFOP__get())
       || !CC2420ReceiveP__m_timestamp_size)
       || CC2420ReceiveP__rxFrameLength <= 10) {
          CC2420ReceiveP__PacketTimeStamp__clear(CC2420ReceiveP__m_p_rx_buf);
        }
      else {
          if (CC2420ReceiveP__m_timestamp_size == 1) {
            CC2420ReceiveP__PacketTimeStamp__set(CC2420ReceiveP__m_p_rx_buf, CC2420ReceiveP__m_timestamp_queue[CC2420ReceiveP__m_timestamp_head]);
            }
#line 629
          CC2420ReceiveP__m_timestamp_head = (CC2420ReceiveP__m_timestamp_head + 1) % CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE;
          CC2420ReceiveP__m_timestamp_size--;

          if (CC2420ReceiveP__m_timestamp_size > 0) {
              CC2420ReceiveP__PacketTimeStamp__clear(CC2420ReceiveP__m_p_rx_buf);
              CC2420ReceiveP__m_timestamp_head = 0;
              CC2420ReceiveP__m_timestamp_size = 0;
            }
        }



      if (buf[CC2420ReceiveP__rxFrameLength] >> 7 && rx_buf) {
          uint8_t type = (__nesc_ntoh_leuint16(header->fcf.nxdata) >> IEEE154_FCF_FRAME_TYPE) & 7;

#line 643
          CC2420ReceiveP__CC2420Receive__receive(type, CC2420ReceiveP__m_p_rx_buf);
          if (type == IEEE154_TYPE_DATA) {
              CC2420ReceiveP__receiveDone_task__postTask();
              return;
            }
        }

      CC2420ReceiveP__waitForNextPacket();
      break;

      default: /* atomic removed: atomic calls only */
        CC2420ReceiveP__receivingPacket = FALSE;
      CC2420ReceiveP__CSN__set();
      CC2420ReceiveP__SpiResource__release();
      break;
    }
}

# 370 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Fifo__default__readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error)
#line 370
{
}

# 71 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP__Fifo__readDone(uint8_t arg_0x1077de368, uint8_t * data, uint8_t length, error_t error){
#line 71
  switch (arg_0x1077de368) {
#line 71
    case CC2420_TXFIFO:
#line 71
      CC2420TransmitP__TXFIFO__readDone(data, length, error);
#line 71
      break;
#line 71
    case CC2420_RXFIFO:
#line 71
      CC2420ReceiveP__RXFIFO__readDone(data, length, error);
#line 71
      break;
#line 71
    default:
#line 71
      CC2420SpiP__Fifo__default__readDone(arg_0x1077de368, data, length, error);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ReceiveP__SFLUSHRX__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SFLUSHRX);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 288 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__RadioBackoff__default__requestInitialBackoff(am_id_t id, 
message_t *msg)
#line 289
{
}

# 81 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420ActiveMessageP__RadioBackoff__requestInitialBackoff(am_id_t arg_0x107f24d60, message_t * msg){
#line 81
    CC2420ActiveMessageP__RadioBackoff__default__requestInitialBackoff(arg_0x107f24d60, msg);
#line 81
}
#line 81
# 236 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SubBackoff__requestInitialBackoff(message_t *msg)
#line 236
{
  CC2420ActiveMessageP__RadioBackoff__requestInitialBackoff(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (size_t )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.nxdata), msg);
}

# 81 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__RadioBackoff__requestInitialBackoff(message_t * msg){
#line 81
  CC2420ActiveMessageP__SubBackoff__requestInitialBackoff(msg);
#line 81
}
#line 81
# 243 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__RadioBackoff__setInitialBackoff(uint16_t backoffTime)
#line 243
{
  CC2420TransmitP__myInitialBackoff = backoffTime + 1;
}

# 60 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__SubBackoff__setInitialBackoff(uint16_t backoffTime){
#line 60
  CC2420TransmitP__RadioBackoff__setInitialBackoff(backoffTime);
#line 60
}
#line 60
# 220 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__SubBackoff__requestInitialBackoff(message_t *msg)
#line 220
{
  CC2420CsmaP__SubBackoff__setInitialBackoff(CC2420CsmaP__Random__rand16()
   % (0x1F * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP__RadioBackoff__requestInitialBackoff(msg);
}

# 81 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420TransmitP__RadioBackoff__requestInitialBackoff(message_t * msg){
#line 81
  CC2420CsmaP__SubBackoff__requestInitialBackoff(msg);
#line 81
}
#line 81
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP__sendDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420CsmaP__sendDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 202 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__CC2420Transmit__sendDone(message_t *p_msg, error_t err)
#line 202
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 203
    CC2420CsmaP__sendErr = err;
#line 203
    __nesc_atomic_end(__nesc_atomic); }
  CC2420CsmaP__sendDone_task__postTask();
}

# 73 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static void CC2420TransmitP__Send__sendDone(message_t * p_msg, error_t error){
#line 73
  CC2420CsmaP__CC2420Transmit__sendDone(p_msg, error);
#line 73
}
#line 73
# 454 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__TXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 455
{

  CC2420TransmitP__CSN__set();
  if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
      /* atomic removed: atomic calls only */
#line 459
      {
        CC2420TransmitP__CSN__clr();
        CC2420TransmitP__SFLUSHTX__strobe();
        CC2420TransmitP__CSN__set();
      }
      CC2420TransmitP__releaseSpiResource();
      CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
      CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, ECANCEL);
    }
  else {
#line 468
    if (!CC2420TransmitP__m_cca) {
        /* atomic removed: atomic calls only */
#line 469
        {
          CC2420TransmitP__m_state = CC2420TransmitP__S_BEGIN_TRANSMIT;
        }
        CC2420TransmitP__attemptSend();
      }
    else {
        CC2420TransmitP__releaseSpiResource();
        /* atomic removed: atomic calls only */
#line 476
        {
          CC2420TransmitP__m_state = CC2420TransmitP__S_SAMPLE_CCA;
        }

        CC2420TransmitP__RadioBackoff__requestInitialBackoff(CC2420TransmitP__m_msg);
        CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__myInitialBackoff);
      }
    }
}

# 663 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__RXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 663
{
}

# 373 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Fifo__default__writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 373
{
}

# 91 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP__Fifo__writeDone(uint8_t arg_0x1077de368, uint8_t * data, uint8_t length, error_t error){
#line 91
  switch (arg_0x1077de368) {
#line 91
    case CC2420_TXFIFO:
#line 91
      CC2420TransmitP__TXFIFO__writeDone(data, length, error);
#line 91
      break;
#line 91
    case CC2420_RXFIFO:
#line 91
      CC2420ReceiveP__RXFIFO__writeDone(data, length, error);
#line 91
      break;
#line 91
    default:
#line 91
      CC2420SpiP__Fifo__default__writeDone(arg_0x1077de368, data, length, error);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__RXCTRL1__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_RXCTRL1, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
inline static cc2420_status_t CC2420ControlP__IOCFG0__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_IOCFG0, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SXOSCON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SXOSCON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 90 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__enable(void )
#line 90
{
#line 90
  P1IE |= 1 << 4;
}

# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__enable(void ){
#line 42
  HplMsp430InterruptP__Port14__enable();
#line 42
}
#line 42
# 142 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__edge(bool l2h)
#line 142
{
  /* atomic removed: atomic calls only */
#line 143
  {
    if (l2h) {
#line 144
      P1IES &= ~(1 << 4);
      }
    else {
#line 145
      P1IES |= 1 << 4;
      }
  }
}

# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__edge(bool low_to_high){
#line 67
  HplMsp430InterruptP__Port14__edge(low_to_high);
#line 67
}
#line 67
# 106 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__clear(void )
#line 106
{
#line 106
  P1IFG &= ~(1 << 4);
}

# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear(void ){
#line 52
  HplMsp430InterruptP__Port14__clear();
#line 52
}
#line 52
# 98 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__disable(void )
#line 98
{
#line 98
  P1IE &= ~(1 << 4);
}

# 47 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__disable(void ){
#line 47
  HplMsp430InterruptP__Port14__disable();
#line 47
}
#line 47
# 69 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable(void )
#line 69
{
  /* atomic removed: atomic calls only */
#line 70
  {
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__disable();
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear();
  }
  return SUCCESS;
}

#line 52
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__enable(bool rising)
#line 52
{
  /* atomic removed: atomic calls only */
#line 53
  {
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable();
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__edge(rising);
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__enable();
  }
  return SUCCESS;
}

static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge(void )
#line 61
{
  return /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__enable(TRUE);
}

# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP__InterruptCCA__enableRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__IOCFG1__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_IOCFG1, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 207 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__startOscillator(void )
#line 207
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 208
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_VREG_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 210
            FAIL;

            {
#line 210
              __nesc_atomic_end(__nesc_atomic); 
#line 210
              return __nesc_temp;
            }
          }
        }
#line 213
      CC2420ControlP__m_state = CC2420ControlP__S_XOSC_STARTING;
      CC2420ControlP__IOCFG1__write(CC2420_SFDMUX_XOSC16M_STABLE << 
      CC2420_IOCFG1_CCAMUX);

      CC2420ControlP__InterruptCCA__enableRisingEdge();
      CC2420ControlP__SXOSCON__strobe();

      CC2420ControlP__IOCFG0__write((1 << CC2420_IOCFG0_FIFOP_POLARITY) | (
      127 << CC2420_IOCFG0_FIFOP_THR));

      CC2420ControlP__writeFsctrl();
      CC2420ControlP__writeMdmctrl0();

      CC2420ControlP__RXCTRL1__write(((((((1 << CC2420_RXCTRL1_RXBPF_LOCUR) | (
      1 << CC2420_RXCTRL1_LOW_LOWGAIN)) | (
      1 << CC2420_RXCTRL1_HIGH_HGM)) | (
      1 << CC2420_RXCTRL1_LNA_CAP_ARRAY)) | (
      1 << CC2420_RXCTRL1_RXMIX_TAIL)) | (
      1 << CC2420_RXCTRL1_RXMIX_VCM)) | (
      2 << CC2420_RXCTRL1_RXMIX_CURRENT));
    }
#line 233
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 71 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__startOscillator(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = CC2420ControlP__CC2420Power__startOscillator();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 211 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__Resource__granted(void )
#line 211
{
  CC2420CsmaP__CC2420Power__startOscillator();
}

# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void CC2420ControlP__Resource__granted(void ){
#line 102
  CC2420CsmaP__Resource__granted();
#line 102
}
#line 102
# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__clr(void ){
#line 41
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr();
#line 41
}
#line 41
# 390 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__SpiResource__granted(void )
#line 390
{
  CC2420ControlP__CSN__clr();
  CC2420ControlP__Resource__granted();
}

# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ControlP__syncDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420ControlP__syncDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SyncResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 40 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__set(void ){
#line 40
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set();
#line 40
}
#line 40
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SRXON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SRXON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
inline static cc2420_status_t CC2420ControlP__SRFOFF__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SRFOFF);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 376 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__SyncResource__granted(void )
#line 376
{
  CC2420ControlP__CSN__clr();
  CC2420ControlP__SRFOFF__strobe();
  CC2420ControlP__writeFsctrl();
  CC2420ControlP__writeMdmctrl0();
  CC2420ControlP__writeId();
  CC2420ControlP__CSN__set();
  CC2420ControlP__CSN__clr();
  CC2420ControlP__SRXON__strobe();
  CC2420ControlP__CSN__set();
  CC2420ControlP__SyncResource__release();
  CC2420ControlP__syncDone__postTask();
}

#line 509
static inline void CC2420ControlP__ReadRssi__default__readDone(error_t error, uint16_t data)
#line 509
{
}

# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Read.nc"
inline static void CC2420ControlP__ReadRssi__readDone(error_t result, CC2420ControlP__ReadRssi__val_t val){
#line 63
  CC2420ControlP__ReadRssi__default__readDone(result, val);
#line 63
}
#line 63
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__RssiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlC.RssiResource*/CC2420SpiC__2__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 287 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP__Reg__read(uint8_t addr, uint16_t *data)
#line 287
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 291
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 293
            status;

            {
#line 293
              __nesc_atomic_end(__nesc_atomic); 
#line 293
              return __nesc_temp;
            }
          }
        }
    }
#line 297
    __nesc_atomic_end(__nesc_atomic); }
#line 297
  status = CC2420SpiP__SpiByte__write(addr | 0x40);
  *data = (uint16_t )CC2420SpiP__SpiByte__write(0) << 8;
  *data |= CC2420SpiP__SpiByte__write(0);

  return status;
}

# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__RSSI__read(uint16_t *data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP__Reg__read(CC2420_RSSI, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 395 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__RssiResource__granted(void )
#line 395
{
  uint16_t data = 0;

#line 397
  CC2420ControlP__CSN__clr();
  CC2420ControlP__RSSI__read(&data);
  CC2420ControlP__CSN__set();

  CC2420ControlP__RssiResource__release();
  data += 0x7f;
  data &= 0x00ff;
  CC2420ControlP__ReadRssi__readDone(SUCCESS, data);
}

# 416 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__SpiResource__granted(void )
#line 416
{
  uint8_t cur_state;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 419
    {
      cur_state = CC2420TransmitP__m_state;
    }
#line 421
    __nesc_atomic_end(__nesc_atomic); }

  switch (cur_state) {
      case CC2420TransmitP__S_LOAD: 
        CC2420TransmitP__loadTXFIFO();
      break;

      case CC2420TransmitP__S_BEGIN_TRANSMIT: 
        CC2420TransmitP__attemptSend();
      break;

      case CC2420TransmitP__S_CANCEL: 
        CC2420TransmitP__CSN__clr();
      CC2420TransmitP__SFLUSHTX__strobe();
      CC2420TransmitP__CSN__set();
      CC2420TransmitP__releaseSpiResource();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 437
        {
          CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
        }
#line 439
        __nesc_atomic_end(__nesc_atomic); }
      CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, ECANCEL);
      break;

      default: 
        CC2420TransmitP__releaseSpiResource();
      break;
    }
}

# 508 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__SpiResource__granted(void )
#line 508
{







  CC2420ReceiveP__receive();
}

# 367 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Resource__default__granted(uint8_t id)
#line 367
{
}

# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void CC2420SpiP__Resource__granted(uint8_t arg_0x1077df1a0){
#line 102
  switch (arg_0x1077df1a0) {
#line 102
    case /*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID:
#line 102
      CC2420ControlP__SpiResource__granted();
#line 102
      break;
#line 102
    case /*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID:
#line 102
      CC2420ControlP__SyncResource__granted();
#line 102
      break;
#line 102
    case /*CC2420ControlC.RssiResource*/CC2420SpiC__2__CLIENT_ID:
#line 102
      CC2420ControlP__RssiResource__granted();
#line 102
      break;
#line 102
    case /*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID:
#line 102
      CC2420TransmitP__SpiResource__granted();
#line 102
      break;
#line 102
    case /*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID:
#line 102
      CC2420ReceiveP__SpiResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      CC2420SpiP__Resource__default__granted(arg_0x1077df1a0);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 358 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__grant__runTask(void )
#line 358
{
  uint8_t holder;

#line 360
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 360
    {
      holder = CC2420SpiP__m_holder;
    }
#line 362
    __nesc_atomic_end(__nesc_atomic); }
  CC2420SpiP__Resource__granted(holder);
}

# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__FSCTRL__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_FSCTRL, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
inline static cc2420_status_t CC2420ControlP__MDMCTRL0__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_MDMCTRL0, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static cc2420_status_t CC2420ControlP__PANID__write(uint8_t offset, uint8_t * data, uint8_t length){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Ram__write(CC2420_RAM_PANID, offset, data, length);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 230 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__CC2420Config__syncDone(error_t error)
#line 230
{
}

# 704 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Config__syncDone(error_t error)
#line 704
{
}

# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static void CC2420ControlP__CC2420Config__syncDone(error_t error){
#line 53
  CC2420ReceiveP__CC2420Config__syncDone(error);
#line 53
  CC2420ActiveMessageP__CC2420Config__syncDone(error);
#line 53
}
#line 53
# 446 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__syncDone__runTask(void )
#line 446
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 447
    CC2420ControlP__m_sync_busy = FALSE;
#line 447
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP__CC2420Config__syncDone(SUCCESS);
}

# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SyncResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 300 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Config__sync(void )
#line 300
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 301
    {
      if (CC2420ControlP__m_sync_busy) {
          {
            unsigned char __nesc_temp = 
#line 303
            FAIL;

            {
#line 303
              __nesc_atomic_end(__nesc_atomic); 
#line 303
              return __nesc_temp;
            }
          }
        }
#line 306
      CC2420ControlP__m_sync_busy = TRUE;
      if (CC2420ControlP__m_state == CC2420ControlP__S_XOSC_STARTED) {
          CC2420ControlP__SyncResource__request();
        }
      else 
#line 309
        {
          CC2420ControlP__syncDone__postTask();
        }
    }
#line 312
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

#line 442
static inline void CC2420ControlP__sync__runTask(void )
#line 442
{
  CC2420ControlP__CC2420Config__sync();
}

# 213 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP__BareSend__default__sendDone(message_t *msg, error_t error)
#line 213
{
}

# 100 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
inline static void CC2420TinyosNetworkP__BareSend__sendDone(message_t * msg, error_t error){
#line 100
  CC2420TinyosNetworkP__BareSend__default__sendDone(msg, error);
#line 100
}
#line 100
# 110 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void CC2420ActiveMessageP__AMSend__sendDone(am_id_t arg_0x107f2a6c0, message_t * msg, error_t error){
#line 110
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(arg_0x107f2a6c0, msg, error);
#line 110
}
#line 110
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ActiveMessageP__RadioResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420TinyosNetworkP__Resource__release(CC2420ActiveMessageC__CC2420_AM_SEND_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 207 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SubSend__sendDone(message_t *msg, error_t result)
#line 207
{
  CC2420ActiveMessageP__RadioResource__release();
  CC2420ActiveMessageP__AMSend__sendDone(CC2420ActiveMessageP__AMPacket__type(msg), msg, result);
}

# 100 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
inline static void CC2420TinyosNetworkP__ActiveSend__sendDone(message_t * msg, error_t error){
#line 100
  CC2420ActiveMessageP__SubSend__sendDone(msg, error);
#line 100
}
#line 100
# 118 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP__SubSend__sendDone(message_t *msg, error_t error)
#line 118
{
  if (CC2420TinyosNetworkP__CC2420Packet__getNetwork(msg) == 0x3f) {
      CC2420TinyosNetworkP__ActiveSend__sendDone(msg, error);
    }
  else 
#line 121
    {
      CC2420TinyosNetworkP__BareSend__sendDone(msg, error);
    }
}

# 100 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
inline static void UniqueSendP__Send__sendDone(message_t * msg, error_t error){
#line 100
  CC2420TinyosNetworkP__SubSend__sendDone(msg, error);
#line 100
}
#line 100
# 104 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline void UniqueSendP__SubSend__sendDone(message_t *msg, error_t error)
#line 104
{
  UniqueSendP__State__toIdle();
  UniqueSendP__Send__sendDone(msg, error);
}

# 100 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
inline static void CC2420CsmaP__Send__sendDone(message_t * msg, error_t error){
#line 100
  UniqueSendP__SubSend__sendDone(msg, error);
#line 100
}
#line 100
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP__stopDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420CsmaP__stopDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 57 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )29U &= ~(0x01 << 5);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 50 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__clr(void ){
#line 50
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__clr();
#line 50
}
#line 50
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__clr(void )
#line 49
{
#line 49
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__clr();
}

# 41 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__clr(void ){
#line 41
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__clr();
#line 41
}
#line 41
# 199 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__stopVReg(void )
#line 199
{
  CC2420ControlP__m_state = CC2420ControlP__S_VREG_STOPPED;
  CC2420ControlP__RSTN__clr();
  CC2420ControlP__VREN__clr();
  CC2420ControlP__RSTN__set();
  return SUCCESS;
}

# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__stopVReg(void ){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420ControlP__CC2420Power__stopVReg();
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 69 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port10__clear(void )
#line 102
{
#line 102
  P1IFG &= ~(1 << 0);
}

# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear(void ){
#line 52
  HplMsp430InterruptP__Port10__clear();
#line 52
}
#line 52
# 94 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port10__disable(void )
#line 94
{
#line 94
  P1IE &= ~(1 << 0);
}

# 47 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__disable(void ){
#line 47
  HplMsp430InterruptP__Port10__disable();
#line 47
}
#line 47
# 69 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable(void )
#line 69
{
  /* atomic removed: atomic calls only */
#line 70
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear();
  }
  return SUCCESS;
}

# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP__InterruptFIFOP__disable(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 171 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP__StdControl__stop(void )
#line 171
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
      CC2420ReceiveP__m_state = CC2420ReceiveP__S_STOPPED;
      CC2420ReceiveP__reset_state();
      CC2420ReceiveP__CSN__set();
      CC2420ReceiveP__InterruptFIFOP__disable();
    }
#line 177
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )31U &= ~(0x01 << 1);
}

# 96 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectIOFunc(void ){
#line 96
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectIOFunc();
#line 96
}
#line 96
# 135 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void )
{
  * (volatile uint16_t * )388U &= ~0x0010;
}

# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents();
#line 58
}
#line 58
# 69 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__disable(void )
#line 69
{
  /* atomic removed: atomic calls only */
#line 70
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectIOFunc();
  }
}

# 66 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static void CC2420TransmitP__CaptureSFD__disable(void ){
#line 66
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__disable();
#line 66
}
#line 66
# 179 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__StdControl__stop(void )
#line 179
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 180
    {
      CC2420TransmitP__m_state = CC2420TransmitP__S_STOPPED;
      CC2420TransmitP__BackoffTimer__stop();
      CC2420TransmitP__CaptureSFD__disable();
      CC2420TransmitP__SpiResource__release();
      CC2420TransmitP__CSN__set();
    }
#line 186
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 105 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t CC2420CsmaP__SubControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = CC2420TransmitP__StdControl__stop();
#line 105
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__StdControl__stop());
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 272 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__shutdown(void )
#line 272
{
  CC2420CsmaP__SubControl__stop();
  CC2420CsmaP__CC2420Power__stopVReg();
  CC2420CsmaP__stopDone_task__postTask();
}

#line 241
static inline void CC2420CsmaP__sendDone_task__runTask(void )
#line 241
{
  error_t packetErr;

#line 243
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 243
    packetErr = CC2420CsmaP__sendErr;
#line 243
    __nesc_atomic_end(__nesc_atomic); }
  if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STOPPING)) {
      CC2420CsmaP__shutdown();
    }
  else {
      CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STARTED);
    }

  CC2420CsmaP__Send__sendDone(CC2420CsmaP__m_msg, packetErr);
}

# 135 "SenseP.nc"
static inline void SenseP__AMControl__stopDone(error_t error)
{
}

# 138 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void CC2420CsmaP__SplitControl__stopDone(error_t error){
#line 138
  SenseP__AMControl__stopDone(error);
#line 138
}
#line 138
# 262 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__stopDone_task__runTask(void )
#line 262
{
  CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STOPPED);
  CC2420CsmaP__SplitControl__stopDone(SUCCESS);
}

# 104 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t SenseP__AMControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = CC2420CsmaP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 154 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 64 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void SenseP__Timer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(0U, dt);
#line 64
}
#line 64
# 99 "SenseP.nc"
static inline void SenseP__AMControl__startDone(error_t error)
{
  if (error == SUCCESS) {
    SenseP__Timer__startPeriodic(SAMPLE_FREQUENCY);
    }
  else {
#line 104
    SenseP__AMControl__start();
    }
}

# 113 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void CC2420CsmaP__SplitControl__startDone(error_t error){
#line 113
  SenseP__AMControl__startDone(error);
#line 113
}
#line 113
# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 179 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Resource__release(void )
#line 179
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 180
    {
      CC2420ControlP__CSN__set();
      {
        unsigned char __nesc_temp = 
#line 182
        CC2420ControlP__SpiResource__release();

        {
#line 182
          __nesc_atomic_end(__nesc_atomic); 
#line 182
          return __nesc_temp;
        }
      }
    }
#line 185
    __nesc_atomic_end(__nesc_atomic); }
}

# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420CsmaP__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420ControlP__Resource__release();
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 249 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__rxOn(void )
#line 249
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 250
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_XOSC_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 252
            FAIL;

            {
#line 252
              __nesc_atomic_end(__nesc_atomic); 
#line 252
              return __nesc_temp;
            }
          }
        }
#line 254
      CC2420ControlP__SRXON__strobe();
    }
#line 255
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 90 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__rxOn(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = CC2420ControlP__CC2420Power__rxOn();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 86 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port10__enable(void )
#line 86
{
#line 86
  P1IE |= 1 << 0;
}

# 42 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__enable(void ){
#line 42
  HplMsp430InterruptP__Port10__enable();
#line 42
}
#line 42
# 118 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port10__edge(bool l2h)
#line 118
{
  /* atomic removed: atomic calls only */
#line 119
  {
    if (l2h) {
#line 120
      P1IES &= ~(1 << 0);
      }
    else {
#line 121
      P1IES |= 1 << 0;
      }
  }
}

# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__edge(bool low_to_high){
#line 67
  HplMsp430InterruptP__Port10__edge(low_to_high);
#line 67
}
#line 67
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__enable(bool rising)
#line 52
{
  /* atomic removed: atomic calls only */
#line 53
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__edge(rising);
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__enable();
  }
  return SUCCESS;
}





static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge(void )
#line 65
{
  return /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__enable(FALSE);
}

# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP__InterruptFIFOP__enableFallingEdge(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 157 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP__StdControl__start(void )
#line 157
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 158
    {
      CC2420ReceiveP__reset_state();
      CC2420ReceiveP__m_state = CC2420ReceiveP__S_STARTED;
      CC2420ReceiveP__receivingPacket = FALSE;




      CC2420ReceiveP__InterruptFIFOP__enableFallingEdge();
    }
#line 167
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 168 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__StdControl__start(void )
#line 168
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 169
    {
      CC2420TransmitP__CaptureSFD__captureRisingEdge();
      CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
      CC2420TransmitP__m_receiving = FALSE;
      CC2420TransmitP__abortSpiRelease = FALSE;
      CC2420TransmitP__m_tx_power = 0;
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 95 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t CC2420CsmaP__SubControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = CC2420TransmitP__StdControl__start();
#line 95
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__StdControl__start());
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 254 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__startDone_task__runTask(void )
#line 254
{
  CC2420CsmaP__SubControl__start();
  CC2420CsmaP__CC2420Power__rxOn();
  CC2420CsmaP__Resource__release();
  CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STARTED);
  CC2420CsmaP__SplitControl__startDone(SUCCESS);
}

# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/State.nc"
inline static error_t CC2420CsmaP__SplitControlState__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(1U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 66 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void CC2420ControlP__StartupTimer__start(CC2420ControlP__StartupTimer__size_type dt){
#line 66
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__start(dt);
#line 66
}
#line 66
# 56 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__set(void )
#line 56
{
#line 56
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    * (volatile uint8_t * )29U |= 0x01 << 5;
#line 56
    __nesc_atomic_end(__nesc_atomic); }
}

# 45 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__set(void ){
#line 45
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__set();
#line 45
}
#line 45
# 48 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__set(void )
#line 48
{
#line 48
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__set();
}

# 40 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__set(void ){
#line 40
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__set();
#line 40
}
#line 40
# 187 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__startVReg(void )
#line 187
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 188
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_VREG_STOPPED) {
          {
            unsigned char __nesc_temp = 
#line 190
            FAIL;

            {
#line 190
              __nesc_atomic_end(__nesc_atomic); 
#line 190
              return __nesc_temp;
            }
          }
        }
#line 192
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTING;
    }
#line 193
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP__VREN__set();
  CC2420ControlP__StartupTimer__start(CC2420_TIME_VREN);
  return SUCCESS;
}

# 51 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__startVReg(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420ControlP__CC2420Power__startVReg();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 103 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
}

# 73 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__stop(void ){
#line 73
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__stop(void )
{
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__stop();
}

# 73 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 71 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 100 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint8_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 135
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 58 "SenseP.nc"
static inline void SenseP__resetHop(void )
#line 58
{

  SenseP__firstHop = 0;
  SenseP__len = INF;
}

# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*SenseC.HopSender.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(1U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 162 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*SenseC.HopSender.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setType(message_t * amsg, am_id_t t){
#line 162
  CC2420ActiveMessageP__AMPacket__setType(amsg, t);
#line 162
}
#line 162
#line 103
inline static void /*SenseC.HopSender.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 103
  CC2420ActiveMessageP__AMPacket__setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*SenseC.HopSender.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*SenseC.HopSender.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setDestination(msg, dest);
  /*SenseC.HopSender.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setType(msg, 7);
  return /*SenseC.HopSender.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__send(msg, len);
}

# 80 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t SenseP__HopSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*SenseC.HopSender.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 82 "SenseP.nc"
static inline void SenseP__sendHop(void )
#line 82
{
  HopMsg *msg = (HopMsg *)SenseP__Packet__getPayload(&SenseP__hopPkt, (void *)0);

#line 84
  __nesc_hton_uint16(msg->nodeid.nxdata, TOS_NODE_ID);
  __nesc_hton_uint16(msg->len.nxdata, SenseP__len);
  if (SenseP__HopSend__send(AM_BROADCAST_ADDR, &SenseP__hopPkt, sizeof(HopMsg )) == SUCCESS) 
    {
      SenseP__busy = TRUE;
    }
}

# 161 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline error_t Msp430RefVoltArbiterImplP__AdcResource__default__request(uint8_t client)
{
  return FAIL;
}

# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t Msp430RefVoltArbiterImplP__AdcResource__request(uint8_t arg_0x10842f108){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  switch (arg_0x10842f108) {
#line 88
    case /*SenseC.LightC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID:
#line 88
      __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(/*SenseC.LightC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID);
#line 88
      break;
#line 88
    case /*SenseC.LightC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1__ID:
#line 88
      __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(/*SenseC.LightC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1__ID);
#line 88
      break;
#line 88
    default:
#line 88
      __nesc_result = Msp430RefVoltArbiterImplP__AdcResource__default__request(arg_0x10842f108);
#line 88
      break;
#line 88
    }
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline error_t Msp430RefVoltArbiterImplP__ClientResource__request(uint8_t client)
{
  return Msp430RefVoltArbiterImplP__AdcResource__request(client);
}

# 168 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
static inline error_t AdcP__ResourceRead__default__request(uint8_t client)
#line 168
{
#line 168
  return FAIL;
}

# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t AdcP__ResourceRead__request(uint8_t arg_0x10820c548){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  switch (arg_0x10820c548) {
#line 88
    case /*SenseC.LightC.AdcReadClientC*/AdcReadClientC__0__CLIENT:
#line 88
      __nesc_result = Msp430RefVoltArbiterImplP__ClientResource__request(/*SenseC.LightC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID);
#line 88
      break;
#line 88
    default:
#line 88
      __nesc_result = AdcP__ResourceRead__default__request(arg_0x10820c548);
#line 88
      break;
#line 88
    }
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
static inline error_t AdcP__Read__read(uint8_t client)
{
  return AdcP__ResourceRead__request(client);
}

# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Read.nc"
inline static error_t SenseP__Light__read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = AdcP__Read__read(/*SenseC.LightC.AdcReadClientC*/AdcReadClientC__0__CLIENT);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__HumResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__Resource__request(/*SenseC.SHT11C*/SensirionSht11C__0__HUM_KEY);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 80 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11ReaderP.nc"
static inline error_t /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Humidity__read(void )
#line 80
{
  /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__HumResource__request();
  return SUCCESS;
}

# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Read.nc"
inline static error_t SenseP__Humidity__read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Humidity__read();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__TempResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__Resource__request(/*SenseC.SHT11C*/SensirionSht11C__0__TEMP_KEY);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 60 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11ReaderP.nc"
static inline error_t /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Temperature__read(void )
#line 60
{
  /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__TempResource__request();
  return SUCCESS;
}

# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Read.nc"
inline static error_t SenseP__Temperature__read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Temperature__read();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 140 "SenseP.nc"
static inline void SenseP__Timer__fired(void )
{

  SenseP__Temperature__read();
  SenseP__Humidity__read();
  SenseP__Light__read();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 146
    {
      SenseP__lastFirstHop = SenseP__firstHop;
      SenseP__lastLen = SenseP__len;
      if (!SenseP__busy) {
          SenseP__sendHop();
        }
      if (SenseP__reset) {
        SenseP__resetHop();
        }
#line 154
      SenseP__reset = !SenseP__reset;
    }
#line 155
    __nesc_atomic_end(__nesc_atomic); }
}

# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 133 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void )
#line 133
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 134
    {
      if (/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__resId == /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__default_owner_id) {
          if (/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__state == /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__RES_GRANTING) {
              /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 138
                SUCCESS;

                {
#line 138
                  __nesc_atomic_end(__nesc_atomic); 
#line 138
                  return __nesc_temp;
                }
              }
            }
          else {
#line 140
            if (/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__state == /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__RES_IMM_GRANTING) {
                /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__resId = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__reqResId;
                /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__state = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 143
                  SUCCESS;

                  {
#line 143
                    __nesc_atomic_end(__nesc_atomic); 
#line 143
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 149
    __nesc_atomic_end(__nesc_atomic); }
#line 147
  return FAIL;
}

# 56 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__release(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 184 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
static inline uint8_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__isOwner(void )
#line 184
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 185
    {
      unsigned char __nesc_temp = 
#line 185
      /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__state == /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__RES_CONTROLLED
       || (/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__resId == /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__default_owner_id
       && (/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__state == /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__RES_GRANTING || /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__state == /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__RES_IMM_GRANTING));

      {
#line 185
        __nesc_atomic_end(__nesc_atomic); 
#line 185
        return __nesc_temp;
      }
    }
#line 187
    __nesc_atomic_end(__nesc_atomic); }
}

# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static bool /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__isOwner(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__isOwner();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
static inline void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__SplitControl__startDone(error_t error)
#line 102
{
  if (/*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__isOwner()) {
    /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__release();
    }
}

# 113 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void HplSensirionSht11P__SplitControl__startDone(error_t error){
#line 113
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__SplitControl__startDone(error);
#line 113
}
#line 113
# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/platforms/telosa/chips/sht11/HplSensirionSht11P.nc"
static inline void HplSensirionSht11P__Timer__fired(void )
#line 59
{
  HplSensirionSht11P__SplitControl__startDone(SUCCESS);
}

# 98 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11ReaderP.nc"
static inline void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Temp__resetDone(error_t result)
#line 98
{
}



static inline void /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Hum__resetDone(error_t result)
#line 103
{
}

# 406 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__default__resetDone(uint8_t client, error_t result)
#line 406
{
}

# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11.nc"
inline static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__resetDone(uint8_t arg_0x1080cc350, error_t result){
#line 54
  switch (arg_0x1080cc350) {
#line 54
    case /*SenseC.SHT11C*/SensirionSht11C__0__TEMP_KEY:
#line 54
      /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Temp__resetDone(result);
#line 54
      break;
#line 54
    case /*SenseC.SHT11C*/SensirionSht11C__0__HUM_KEY:
#line 54
      /*SenseC.SHT11C.SensirionSht11ReaderP*/SensirionSht11ReaderP__0__Sht11Hum__resetDone(result);
#line 54
      break;
#line 54
    default:
#line 54
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__default__resetDone(arg_0x1080cc350, result);
#line 54
      break;
#line 54
    }
#line 54
}
#line 54
# 287 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__Timer__fired(void )
#line 287
{

  switch (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__cmd) {

      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CMD_SOFT_RESET: 

        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__busy = FALSE;
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__resetDone(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__currentClient, SUCCESS);
      break;

      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CMD_MEASURE_TEMPERATURE: 

        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__busy = FALSE;
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__measureTemperatureDone(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__currentClient, FAIL, 0);
      break;

      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CMD_MEASURE_HUMIDITY: 

        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__busy = FALSE;
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__SensirionSht11__measureHumidityDone(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__currentClient, FAIL, 0);
      break;

      default: 

        break;
    }
}

# 113 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void Msp430RefVoltGeneratorP__RefVolt_2_5V__startDone(error_t error){
#line 113
  Msp430RefVoltArbiterImplP__RefVolt_2_5V__startDone(error);
#line 113
}
#line 113
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ReadStream.nc"
inline static error_t /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Service__read(uint8_t arg_0x10851e148, uint32_t usPeriod){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = AdcStreamP__ReadStream__read(arg_0x10851e148, usPeriod);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbitratedReadStreamC.nc"
static inline void /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Resource__granted(uint8_t client)
#line 59
{
  /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Service__read(client, /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__period[client]);
}

# 160 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline void Msp430RefVoltArbiterImplP__ClientResource__default__granted(uint8_t client)
#line 160
{
}

# 102 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void Msp430RefVoltArbiterImplP__ClientResource__granted(uint8_t arg_0x108408d48){
#line 102
  switch (arg_0x108408d48) {
#line 102
    case /*SenseC.LightC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID:
#line 102
      AdcP__ResourceRead__granted(/*SenseC.LightC.AdcReadClientC*/AdcReadClientC__0__CLIENT);
#line 102
      break;
#line 102
    case /*SenseC.LightC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1__ID:
#line 102
      /*WireAdcStreamP.ArbitrateReadStream*/ArbitratedReadStreamC__0__Resource__granted(/*SenseC.LightC.AdcReadStreamClientC*/AdcReadStreamClientC__0__RSCLIENT);
#line 102
      break;
#line 102
    default:
#line 102
      Msp430RefVoltArbiterImplP__ClientResource__default__granted(arg_0x108408d48);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 98 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline void Msp430RefVoltArbiterImplP__RefVolt_1_5V__startDone(error_t error)
{
  if (Msp430RefVoltArbiterImplP__syncOwner != Msp430RefVoltArbiterImplP__NO_OWNER) {


      Msp430RefVoltArbiterImplP__ClientResource__granted(Msp430RefVoltArbiterImplP__syncOwner);
    }
}

# 113 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void Msp430RefVoltGeneratorP__RefVolt_1_5V__startDone(error_t error){
#line 113
  Msp430RefVoltArbiterImplP__RefVolt_1_5V__startDone(error);
#line 113
}
#line 113
# 167 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline void Msp430RefVoltGeneratorP__SwitchOnTimer__fired(void )
#line 167
{
  switch (Msp430RefVoltGeneratorP__m_state) {
      case Msp430RefVoltGeneratorP__REFERENCE_1_5V_ON_PENDING: 
        Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE;
      Msp430RefVoltGeneratorP__RefVolt_1_5V__startDone(SUCCESS);
      break;

      case Msp430RefVoltGeneratorP__REFERENCE_2_5V_ON_PENDING: 
        Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__REFERENCE_2_5V_STABLE;
      Msp430RefVoltGeneratorP__RefVolt_2_5V__startDone(SUCCESS);
      break;

      default: 
        return;
    }
}

# 151 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline void Msp430RefVoltArbiterImplP__RefVolt_2_5V__stopDone(error_t error)
{
}

# 138 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void Msp430RefVoltGeneratorP__RefVolt_2_5V__stopDone(error_t error){
#line 138
  Msp430RefVoltArbiterImplP__RefVolt_2_5V__stopDone(error);
#line 138
}
#line 138
# 147 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline void Msp430RefVoltArbiterImplP__RefVolt_1_5V__stopDone(error_t error)
{
}

# 138 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void Msp430RefVoltGeneratorP__RefVolt_1_5V__stopDone(error_t error){
#line 138
  Msp430RefVoltArbiterImplP__RefVolt_1_5V__stopDone(error);
#line 138
}
#line 138
# 184 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline void Msp430RefVoltGeneratorP__SwitchOffTimer__fired(void )
#line 184
{
  switch (Msp430RefVoltGeneratorP__m_state) {
      case Msp430RefVoltGeneratorP__REFERENCE_1_5V_OFF_PENDING: 
        if (Msp430RefVoltGeneratorP__switchOff() == SUCCESS) {
            Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__GENERATOR_OFF;
            Msp430RefVoltGeneratorP__RefVolt_1_5V__stopDone(SUCCESS);
          }
        else {
            Msp430RefVoltGeneratorP__SwitchOffTimer__startOneShot(20);
          }
      break;

      case Msp430RefVoltGeneratorP__REFERENCE_2_5V_OFF_PENDING: 
        if (Msp430RefVoltGeneratorP__switchOff() == SUCCESS) {
            Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__GENERATOR_OFF;
            Msp430RefVoltGeneratorP__RefVolt_2_5V__stopDone(SUCCESS);
          }
        else {
            Msp430RefVoltGeneratorP__SwitchOffTimer__startOneShot(20);
          }
      break;

      default: 
        break;
    }
}

# 204 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x1073f25d8){
#line 83
  switch (arg_0x1073f25d8) {
#line 83
    case 0U:
#line 83
      SenseP__Timer__fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      HplSensirionSht11P__Timer__fired();
#line 83
      break;
#line 83
    case 3U:
#line 83
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__Timer__fired();
#line 83
      break;
#line 83
    case 4U:
#line 83
      Msp430RefVoltGeneratorP__SwitchOnTimer__fired();
#line 83
      break;
#line 83
    case 5U:
#line 83
      Msp430RefVoltGeneratorP__SwitchOffTimer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x1073f25d8);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 204 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(uint8_t id)
#line 204
{
}

# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceRequested__requested(uint8_t arg_0x107a757e8){
#line 53
    /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(arg_0x107a757e8);
#line 53
}
#line 53
# 64 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__resQ[id] != /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY || /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEnqueued(id)) {
        if (/*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__qHead == /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY) {
          /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__qHead = id;
          }
        else {
#line 88
          /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__resQ[/*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__qTail] = id;
          }
#line 89
        /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__startTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__startTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 84 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
static inline void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__requested(void )
#line 84
{
  if (/*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__stopping == FALSE) {
      /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__startTask__postTask();
    }
  else {
#line 88
    /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__requested = TRUE;
    }
}

# 73 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__requested(void ){
#line 73
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__requested();
#line 73
}
#line 73
# 139 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 91 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getAlarm(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 93
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type __nesc_temp = 
#line 93
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt;

      {
#line 93
        __nesc_atomic_end(__nesc_atomic); 
#line 93
        return __nesc_temp;
      }
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  __nesc_result = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 74 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 57 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3____nesc_unnamed4404 {
#line 57
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__compareControl(void )
{
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x = { 
  .cm = 1, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(x);
}

#line 105
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare(void )
{
  * (volatile uint16_t * )386U = /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__compareControl();
}

# 47 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare(void ){
#line 47
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare();
#line 47
}
#line 47
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Init__init(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare();
  return SUCCESS;
}

# 93 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void )
#line 93
{
  am_group_t myGroup;

  /* atomic removed: atomic calls only */
#line 95
  myGroup = ActiveMessageAddressC__group;
  return myGroup;
}

# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t CC2420ControlP__ActiveMessageAddress__amGroup(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amGroup();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
#line 50
inline static am_addr_t CC2420ControlP__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned int __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )30U |= 0x01 << 5;
}

# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__makeOutput(void ){
#line 82
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__makeOutput();
#line 82
}
#line 82
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__makeOutput();
}

# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__makeOutput(void ){
#line 46
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__makeOutput();
#line 46
}
#line 46
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )30U |= 0x01 << 6;
}

# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__makeOutput(void ){
#line 82
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__makeOutput();
#line 82
}
#line 82
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__makeOutput();
}

# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__makeOutput(void ){
#line 46
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__makeOutput();
#line 46
}
#line 46
# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )30U |= 0x01 << 2;
}

# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__makeOutput(void ){
#line 82
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput();
#line 82
}
#line 82
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__makeOutput();
}

# 46 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__makeOutput(void ){
#line 46
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput();
#line 46
}
#line 46
# 121 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Init__init(void )
#line 121
{
  CC2420ControlP__CSN__makeOutput();
  CC2420ControlP__RSTN__makeOutput();
  CC2420ControlP__VREN__makeOutput();

  CC2420ControlP__m_short_addr = CC2420ControlP__ActiveMessageAddress__amAddress();
  CC2420ControlP__m_pan = CC2420ControlP__ActiveMessageAddress__amGroup();
  CC2420ControlP__m_tx_power = 31;
  CC2420ControlP__m_channel = 26;





  CC2420ControlP__addressRecognition = TRUE;





  CC2420ControlP__hwAddressRecognition = FALSE;






  CC2420ControlP__autoAckEnabled = TRUE;






  CC2420ControlP__hwAutoAckDefault = FALSE;



  return SUCCESS;
}

# 81 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/StateImplP.nc"
static inline error_t StateImplP__Init__init(void )
#line 81
{
  int i;

#line 83
  for (i = 0; i < 4U; i++) {
      StateImplP__state[i] = StateImplP__S_IDLE;
    }
  return SUCCESS;
}

# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__Init__init(void )
#line 55
{
  memset(/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ, /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY, sizeof /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ);
  return SUCCESS;
}

# 57 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__CC2int(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5____nesc_unnamed4405 {
#line 57
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__compareControl(void )
{
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t x = { 
  .cm = 1, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__CC2int(x);
}

#line 105
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare(void )
{
  * (volatile uint16_t * )390U = /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__compareControl();
}

# 47 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__setControlAsCompare(void ){
#line 47
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare();
#line 47
}
#line 47
# 53 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Init__init(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents();
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__setControlAsCompare();
  return SUCCESS;
}

# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )30U &= ~(0x01 << 1);
}

# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__makeInput(void ){
#line 75
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__makeInput();
#line 75
}
#line 75
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__makeInput(void )
#line 52
{
#line 52
  /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__makeInput();
}

# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__SFD__makeInput(void ){
#line 44
  /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__makeInput();
#line 44
}
#line 44


inline static void CC2420TransmitP__CSN__makeOutput(void ){
#line 46
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput();
#line 46
}
#line 46
# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )34U &= ~(0x01 << 4);
}

# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__makeInput(void ){
#line 75
  /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__makeInput();
#line 75
}
#line 75
# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__makeInput(void )
#line 52
{
#line 52
  /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__makeInput();
}

# 44 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CCA__makeInput(void ){
#line 44
  /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__makeInput();
#line 44
}
#line 44
# 160 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__Init__init(void )
#line 160
{
  CC2420TransmitP__CCA__makeInput();
  CC2420TransmitP__CSN__makeOutput();
  CC2420TransmitP__SFD__makeInput();
  return SUCCESS;
}

# 151 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP__Init__init(void )
#line 151
{
  CC2420ReceiveP__m_p_rx_buf = &CC2420ReceiveP__m_rx_buf;
  return SUCCESS;
}

# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC__Init__init(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  RandomMlcgC__seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t UniqueSendP__Random__rand16(void ){
#line 52
  unsigned int __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline error_t UniqueSendP__Init__init(void )
#line 62
{
  UniqueSendP__localSendId = UniqueSendP__Random__rand16();
  return SUCCESS;
}

# 71 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline error_t UniqueReceiveP__Init__init(void )
#line 71
{
  int i;

#line 73
  for (i = 0; i < 4; i++) {
      UniqueReceiveP__receivedMessages[i].source = (am_addr_t )0xFFFF;
      UniqueReceiveP__receivedMessages[i].dsn = 0;
    }
  return SUCCESS;
}

# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ, /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

#line 55
static inline error_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__Init__init(void )
#line 55
{
  memset(/*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__resQ, /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY, sizeof /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__resQ);
  return SUCCESS;
}

# 123 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP__HplAdc12__stopConversion(void ){
#line 123
  HplAdc12P__HplAdc12__stopConversion();
#line 123
}
#line 123
# 92 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline error_t Msp430Adc12ImplP__Init__init(void )
{
  adc12ctl0_t ctl0;

#line 95
  Msp430Adc12ImplP__HplAdc12__stopConversion();
  ctl0 = Msp430Adc12ImplP__HplAdc12__getCtl0();
  ctl0.adc12tovie = 1;
  ctl0.adc12ovie = 1;
  Msp430Adc12ImplP__HplAdc12__setCtl0(ctl0);
  return SUCCESS;
}

# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void )
#line 61
{
  memset(/*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ, 0, sizeof /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ);
  return SUCCESS;
}

# 83 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
static inline error_t AdcStreamP__Init__init(void )
#line 83
{
  uint8_t i;

  for (i = 0; i != AdcStreamP__NSTREAM; i++) 
    AdcStreamP__bufferQueueEnd[i] = &AdcStreamP__bufferQueue[i];

  return SUCCESS;
}

# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = AdcStreamP__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, Msp430Adc12ImplP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC__2__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, UniqueReceiveP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, UniqueSendP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, RandomMlcgC__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420TransmitP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, StateImplP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420ControlP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 94 "SenseP.nc"
static inline void SenseP__Boot__booted(void )
{
  SenseP__AMControl__start();
}

# 60 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  SenseP__Boot__booted();
#line 60
}
#line 60
# 217 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/msp430hardware.h"
static inline  void __nesc_disable_interrupt(void )
{
   __asm volatile ("dint");
   __asm volatile ("nop");}

# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void )
#line 63
{
  return MSP430_POWER_LPM3;
}

# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Msp430ClockP__McuPowerOverride__lowestState();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 74 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void )
#line 74
{
  mcu_power_t pState = MSP430_POWER_LPM4;









  if ((((((
#line 77
  TA0CCTL0 & 0x0010 || 
  TA0CCTL1 & 0x0010) || 
  TA0CCTL2 & 0x0010) && (
  TA0CTL & (3 << 8)) == (2 << 8)) || (
  ME1 & ((1 << 7) | (1 << 6)) && U0TCTL & 0x20)) || (
  ME2 & ((1 << 5) | (1 << 4)) && U1TCTL & 0x20))


   || (U0CTLnr & 0x01 && I2CTCTLnr & 0x20 && 
  I2CDCTLnr & 0x20 && U0CTLnr & 0x04 && U0CTLnr & 0x20)) {


    pState = MSP430_POWER_LPM1;
    }


  if (ADC12CTL0 & 0x0010) {
      if (ADC12CTL1 & (2 << 3)) {

          if (ADC12CTL1 & (1 << 3)) {
            pState = MSP430_POWER_LPM1;
            }
          else {
#line 99
            pState = MSP430_POWER_ACTIVE;
            }
        }
      else {
#line 100
        if (ADC12CTL1 & 0x0400 && (TA0CTL & (3 << 8)) == (2 << 8)) {



            pState = MSP430_POWER_LPM1;
          }
        }
    }

  return pState;
}

# 205 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/msp430hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 205
{
  return m1 < m2 ? m1 : m2;
}

# 112 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/McuSleepC.nc"
static inline void McuSleepC__computePowerState(void )
#line 112
{
  McuSleepC__powerState = mcombine(McuSleepC__getPowerState(), 
  McuSleepC__McuPowerOverride__lowestState());
}

static inline void McuSleepC__McuSleep__sleep(void )
#line 117
{
  uint16_t temp;

#line 119
  if (McuSleepC__dirty) {
      McuSleepC__computePowerState();
    }

  temp = McuSleepC__msp430PowerBits[McuSleepC__powerState] | 0x0008;
   __asm volatile ("bis  %0, r2" :  : "m"(temp));

   __asm volatile ("" :  :  : "memory");
  __nesc_disable_interrupt();
}

# 76 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 76
  McuSleepC__McuSleep__sleep();
#line 76
}
#line 76
# 78 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 83
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 161
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 72 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 212 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__InterruptFIFOP__fired(void )
#line 212
{
  if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STARTED) {

      CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_LENGTH;
      CC2420ReceiveP__beginReceive();
    }
  else 



    {
      CC2420ReceiveP__m_missed_packets++;
    }
}

# 68 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__fired(void ){
#line 68
  CC2420ReceiveP__InterruptFIFOP__fired();
#line 68
}
#line 68
# 77 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired(void )
#line 77
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear();
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__fired();
}

# 72 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port10__fired(void ){
#line 72
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired();
#line 72
}
#line 72
# 103 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port11__clear(void )
#line 103
{
#line 103
  P1IFG &= ~(1 << 1);
}

#line 79
static inline void HplMsp430InterruptP__Port11__default__fired(void )
#line 79
{
#line 79
  HplMsp430InterruptP__Port11__clear();
}

# 72 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port11__fired(void ){
#line 72
  HplMsp430InterruptP__Port11__default__fired();
#line 72
}
#line 72
# 104 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port12__clear(void )
#line 104
{
#line 104
  P1IFG &= ~(1 << 2);
}

#line 80
static inline void HplMsp430InterruptP__Port12__default__fired(void )
#line 80
{
#line 80
  HplMsp430InterruptP__Port12__clear();
}

# 72 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port12__fired(void ){
#line 72
  HplMsp430InterruptP__Port12__default__fired();
#line 72
}
#line 72
# 105 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port13__clear(void )
#line 105
{
#line 105
  P1IFG &= ~(1 << 3);
}

#line 81
static inline void HplMsp430InterruptP__Port13__default__fired(void )
#line 81
{
#line 81
  HplMsp430InterruptP__Port13__clear();
}

# 72 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port13__fired(void ){
#line 72
  HplMsp430InterruptP__Port13__default__fired();
#line 72
}
#line 72
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP__startDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420CsmaP__startDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 215 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__CC2420Power__startOscillatorDone(void )
#line 215
{
  CC2420CsmaP__startDone_task__postTask();
}

# 76 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static void CC2420ControlP__CC2420Power__startOscillatorDone(void ){
#line 76
  CC2420CsmaP__CC2420Power__startOscillatorDone();
#line 76
}
#line 76
# 61 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP__InterruptCCA__disable(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 418 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__InterruptCCA__fired(void )
#line 418
{
  CC2420ControlP__m_state = CC2420ControlP__S_XOSC_STARTED;
  CC2420ControlP__InterruptCCA__disable();
  CC2420ControlP__IOCFG1__write(0);
  CC2420ControlP__writeId();
  CC2420ControlP__CSN__set();
  CC2420ControlP__CSN__clr();
  CC2420ControlP__CC2420Power__startOscillatorDone();
}

# 68 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__fired(void ){
#line 68
  CC2420ControlP__InterruptCCA__fired();
#line 68
}
#line 68
# 77 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired(void )
#line 77
{
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear();
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__fired();
}

# 72 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port14__fired(void ){
#line 72
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired();
#line 72
}
#line 72
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__readSensor__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__readSensor);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 315 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__InterruptDATA__fired(void )
#line 315
{
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__InterruptDATA__disable();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__readSensor__postTask();
}

# 68 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__Interrupt__fired(void ){
#line 68
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__InterruptDATA__fired();
#line 68
}
#line 68
# 107 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port15__clear(void )
#line 107
{
#line 107
  P1IFG &= ~(1 << 5);
}

# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__HplInterrupt__clear(void ){
#line 52
  HplMsp430InterruptP__Port15__clear();
#line 52
}
#line 52
# 77 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline void /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__HplInterrupt__fired(void )
#line 77
{
  /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__HplInterrupt__clear();
  /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__Interrupt__fired();
}

# 72 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port15__fired(void ){
#line 72
  /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__HplInterrupt__fired();
#line 72
}
#line 72
# 108 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port16__clear(void )
#line 108
{
#line 108
  P1IFG &= ~(1 << 6);
}

#line 84
static inline void HplMsp430InterruptP__Port16__default__fired(void )
#line 84
{
#line 84
  HplMsp430InterruptP__Port16__clear();
}

# 72 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port16__fired(void ){
#line 72
  HplMsp430InterruptP__Port16__default__fired();
#line 72
}
#line 72
# 109 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port17__clear(void )
#line 109
{
#line 109
  P1IFG &= ~(1 << 7);
}

#line 85
static inline void HplMsp430InterruptP__Port17__default__fired(void )
#line 85
{
#line 85
  HplMsp430InterruptP__Port17__clear();
}

# 72 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port17__fired(void ){
#line 72
  HplMsp430InterruptP__Port17__default__fired();
#line 72
}
#line 72
# 206 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port20__clear(void )
#line 206
{
#line 206
  P2IFG &= ~(1 << 0);
}

#line 182
static inline void HplMsp430InterruptP__Port20__default__fired(void )
#line 182
{
#line 182
  HplMsp430InterruptP__Port20__clear();
}

# 72 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port20__fired(void ){
#line 72
  HplMsp430InterruptP__Port20__default__fired();
#line 72
}
#line 72
# 207 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port21__clear(void )
#line 207
{
#line 207
  P2IFG &= ~(1 << 1);
}

#line 183
static inline void HplMsp430InterruptP__Port21__default__fired(void )
#line 183
{
#line 183
  HplMsp430InterruptP__Port21__clear();
}

# 72 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port21__fired(void ){
#line 72
  HplMsp430InterruptP__Port21__default__fired();
#line 72
}
#line 72
# 208 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port22__clear(void )
#line 208
{
#line 208
  P2IFG &= ~(1 << 2);
}

#line 184
static inline void HplMsp430InterruptP__Port22__default__fired(void )
#line 184
{
#line 184
  HplMsp430InterruptP__Port22__clear();
}

# 72 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port22__fired(void ){
#line 72
  HplMsp430InterruptP__Port22__default__fired();
#line 72
}
#line 72
# 209 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port23__clear(void )
#line 209
{
#line 209
  P2IFG &= ~(1 << 3);
}

#line 185
static inline void HplMsp430InterruptP__Port23__default__fired(void )
#line 185
{
#line 185
  HplMsp430InterruptP__Port23__clear();
}

# 72 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port23__fired(void ){
#line 72
  HplMsp430InterruptP__Port23__default__fired();
#line 72
}
#line 72
# 210 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port24__clear(void )
#line 210
{
#line 210
  P2IFG &= ~(1 << 4);
}

#line 186
static inline void HplMsp430InterruptP__Port24__default__fired(void )
#line 186
{
#line 186
  HplMsp430InterruptP__Port24__clear();
}

# 72 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port24__fired(void ){
#line 72
  HplMsp430InterruptP__Port24__default__fired();
#line 72
}
#line 72
# 211 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port25__clear(void )
#line 211
{
#line 211
  P2IFG &= ~(1 << 5);
}

#line 187
static inline void HplMsp430InterruptP__Port25__default__fired(void )
#line 187
{
#line 187
  HplMsp430InterruptP__Port25__clear();
}

# 72 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port25__fired(void ){
#line 72
  HplMsp430InterruptP__Port25__default__fired();
#line 72
}
#line 72
# 212 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port26__clear(void )
#line 212
{
#line 212
  P2IFG &= ~(1 << 6);
}

#line 188
static inline void HplMsp430InterruptP__Port26__default__fired(void )
#line 188
{
#line 188
  HplMsp430InterruptP__Port26__clear();
}

# 72 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port26__fired(void ){
#line 72
  HplMsp430InterruptP__Port26__default__fired();
#line 72
}
#line 72
# 213 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port27__clear(void )
#line 213
{
#line 213
  P2IFG &= ~(1 << 7);
}

#line 189
static inline void HplMsp430InterruptP__Port27__default__fired(void )
#line 189
{
#line 189
  HplMsp430InterruptP__Port27__clear();
}

# 72 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port27__fired(void ){
#line 72
  HplMsp430InterruptP__Port27__default__fired();
#line 72
}
#line 72
# 98 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
inline static uint8_t /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId(void ){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 349 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__disableRxIntr(void )
#line 349
{
  HplMsp430Usart0P__IE1 &= ~(1 << 6);
}

# 177 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableRxIntr(void ){
#line 177
  HplMsp430Usart0P__Usart__disableRxIntr();
#line 177
}
#line 177
# 232 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__rxDone(uint8_t data)
#line 232
{

  if (/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf) {
    /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos - 1] = data;
    }
  if (/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos < /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len) {
    /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__continueOp();
    }
  else 
#line 239
    {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableRxIntr();
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone();
    }
}

# 65 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(uint8_t id, uint8_t data)
#line 65
{
}

# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__rxDone(uint8_t arg_0x107a65800, uint8_t data){
#line 54
  switch (arg_0x107a65800) {
#line 54
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 54
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__rxDone(data);
#line 54
      break;
#line 54
    default:
#line 54
      /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(arg_0x107a65800, data);
#line 54
      break;
#line 54
    }
#line 54
}
#line 54
# 90 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
inline static bool /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(uint8_t data)
#line 54
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__rxDone(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId(), data);
    }
}

# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart0P__Interrupts__rxDone(uint8_t data){
#line 54
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(data);
#line 54
}
#line 54
# 55 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2C0P.nc"
static inline bool HplMsp430I2C0P__HplI2C__isI2C(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  {
    unsigned char __nesc_temp = 
#line 56
    HplMsp430I2C0P__U0CTL & 0x20 && HplMsp430I2C0P__U0CTL & 0x04 && HplMsp430I2C0P__U0CTL & 0x01;

#line 56
    return __nesc_temp;
  }
}

# 6 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2C.nc"
inline static bool HplMsp430Usart0P__HplI2C__isI2C(void ){
#line 6
  unsigned char __nesc_result;
#line 6

#line 6
  __nesc_result = HplMsp430I2C0P__HplI2C__isI2C();
#line 6

#line 6
  return __nesc_result;
#line 6
}
#line 6
# 66 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(uint8_t id)
#line 66
{
}

# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__fired(uint8_t arg_0x107a64620){
#line 39
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(arg_0x107a64620);
#line 39
}
#line 39
# 59 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired(void )
#line 59
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__fired(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId());
    }
}

# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
inline static void HplMsp430Usart0P__I2CInterrupts__fired(void ){
#line 39
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired();
#line 39
}
#line 39
# 250 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__txDone(void )
#line 250
{
}

# 64 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(uint8_t id)
#line 64
{
}

# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(uint8_t arg_0x107a65800){
#line 49
  switch (arg_0x107a65800) {
#line 49
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 49
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__txDone();
#line 49
      break;
#line 49
    default:
#line 49
      /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(arg_0x107a65800);
#line 49
      break;
#line 49
    }
#line 49
}
#line 49
# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone(void )
#line 49
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId());
    }
}

# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart0P__Interrupts__txDone(void ){
#line 49
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone();
#line 49
}
#line 49
# 161 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
static inline uint16_t *AdcP__SingleChannel__multipleDataReady(uint8_t client, 
uint16_t *buf, uint16_t numSamples)
{

  return 0;
}

# 645 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline uint16_t *Msp430Adc12ImplP__SingleChannel__default__multipleDataReady(uint8_t id, 
uint16_t *buf, uint16_t numSamples)
{
  return 0;
}

# 227 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static uint16_t * Msp430Adc12ImplP__SingleChannel__multipleDataReady(uint8_t arg_0x108274ac0, uint16_t * buffer, uint16_t numSamples){
#line 227
  unsigned int *__nesc_result;
#line 227

#line 227
  switch (arg_0x108274ac0) {
#line 227
    case /*SenseC.LightC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID:
#line 227
      __nesc_result = AdcP__SingleChannel__multipleDataReady(/*SenseC.LightC.AdcReadClientC*/AdcReadClientC__0__CLIENT, buffer, numSamples);
#line 227
      break;
#line 227
    case /*SenseC.LightC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1__ID:
#line 227
      __nesc_result = AdcStreamP__SingleChannel__multipleDataReady(/*SenseC.LightC.AdcReadStreamClientC*/AdcReadStreamClientC__0__RSCLIENT, buffer, numSamples);
#line 227
      break;
#line 227
    default:
#line 227
      __nesc_result = Msp430Adc12ImplP__SingleChannel__default__multipleDataReady(arg_0x108274ac0, buffer, numSamples);
#line 227
      break;
#line 227
    }
#line 227

#line 227
  return __nesc_result;
#line 227
}
#line 227
# 88 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline uint16_t HplAdc12P__HplAdc12__getMem(uint8_t i)
#line 88
{
  return ((int *)0x0140)[i];
}

# 89 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
inline static uint16_t Msp430Adc12ImplP__HplAdc12__getMem(uint8_t idx){
#line 89
  unsigned int __nesc_result;
#line 89

#line 89
  __nesc_result = HplAdc12P__HplAdc12__getMem(idx);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline  adc12memctl_t HplAdc12P__int2adc12memctl(uint8_t x)
#line 62
{
#line 62
  union __nesc_unnamed4406 {
#line 62
    uint8_t f;
#line 62
    adc12memctl_t t;
  } 
#line 62
  c = { .f = x };

#line 62
  return c.t;
}

#line 84
static inline adc12memctl_t HplAdc12P__HplAdc12__getMCtl(uint8_t i)
#line 84
{
  return HplAdc12P__int2adc12memctl(((char *)0x0080)[i]);
}

# 82 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
inline static adc12memctl_t Msp430Adc12ImplP__HplAdc12__getMCtl(uint8_t idx){
#line 82
  struct __nesc_unnamed4298 __nesc_result;
#line 82

#line 82
  __nesc_result = HplAdc12P__HplAdc12__getMCtl(idx);
#line 82

#line 82
  return __nesc_result;
#line 82
}
#line 82
# 651 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__MultiChannel__default__dataReady(uint8_t id, uint16_t *buffer, uint16_t numSamples)
#line 651
{
}

# 107 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
inline static void Msp430Adc12ImplP__MultiChannel__dataReady(uint8_t arg_0x1082710c8, uint16_t *buffer, uint16_t numSamples){
#line 107
    Msp430Adc12ImplP__MultiChannel__default__dataReady(arg_0x1082710c8, buffer, numSamples);
#line 107
}
#line 107
# 640 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline error_t Msp430Adc12ImplP__SingleChannel__default__singleDataReady(uint8_t id, uint16_t data)
{
  return FAIL;
}

# 206 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t Msp430Adc12ImplP__SingleChannel__singleDataReady(uint8_t arg_0x108274ac0, uint16_t data){
#line 206
  unsigned char __nesc_result;
#line 206

#line 206
  switch (arg_0x108274ac0) {
#line 206
    case /*SenseC.LightC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID:
#line 206
      __nesc_result = AdcP__SingleChannel__singleDataReady(/*SenseC.LightC.AdcReadClientC*/AdcReadClientC__0__CLIENT, data);
#line 206
      break;
#line 206
    case /*SenseC.LightC.AdcReadStreamClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__1__ID:
#line 206
      __nesc_result = AdcStreamP__SingleChannel__singleDataReady(/*SenseC.LightC.AdcReadStreamClientC*/AdcReadStreamClientC__0__RSCLIENT, data);
#line 206
      break;
#line 206
    default:
#line 206
      __nesc_result = Msp430Adc12ImplP__SingleChannel__default__singleDataReady(arg_0x108274ac0, data);
#line 206
      break;
#line 206
    }
#line 206

#line 206
  return __nesc_result;
#line 206
}
#line 206
# 654 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__Overflow__default__conversionTimeOverflow(uint8_t id)
#line 654
{
}

# 54 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
inline static void Msp430Adc12ImplP__Overflow__conversionTimeOverflow(uint8_t arg_0x108270020){
#line 54
    Msp430Adc12ImplP__Overflow__default__conversionTimeOverflow(arg_0x108270020);
#line 54
}
#line 54
# 653 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__Overflow__default__memOverflow(uint8_t id)
#line 653
{
}

# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
inline static void Msp430Adc12ImplP__Overflow__memOverflow(uint8_t arg_0x108270020){
#line 49
    Msp430Adc12ImplP__Overflow__default__memOverflow(arg_0x108270020);
#line 49
}
#line 49
# 544 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__HplAdc12__conversionDone(uint16_t iv)
{
  bool overflow = FALSE;
  uint16_t *resultBuffer;

  if (iv <= 4) {
      if (iv == 2) {
        Msp430Adc12ImplP__Overflow__memOverflow(Msp430Adc12ImplP__clientID);
        }
      else {
#line 553
        Msp430Adc12ImplP__Overflow__conversionTimeOverflow(Msp430Adc12ImplP__clientID);
        }
      if (! Msp430Adc12ImplP__HplAdc12__getCtl0().msc) {
        overflow = TRUE;
        }
    }
#line 558
  switch (Msp430Adc12ImplP__state & Msp430Adc12ImplP__CONVERSION_MODE_MASK) 
    {
      case Msp430Adc12ImplP__SINGLE_DATA: 
        Msp430Adc12ImplP__stopConversion();
      Msp430Adc12ImplP__SingleChannel__singleDataReady(Msp430Adc12ImplP__clientID, Msp430Adc12ImplP__HplAdc12__getMem(0));
      break;
      case Msp430Adc12ImplP__SINGLE_DATA_REPEAT: 
        {
          error_t repeatContinue;

#line 567
          repeatContinue = Msp430Adc12ImplP__SingleChannel__singleDataReady(Msp430Adc12ImplP__clientID, 
          Msp430Adc12ImplP__HplAdc12__getMem(0));
          if (repeatContinue != SUCCESS) {
            Msp430Adc12ImplP__stopConversion();
            }
#line 571
          break;
        }

      case Msp430Adc12ImplP__MULTI_CHANNEL: 
        {
          uint16_t i = 0;
#line 576
          uint16_t k;

#line 577
          resultBuffer = Msp430Adc12ImplP__resultBufferStart + Msp430Adc12ImplP__resultBufferIndex;
          do {
              * resultBuffer++ = Msp430Adc12ImplP__HplAdc12__getMem(i);
            }
          while (
#line 580
          ++i < Msp430Adc12ImplP__numChannels);
          Msp430Adc12ImplP__resultBufferIndex += Msp430Adc12ImplP__numChannels;
          if (overflow || Msp430Adc12ImplP__resultBufferLength == Msp430Adc12ImplP__resultBufferIndex) {
              Msp430Adc12ImplP__stopConversion();
              resultBuffer -= Msp430Adc12ImplP__resultBufferIndex;
              k = Msp430Adc12ImplP__resultBufferIndex - Msp430Adc12ImplP__numChannels;
              Msp430Adc12ImplP__resultBufferIndex = 0;
              Msp430Adc12ImplP__MultiChannel__dataReady(Msp430Adc12ImplP__clientID, resultBuffer, 
              overflow ? k : Msp430Adc12ImplP__resultBufferLength);
            }
        }
      break;
      case Msp430Adc12ImplP__MULTIPLE_DATA: 
        {
          uint16_t i = 0;
#line 594
          uint16_t length;
#line 594
          uint16_t k;

#line 595
          resultBuffer = Msp430Adc12ImplP__resultBufferStart + Msp430Adc12ImplP__resultBufferIndex;
          if (Msp430Adc12ImplP__resultBufferLength - Msp430Adc12ImplP__resultBufferIndex > 16) {
            length = 16;
            }
          else {
#line 599
            length = Msp430Adc12ImplP__resultBufferLength - Msp430Adc12ImplP__resultBufferIndex;
            }
#line 600
          do {
              * resultBuffer++ = Msp430Adc12ImplP__HplAdc12__getMem(i);
            }
          while (
#line 602
          ++i < length);
          Msp430Adc12ImplP__resultBufferIndex += length;
          if (overflow || Msp430Adc12ImplP__resultBufferLength == Msp430Adc12ImplP__resultBufferIndex) {
              Msp430Adc12ImplP__stopConversion();
              resultBuffer -= Msp430Adc12ImplP__resultBufferIndex;
              k = Msp430Adc12ImplP__resultBufferIndex - length;
              Msp430Adc12ImplP__resultBufferIndex = 0;
              Msp430Adc12ImplP__SingleChannel__multipleDataReady(Msp430Adc12ImplP__clientID, resultBuffer, 
              overflow ? k : Msp430Adc12ImplP__resultBufferLength);
            }
          else {
#line 611
            if (Msp430Adc12ImplP__resultBufferLength - Msp430Adc12ImplP__resultBufferIndex > 15) {
              return;
              }
            else 
#line 613
              {

                adc12memctl_t memctl = Msp430Adc12ImplP__HplAdc12__getMCtl(0);

#line 616
                memctl.eos = 1;
                Msp430Adc12ImplP__HplAdc12__setMCtl(Msp430Adc12ImplP__resultBufferLength - Msp430Adc12ImplP__resultBufferIndex, memctl);
              }
            }
        }
#line 620
      break;
      case Msp430Adc12ImplP__MULTIPLE_DATA_REPEAT: 
        {
          uint8_t i = 0;

#line 624
          resultBuffer = Msp430Adc12ImplP__resultBufferStart;
          do {
              * resultBuffer++ = Msp430Adc12ImplP__HplAdc12__getMem(i);
            }
          while (
#line 627
          ++i < Msp430Adc12ImplP__resultBufferLength);

          Msp430Adc12ImplP__resultBufferStart = Msp430Adc12ImplP__SingleChannel__multipleDataReady(Msp430Adc12ImplP__clientID, 
          resultBuffer - Msp430Adc12ImplP__resultBufferLength, 
          overflow ? 0 : Msp430Adc12ImplP__resultBufferLength);
          if (!Msp430Adc12ImplP__resultBufferStart) {
            Msp430Adc12ImplP__stopConversion();
            }
#line 634
          break;
        }
    }
}

# 212 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline void Msp430RefVoltGeneratorP__HplAdc12__conversionDone(uint16_t iv)
#line 212
{
}

# 112 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
inline static void HplAdc12P__HplAdc12__conversionDone(uint16_t iv){
#line 112
  Msp430RefVoltGeneratorP__HplAdc12__conversionDone(iv);
#line 112
  Msp430Adc12ImplP__HplAdc12__conversionDone(iv);
#line 112
}
#line 112
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )55U &= ~(0x01 << 0);
}

# 96 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port60__selectIOFunc(void ){
#line 96
  /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__selectIOFunc();
#line 96
}
#line 96
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )55U &= ~(0x01 << 1);
}

# 96 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port61__selectIOFunc(void ){
#line 96
  /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__selectIOFunc();
#line 96
}
#line 96
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )55U &= ~(0x01 << 2);
}

# 96 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port62__selectIOFunc(void ){
#line 96
  /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__selectIOFunc();
#line 96
}
#line 96
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )55U &= ~(0x01 << 3);
}

# 96 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port63__selectIOFunc(void ){
#line 96
  /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__selectIOFunc();
#line 96
}
#line 96
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )55U &= ~(0x01 << 4);
}

# 96 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port64__selectIOFunc(void ){
#line 96
  /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__selectIOFunc();
#line 96
}
#line 96
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )55U &= ~(0x01 << 5);
}

# 96 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port65__selectIOFunc(void ){
#line 96
  /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__selectIOFunc();
#line 96
}
#line 96
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )55U &= ~(0x01 << 6);
}

# 96 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port66__selectIOFunc(void ){
#line 96
  /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__selectIOFunc();
#line 96
}
#line 96
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )55U &= ~(0x01 << 7);
}

# 96 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port67__selectIOFunc(void ){
#line 96
  /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__selectIOFunc();
#line 96
}
#line 96
# 95 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline void HplAdc12P__HplAdc12__resetIFGs(void )
#line 95
{
  HplAdc12P__ADC12IV = 0;
  HplAdc12P__ADC12IFG = 0;
}

# 106 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP__HplAdc12__resetIFGs(void ){
#line 106
  HplAdc12P__HplAdc12__resetIFGs();
#line 106
}
#line 106
# 67 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t AdcStreamP__bufferDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(AdcStreamP__bufferDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t AdcP__readDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(AdcP__readDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 178 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
static inline void AdcP__ReadNow__default__readDone(uint8_t client, error_t result, uint16_t val)
#line 178
{
}

# 66 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/ReadNow.nc"
inline static void AdcP__ReadNow__readDone(uint8_t arg_0x1082115f8, error_t result, AdcP__ReadNow__val_t val){
#line 66
    AdcP__ReadNow__default__readDone(arg_0x1082115f8, result, val);
#line 66
}
#line 66
# 237 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/msp430hardware.h"
  __nesc_atomic_t __nesc_atomic_start(void )
{
  __nesc_atomic_t result = (({
#line 239
    uint16_t __x;

#line 239
     __asm volatile ("mov	r2, %0" : "=r"((uint16_t )__x));__x;
  }
  )
#line 239
   & 0x0008) != 0;

#line 240
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}

  void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts)
{
   __asm volatile ("" :  :  : "memory");
  if (reenable_interrupts) {
    __nesc_enable_interrupt();
    }
}

# 11 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(12)))  void sig_TIMERA0_VECTOR(void )
#line 11
{
#line 11
  Msp430TimerCommonP__VectorTimerA0__fired();
}

# 180 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired();
    }
}

#line 180
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired();
    }
}

#line 180
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(/*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired();
    }
}

# 12 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(10)))  void sig_TIMERA1_VECTOR(void )
#line 12
{
#line 12
  Msp430TimerCommonP__VectorTimerA1__fired();
}

#line 13
__attribute((wakeup)) __attribute((interrupt(26)))  void sig_TIMERB0_VECTOR(void )
#line 13
{
#line 13
  Msp430TimerCommonP__VectorTimerB0__fired();
}

# 146 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(uint8_t n)
{
}

# 39 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(uint8_t arg_0x106f8ec98){
#line 39
  switch (arg_0x106f8ec98) {
#line 39
    case 0:
#line 39
      /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired();
#line 39
      break;
#line 39
    case 1:
#line 39
      /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired();
#line 39
      break;
#line 39
    case 2:
#line 39
      /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired();
#line 39
      break;
#line 39
    case 3:
#line 39
      /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired();
#line 39
      break;
#line 39
    case 4:
#line 39
      /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired();
#line 39
      break;
#line 39
    case 5:
#line 39
      /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired();
#line 39
      break;
#line 39
    case 6:
#line 39
      /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired();
#line 39
      break;
#line 39
    case 7:
#line 39
      /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired();
#line 39
      break;
#line 39
    default:
#line 39
      /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(arg_0x106f8ec98);
#line 39
      break;
#line 39
    }
#line 39
}
#line 39
# 170 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
#line 172
      {
        unsigned char __nesc_temp = 
#line 172
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 172
          __nesc_atomic_end(__nesc_atomic); 
#line 172
          return __nesc_temp;
        }
      }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
}

# 107 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__set_alarm(void )
{
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type now = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__get();
#line 109
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type expires;
#line 109
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type remaining;




  expires = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt;


  remaining = (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type )(expires - now);


  if (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 <= now) 
    {
      if (expires >= /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__MAX_DELAY) 
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 = now + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__MAX_DELAY;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt = remaining - /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__MAX_DELAY;
      remaining = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__MAX_DELAY;
    }
  else 
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 += /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt = 0;
    }
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt((/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_size_type )now << 5, 
  (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_size_type )remaining << 5);
}

# 80 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__get(void )
{
  /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMilli32C.Transform*/TransformCounterC__0__upper_count_type high = /*CounterMilli32C.Transform*/TransformCounterC__0__m_upper;
      /*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type low = /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__get();

#line 87
      if (/*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__get();
        }
      {
        /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type high_to = high;
        /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type low_to = low >> /*CounterMilli32C.Transform*/TransformCounterC__0__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*CounterMilli32C.Transform*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 62 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void )
{




  if (1) {
      /* atomic removed: atomic calls only */
#line 69
      {
        uint16_t t0;
        uint16_t t1 = * (volatile uint16_t * )400U;

#line 72
        do {
#line 72
            t0 = t1;
#line 72
            t1 = * (volatile uint16_t * )400U;
          }
        while (
#line 72
        t0 != t1);
        {
          unsigned int __nesc_temp = 
#line 73
          t1;

#line 73
          return __nesc_temp;
        }
      }
    }
  else 
#line 76
    {
      return * (volatile uint16_t * )400U;
    }
}

# 80 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static /*Counter32khz32C.Transform*/TransformCounterC__1__to_size_type /*Counter32khz32C.Transform*/TransformCounterC__1__Counter__get(void )
{
  /*Counter32khz32C.Transform*/TransformCounterC__1__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform*/TransformCounterC__1__upper_count_type high = /*Counter32khz32C.Transform*/TransformCounterC__1__m_upper;
      /*Counter32khz32C.Transform*/TransformCounterC__1__from_size_type low = /*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__get();

#line 87
      if (/*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__get();
        }
      {
        /*Counter32khz32C.Transform*/TransformCounterC__1__to_size_type high_to = high;
        /*Counter32khz32C.Transform*/TransformCounterC__1__to_size_type low_to = low >> /*Counter32khz32C.Transform*/TransformCounterC__1__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*Counter32khz32C.Transform*/TransformCounterC__1__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 49 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(uint8_t mode)
#line 49
{
  /* atomic removed: atomic calls only */
#line 50
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectModuleFunc();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__setControlAsCapture(mode);
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__enableEvents();
  }
  return SUCCESS;
}

# 57 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )29U &= ~(0x01 << 2);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 260 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Ram__write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len)
#line 262
{

  cc2420_status_t status = 0;
  uint8_t tmpLen = len;
  uint8_t * tmpData = (uint8_t * )data;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 268
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 270
            status;

            {
#line 270
              __nesc_atomic_end(__nesc_atomic); 
#line 270
              return __nesc_temp;
            }
          }
        }
    }
#line 274
    __nesc_atomic_end(__nesc_atomic); }
#line 274
  addr += offset;

  status = CC2420SpiP__SpiByte__write(addr | 0x80);
  CC2420SpiP__SpiByte__write((addr >> 1) & 0xc0);
  for (; len; len--) {
      CC2420SpiP__SpiByte__write(tmpData[tmpLen - len]);
    }

  return status;
}

# 133 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/StateImplP.nc"
static bool StateImplP__State__isState(uint8_t id, uint8_t myState)
#line 133
{
  bool isState;

#line 135
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 135
    isState = StateImplP__state[id] == myState;
#line 135
    __nesc_atomic_end(__nesc_atomic); }
  return isState;
}

# 134 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiByte__write(uint8_t tx)
#line 134
{
  uint8_t byte;


  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(tx);
  while (!/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__isRxIntrPending()) ;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__clrRxIntr();
  byte = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__rx();

  return byte;
}

# 56 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set(void )
#line 56
{
#line 56
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    * (volatile uint8_t * )29U |= 0x01 << 2;
#line 56
    __nesc_atomic_end(__nesc_atomic); }
}

# 149 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__release(uint8_t id)
#line 149
{
  uint8_t i;

#line 151
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 151
    {
      if (CC2420SpiP__m_holder != id) {
          {
            unsigned char __nesc_temp = 
#line 153
            FAIL;

            {
#line 153
              __nesc_atomic_end(__nesc_atomic); 
#line 153
              return __nesc_temp;
            }
          }
        }
#line 156
      CC2420SpiP__m_holder = CC2420SpiP__NO_HOLDER;
      if (!CC2420SpiP__m_requests) {
          CC2420SpiP__WorkingState__toIdle();
          CC2420SpiP__attemptRelease();
        }
      else {
          for (i = CC2420SpiP__m_holder + 1; ; i++) {
              i %= CC2420SpiP__RESOURCE_COUNT;

              if (CC2420SpiP__m_requests & (1 << i)) {
                  CC2420SpiP__m_holder = i;
                  CC2420SpiP__m_requests &= ~(1 << i);
                  CC2420SpiP__grant__postTask();
                  {
                    unsigned char __nesc_temp = 
#line 169
                    SUCCESS;

                    {
#line 169
                      __nesc_atomic_end(__nesc_atomic); 
#line 169
                      return __nesc_temp;
                    }
                  }
                }
            }
        }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
#line 175
  return SUCCESS;
}

#line 339
static error_t CC2420SpiP__attemptRelease(void )
#line 339
{


  if ((
#line 340
  CC2420SpiP__m_requests > 0
   || CC2420SpiP__m_holder != CC2420SpiP__NO_HOLDER)
   || !CC2420SpiP__WorkingState__isIdle()) {
      return FAIL;
    }
  /* atomic removed: atomic calls only */
  CC2420SpiP__release = TRUE;
  CC2420SpiP__ChipSpiResource__releasing();
  /* atomic removed: atomic calls only */
#line 348
  {
    if (CC2420SpiP__release) {
        CC2420SpiP__SpiResource__release();
        {
          unsigned char __nesc_temp = 
#line 351
          SUCCESS;

#line 351
          return __nesc_temp;
        }
      }
  }
  return EBUSY;
}

# 247 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static void HplMsp430Usart0P__Usart__disableSpi(void )
#line 247
{
  /* atomic removed: atomic calls only */
#line 248
  {
    HplMsp430Usart0P__ME1 &= ~(1 << 6);
    HplMsp430Usart0P__SIMO__selectIOFunc();
    HplMsp430Usart0P__SOMI__selectIOFunc();
    HplMsp430Usart0P__UCLK__selectIOFunc();
  }
}

# 147 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 = t0;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt = dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__set_alarm();
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}

#line 107
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__set_alarm(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__get();
#line 109
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type expires;
#line 109
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type remaining;




  expires = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt;


  remaining = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type )(expires - now);


  if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 <= now) 
    {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__MAX_DELAY) 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 = now + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__MAX_DELAY;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt = remaining - /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__MAX_DELAY;
      remaining = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__MAX_DELAY;
    }
  else 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 += /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt = 0;
    }
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__startAt((/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__from_size_type )now << 0, 
  (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__from_size_type )remaining << 0);
}

# 844 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP__signalDone(error_t err)
#line 844
{
  /* atomic removed: atomic calls only */
#line 845
  CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
  CC2420TransmitP__abortSpiRelease = FALSE;
  CC2420TransmitP__ChipSpiResource__attemptRelease();
  CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, err);
}

# 137 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static void CC2420PacketP__PacketTimeStamp32khz__clear(message_t *msg)
{
  __nesc_hton_int8(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timesync.nxdata, FALSE);
  __nesc_hton_uint32(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timestamp.nxdata, CC2420_INVALID_TIMESTAMP);
}

# 782 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP__congestionBackoff(void )
#line 782
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 783
    {
      CC2420TransmitP__RadioBackoff__requestCongestionBackoff(CC2420TransmitP__m_msg);
      CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__myCongestionBackoff);
    }
#line 786
    __nesc_atomic_end(__nesc_atomic); }
}

# 69 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC__Random__rand32(void )
#line 69
{
  uint32_t mlcg;
#line 70
  uint32_t p;
#line 70
  uint32_t q;
  uint64_t tmpseed;

  /* atomic removed: atomic calls only */
#line 73
  {
    tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC__seed;
    q = tmpseed;
    q = q >> 1;
    p = tmpseed >> 32;
    mlcg = p + q;
    if (mlcg & 0x80000000) {
        mlcg = mlcg & 0x7FFFFFFF;
        mlcg++;
      }
    RandomMlcgC__seed = mlcg;
  }
  return mlcg;
}

# 789 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static error_t CC2420TransmitP__acquireSpiResource(void )
#line 789
{
  error_t error = CC2420TransmitP__SpiResource__immediateRequest();

#line 791
  if (error != SUCCESS) {
      CC2420TransmitP__SpiResource__request();
    }
  return error;
}

# 126 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__immediateRequest(uint8_t id)
#line 126
{
  error_t error;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 129
    {
      if (CC2420SpiP__WorkingState__requestState(CC2420SpiP__S_BUSY) != SUCCESS) {
          {
            unsigned char __nesc_temp = 
#line 131
            EBUSY;

            {
#line 131
              __nesc_atomic_end(__nesc_atomic); 
#line 131
              return __nesc_temp;
            }
          }
        }
      if (CC2420SpiP__SpiResource__isOwner()) {
          CC2420SpiP__m_holder = id;
          error = SUCCESS;
        }
      else {
#line 139
        if ((error = CC2420SpiP__SpiResource__immediateRequest()) == SUCCESS) {
            CC2420SpiP__m_holder = id;
          }
        else {
            CC2420SpiP__WorkingState__toIdle();
          }
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
#line 146
  return error;
}

# 96 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/StateImplP.nc"
static error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState)
#line 96
{
  error_t returnVal = FAIL;

#line 98
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 98
    {
      if (reqState == StateImplP__S_IDLE || StateImplP__state[id] == StateImplP__S_IDLE) {
          StateImplP__state[id] = reqState;
          returnVal = SUCCESS;
        }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return returnVal;
}

# 177 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(uint8_t id)
#line 177
{
  /* atomic removed: atomic calls only */
#line 178
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId == id && /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY) {
        unsigned char __nesc_temp = 
#line 179
        TRUE;

#line 179
        return __nesc_temp;
      }
    else 
#line 180
      {
        unsigned char __nesc_temp = 
#line 180
        FALSE;

#line 180
        return __nesc_temp;
      }
  }
}

#line 133
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void )
#line 133
{
  /* atomic removed: atomic calls only */
#line 134
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id) {
        if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_GRANTING) {
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask();
            {
              unsigned char __nesc_temp = 
#line 138
              SUCCESS;

#line 138
              return __nesc_temp;
            }
          }
        else {
#line 140
          if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_IMM_GRANTING) {
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId;
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY;
              {
                unsigned char __nesc_temp = 
#line 143
                SUCCESS;

#line 143
                return __nesc_temp;
              }
            }
          }
      }
  }
#line 147
  return FAIL;
}

# 265 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static void HplMsp430Usart0P__Usart__setModeSpi(msp430_spi_union_config_t *config)
#line 265
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 267
    {
      HplMsp430Usart0P__Usart__resetUsart(TRUE);
      HplMsp430Usart0P__HplI2C__clearModeI2C();
      HplMsp430Usart0P__Usart__disableUart();
      HplMsp430Usart0P__configSpi(config);
      HplMsp430Usart0P__Usart__enableSpi();
      HplMsp430Usart0P__Usart__resetUsart(FALSE);
      HplMsp430Usart0P__Usart__clrIntr();
      HplMsp430Usart0P__Usart__disableIntr();
    }
#line 276
    __nesc_atomic_end(__nesc_atomic); }
  return;
}

# 107 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__request(uint8_t id)
#line 107
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (CC2420SpiP__WorkingState__requestState(CC2420SpiP__S_BUSY) == SUCCESS) {
          CC2420SpiP__m_holder = id;
          if (CC2420SpiP__SpiResource__isOwner()) {
              CC2420SpiP__grant__postTask();
            }
          else {
              CC2420SpiP__SpiResource__request();
            }
        }
      else {
          CC2420SpiP__m_requests |= 1 << id;
        }
    }
#line 122
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 737 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP__attemptSend(void )
#line 737
{
  uint8_t status;
  bool congestion = TRUE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 741
    {
      if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
          CC2420TransmitP__SFLUSHTX__strobe();
          CC2420TransmitP__releaseSpiResource();
          CC2420TransmitP__CSN__set();
          CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
          CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, ECANCEL);
          {
#line 748
            __nesc_atomic_end(__nesc_atomic); 
#line 748
            return;
          }
        }





      CC2420TransmitP__CSN__clr();
      status = CC2420TransmitP__m_cca ? CC2420TransmitP__STXONCCA__strobe() : CC2420TransmitP__STXON__strobe();
      if (!(status & CC2420_STATUS_TX_ACTIVE)) {
          status = CC2420TransmitP__SNOP__strobe();
          if (status & CC2420_STATUS_TX_ACTIVE) {
              congestion = FALSE;
            }
        }

      CC2420TransmitP__m_state = congestion ? CC2420TransmitP__S_SAMPLE_CCA : CC2420TransmitP__S_SFD;
      CC2420TransmitP__CSN__set();
    }
#line 767
    __nesc_atomic_end(__nesc_atomic); }

  if (congestion) {
      CC2420TransmitP__totalCcaChecks = 0;
      CC2420TransmitP__releaseSpiResource();
      CC2420TransmitP__congestionBackoff();
    }
  else 
#line 773
    {
      CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__CC2420_ABORT_PERIOD);
    }
}

# 318 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Strobe__strobe(uint8_t addr)
#line 318
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 319
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 321
            0;

            {
#line 321
              __nesc_atomic_end(__nesc_atomic); 
#line 321
              return __nesc_temp;
            }
          }
        }
    }
#line 325
    __nesc_atomic_end(__nesc_atomic); }
#line 325
  return CC2420SpiP__SpiByte__write(addr);
}

# 57 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )29U &= ~(0x01 << 6);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

#line 56
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__set(void )
#line 56
{
#line 56
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    * (volatile uint8_t * )29U |= 0x01 << 6;
#line 56
    __nesc_atomic_end(__nesc_atomic); }
}

# 394 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static error_t Msp430Adc12ImplP__SingleChannel__getData(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 396
    {
      if (Msp430Adc12ImplP__ADCArbiterInfo__userId() == id) {
          if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__MULTIPLE_DATA_REPEAT && !Msp430Adc12ImplP__resultBufferStart) 
            {
              unsigned char __nesc_temp = 
#line 399
              EINVAL;

              {
#line 399
                __nesc_atomic_end(__nesc_atomic); 
#line 399
                return __nesc_temp;
              }
            }
#line 400
          if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__ADC_BUSY) 
            {
              unsigned char __nesc_temp = 
#line 401
              EBUSY;

              {
#line 401
                __nesc_atomic_end(__nesc_atomic); 
#line 401
                return __nesc_temp;
              }
            }
#line 402
          Msp430Adc12ImplP__state |= Msp430Adc12ImplP__ADC_BUSY;
          Msp430Adc12ImplP__clientID = id;
          Msp430Adc12ImplP__configureAdcPin(Msp430Adc12ImplP__HplAdc12__getMCtl(0).inch);
          Msp430Adc12ImplP__HplAdc12__startConversion();
          if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__USE_TIMERA) {
            Msp430Adc12ImplP__startTimerA();
            }
#line 408
          {
            unsigned char __nesc_temp = 
#line 408
            SUCCESS;

            {
#line 408
              __nesc_atomic_end(__nesc_atomic); 
#line 408
              return __nesc_temp;
            }
          }
        }
    }
#line 412
    __nesc_atomic_end(__nesc_atomic); }
#line 411
  return FAIL;
}

# 137 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static uint8_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__userId(void )
#line 137
{
  /* atomic removed: atomic calls only */
#line 138
  {
    if (/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state != /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY) 
      {
        unsigned char __nesc_temp = 
#line 140
        /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;

#line 140
        return __nesc_temp;
      }
#line 141
    {
      unsigned char __nesc_temp = 
#line 141
      /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId;

#line 141
      return __nesc_temp;
    }
  }
}

# 91 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setMode(int mode)
{
  * (volatile uint16_t * )352U = (* (volatile uint16_t * )352U & ~(0x0020 | 0x0010)) | ((mode << 4) & (0x0020 | 0x0010));
}

# 107 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static void /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__set_alarm(void )
{
  /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__to_size_type now = /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__Counter__get();
#line 109
  /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__to_size_type expires;
#line 109
  /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__to_size_type remaining;




  expires = /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__m_t0 + /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__m_dt;


  remaining = (/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__to_size_type )(expires - now);


  if (/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__m_t0 <= now) 
    {
      if (expires >= /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__MAX_DELAY) 
    {
      /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__m_t0 = now + /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__MAX_DELAY;
      /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__m_dt = remaining - /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__MAX_DELAY;
      remaining = /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__MAX_DELAY;
    }
  else 
    {
      /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__m_t0 += /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__m_dt;
      /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__m_dt = 0;
    }
  /*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__AlarmFrom__startAt((/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__from_size_type )now << 5, 
  (/*WireAdcStreamP.Alarm.Transform*/TransformAlarmC__2__from_size_type )remaining << 5);
}

# 14 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(24)))  void sig_TIMERB1_VECTOR(void )
#line 14
{
#line 14
  Msp430TimerCommonP__VectorTimerB1__fired();
}

# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/RealMainP.nc"
  int main(void )
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 71
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 175 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc"
static void Msp430ClockP__set_dco_calib(int calib)
{
  BCSCTL1 = (BCSCTL1 & ~0x07) | ((calib >> 8) & 0x07);
  DCOCTL = calib & 0xff;
}

# 16 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/platforms/telosb/MotePlatformC.nc"
static void MotePlatformC__TOSH_FLASH_M25P_DP_bit(bool set)
#line 16
{
  if (set) {
    TOSH_SET_SIMO0_PIN();
    }
  else {
#line 20
    TOSH_CLR_SIMO0_PIN();
    }
#line 21
  TOSH_SET_UCLK0_PIN();
  TOSH_CLR_UCLK0_PIN();
}

# 134 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 138
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 142
          FALSE;

#line 142
          return __nesc_temp;
        }
      }
  }
#line 145
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 175
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x106de4d50){
#line 75
  switch (arg_0x106de4d50) {
#line 75
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    case CC2420CsmaP__startDone_task:
#line 75
      CC2420CsmaP__startDone_task__runTask();
#line 75
      break;
#line 75
    case CC2420CsmaP__stopDone_task:
#line 75
      CC2420CsmaP__stopDone_task__runTask();
#line 75
      break;
#line 75
    case CC2420CsmaP__sendDone_task:
#line 75
      CC2420CsmaP__sendDone_task__runTask();
#line 75
      break;
#line 75
    case CC2420ControlP__sync:
#line 75
      CC2420ControlP__sync__runTask();
#line 75
      break;
#line 75
    case CC2420ControlP__syncDone:
#line 75
      CC2420ControlP__syncDone__runTask();
#line 75
      break;
#line 75
    case CC2420SpiP__grant:
#line 75
      CC2420SpiP__grant__runTask();
#line 75
      break;
#line 75
    case /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task:
#line 75
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__runTask();
#line 75
      break;
#line 75
    case /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask:
#line 75
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case CC2420ReceiveP__receiveDone_task:
#line 75
      CC2420ReceiveP__receiveDone_task__runTask();
#line 75
      break;
#line 75
    case CC2420TinyosNetworkP__grantTask:
#line 75
      CC2420TinyosNetworkP__grantTask__runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask();
#line 75
      break;
#line 75
    case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__readSensor:
#line 75
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__readSensor__runTask();
#line 75
      break;
#line 75
    case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__signalStatusDone:
#line 75
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__signalStatusDone__runTask();
#line 75
      break;
#line 75
    case HplSensirionSht11P__stopTask:
#line 75
      HplSensirionSht11P__stopTask__runTask();
#line 75
      break;
#line 75
    case /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__grantedTask:
#line 75
      /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__grantedTask__runTask();
#line 75
      break;
#line 75
    case /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__startTask:
#line 75
      /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__startTask__runTask();
#line 75
      break;
#line 75
    case /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__stopTask:
#line 75
      /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP__0__stopTask__runTask();
#line 75
      break;
#line 75
    case AdcP__readDone:
#line 75
      AdcP__readDone__runTask();
#line 75
      break;
#line 75
    case /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask:
#line 75
      /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case Msp430RefVoltArbiterImplP__switchOff:
#line 75
      Msp430RefVoltArbiterImplP__switchOff__runTask();
#line 75
      break;
#line 75
    case AdcStreamP__readStreamDone:
#line 75
      AdcStreamP__readStreamDone__runTask();
#line 75
      break;
#line 75
    case AdcStreamP__readStreamFail:
#line 75
      AdcStreamP__readStreamFail__runTask();
#line 75
      break;
#line 75
    case AdcStreamP__bufferDone:
#line 75
      AdcStreamP__bufferDone__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x106de4d50);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 116 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static error_t Msp430RefVoltArbiterImplP__ClientResource__release(uint8_t client)
{
  error_t error;

#line 119
  if (Msp430RefVoltArbiterImplP__syncOwner == client) {
    Msp430RefVoltArbiterImplP__switchOff__postTask();
    }
#line 121
  error = Msp430RefVoltArbiterImplP__AdcResource__release(client);
#line 133
  return error;
}

# 97 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id)
#line 97
{
  bool released = FALSE;

#line 99
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      if (/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY && /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId == id) {
          if (/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty() == FALSE) {
              /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
              /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue();
              /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
              /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
            }
          else {
              /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
              /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE;
            }
          released = TRUE;
        }
    }
#line 113
    __nesc_atomic_end(__nesc_atomic); }
  if (released == TRUE) {
      /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
}

# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id)
#line 75
{
  return /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] & (1 << id % 8);
}

# 144 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 235 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static error_t Msp430RefVoltGeneratorP__switchOff(void )
#line 235
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 236
    {
      if (Msp430RefVoltGeneratorP__HplAdc12__isBusy()) {
          {
            unsigned char __nesc_temp = 
#line 238
            EBUSY;

            {
#line 238
              __nesc_atomic_end(__nesc_atomic); 
#line 238
              return __nesc_temp;
            }
          }
        }
      else 
#line 240
        {
          adc12ctl0_t ctl0 = Msp430RefVoltGeneratorP__HplAdc12__getCtl0();

#line 242
          ctl0.enc = 0;
          Msp430RefVoltGeneratorP__HplAdc12__setCtl0(ctl0);
          ctl0.refon = 0;
          Msp430RefVoltGeneratorP__HplAdc12__setCtl0(ctl0);
          {
            unsigned char __nesc_temp = 
#line 246
            SUCCESS;

            {
#line 246
              __nesc_atomic_end(__nesc_atomic); 
#line 246
              return __nesc_temp;
            }
          }
        }
    }
#line 250
    __nesc_atomic_end(__nesc_atomic); }
}

#line 152
static void Msp430RefVoltGeneratorP__signalStartDone(Msp430RefVoltGeneratorP__state_t state, error_t result)
#line 152
{
  if (state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE || state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_ON_PENDING) {
    Msp430RefVoltGeneratorP__RefVolt_1_5V__startDone(result);
    }
  else {
#line 156
    Msp430RefVoltGeneratorP__RefVolt_2_5V__startDone(result);
    }
}

# 221 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
static error_t AdcStreamP__ReadStream__read(uint8_t c, uint32_t usPeriod)
{
  if (usPeriod & 0xFFFF0000) {

      AdcStreamP__period = usPeriod / 1000;
      AdcStreamP__periodModified = TRUE;
      AdcStreamP__client = c;
      AdcStreamP__now = AdcStreamP__Alarm__getNow();
      AdcStreamP__SingleChannel__configureSingle(c, AdcStreamP__AdcConfigure__getConfiguration(c));
      if (AdcStreamP__nextBuffer(FALSE) == SUCCESS) {
        AdcStreamP__sampleSingle();
        }
    }
  else 
#line 232
    {
      AdcStreamP__period = usPeriod;
      AdcStreamP__periodModified = FALSE;
      AdcStreamP__client = c;
      AdcStreamP__nextMultiple(c);
    }
  return SUCCESS;
}

# 176 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static error_t Msp430Adc12ImplP__SingleChannel__configureSingle(uint8_t id, 
const msp430adc12_channel_config_t *config)
{
  error_t result = ERESERVE;

  if (!config) {
    return EINVAL;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 184
    {
      if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__ADC_BUSY) 
        {
          unsigned char __nesc_temp = 
#line 186
          EBUSY;

          {
#line 186
            __nesc_atomic_end(__nesc_atomic); 
#line 186
            return __nesc_temp;
          }
        }
#line 187
      if (Msp430Adc12ImplP__ADCArbiterInfo__userId() == id) {
          adc12ctl1_t ctl1 = { 
          .adc12busy = 0, 
          .conseq = 0, 
          .adc12ssel = config->adc12ssel, 
          .adc12div = config->adc12div, 
          .issh = 0, 
          .shp = 1, 
          .shs = 0, 
          .cstartadd = 0 };

          adc12memctl_t memctl = { 
          .inch = config->inch, 
          .sref = config->sref, 
          .eos = 1 };

          adc12ctl0_t ctl0 = Msp430Adc12ImplP__HplAdc12__getCtl0();

#line 204
          ctl0.msc = 1;
          ctl0.sht0 = config->sht;
          ctl0.sht1 = config->sht;

          Msp430Adc12ImplP__state = Msp430Adc12ImplP__SINGLE_DATA;
          Msp430Adc12ImplP__HplAdc12__setCtl0(ctl0);
          Msp430Adc12ImplP__HplAdc12__setCtl1(ctl1);
          Msp430Adc12ImplP__HplAdc12__setMCtl(0, memctl);
          Msp430Adc12ImplP__HplAdc12__setIEFlags(0x01);
          result = SUCCESS;
        }
    }
#line 215
    __nesc_atomic_end(__nesc_atomic); }
  return result;
}

# 177 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
static error_t AdcStreamP__nextBuffer(bool startNextAlarm)
#line 177
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      struct AdcStreamP__list_entry_t *entry = AdcStreamP__bufferQueue[AdcStreamP__client];

      if (!entry) 
        {

          AdcStreamP__bufferQueueEnd[AdcStreamP__client] = (void *)0;
          AdcStreamP__readStreamDone__postTask();
          {
            unsigned char __nesc_temp = 
#line 187
            FAIL;

            {
#line 187
              __nesc_atomic_end(__nesc_atomic); 
#line 187
              return __nesc_temp;
            }
          }
        }
      else 
#line 190
        {
          uint16_t tmp_count;

#line 192
          AdcStreamP__bufferQueue[AdcStreamP__client] = entry->next;
          if (!AdcStreamP__bufferQueue[AdcStreamP__client]) {
            AdcStreamP__bufferQueueEnd[AdcStreamP__client] = &AdcStreamP__bufferQueue[AdcStreamP__client];
            }
#line 195
          AdcStreamP__pos = AdcStreamP__buffer = (void *)0;
          AdcStreamP__count = entry->count;
          tmp_count = AdcStreamP__count;
          AdcStreamP__pos = AdcStreamP__buffer = (uint16_t * )entry;
          if (startNextAlarm) {
            AdcStreamP__nextAlarm();
            }
#line 201
          {
            unsigned char __nesc_temp = 
#line 201
            SUCCESS;

            {
#line 201
              __nesc_atomic_end(__nesc_atomic); 
#line 201
              return __nesc_temp;
            }
          }
        }
    }
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

#line 206
static void AdcStreamP__nextMultiple(uint8_t c)
{
  if (AdcStreamP__nextBuffer(FALSE) == SUCCESS) {
      msp430adc12_channel_config_t config = *AdcStreamP__AdcConfigure__getConfiguration(c);

#line 210
      config.sampcon_ssel = SAMPCON_SOURCE_SMCLK;
      config.sampcon_id = SAMPCON_CLOCK_DIV_1;
      if (AdcStreamP__SingleChannel__configureMultiple(c, &config, AdcStreamP__pos, AdcStreamP__count, AdcStreamP__period) == SUCCESS) {
        AdcStreamP__SingleChannel__getData(c);
        }
      else 
#line 214
        {
          AdcStreamP__postBuffer(c, AdcStreamP__pos, AdcStreamP__count);
          AdcStreamP__readStreamFail__postTask();
        }
    }
}

# 80 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
static void AdcP__ResourceRead__granted(uint8_t client)
{

  error_t result = AdcP__configure(client);

#line 84
  if (result == SUCCESS) {
      AdcP__state = AdcP__STATE_READ;
      result = AdcP__SingleChannel__getData(client);
    }
  else 
#line 87
    {
      AdcP__ResourceRead__release(client);
      AdcP__Read__readDone(client, result, 0);
    }
}

# 107 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static void Msp430RefVoltArbiterImplP__RefVolt_2_5V__startDone(error_t error)
{
  if (Msp430RefVoltArbiterImplP__syncOwner != Msp430RefVoltArbiterImplP__NO_OWNER) {


      Msp430RefVoltArbiterImplP__ClientResource__granted(Msp430RefVoltArbiterImplP__syncOwner);
    }
}

# 159 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static void Msp430RefVoltGeneratorP__signalStopDone(Msp430RefVoltGeneratorP__state_t state, error_t result)
#line 159
{
  if (state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE || state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_OFF_PENDING) {
    Msp430RefVoltGeneratorP__RefVolt_1_5V__stopDone(result);
    }
  else {
#line 163
    Msp430RefVoltGeneratorP__RefVolt_2_5V__stopDone(result);
    }
}

# 70 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static void Msp430RefVoltArbiterImplP__AdcResource__granted(uint8_t client)
{
  const msp430adc12_channel_config_t *settings = Msp430RefVoltArbiterImplP__Config__getConfiguration(client);

#line 73
  if (settings->sref == REFERENCE_VREFplus_AVss || 
  settings->sref == REFERENCE_VREFplus_VREFnegterm) {
      error_t started;

#line 76
      if (Msp430RefVoltArbiterImplP__syncOwner != Msp430RefVoltArbiterImplP__NO_OWNER) {



          Msp430RefVoltArbiterImplP__AdcResource__release(client);
          Msp430RefVoltArbiterImplP__AdcResource__request(client);
          return;
        }
      Msp430RefVoltArbiterImplP__syncOwner = client;
      if (settings->ref2_5v == REFVOLT_LEVEL_1_5) {
        started = Msp430RefVoltArbiterImplP__RefVolt_1_5V__start();
        }
      else {
#line 88
        started = Msp430RefVoltArbiterImplP__RefVolt_2_5V__start();
        }
#line 89
      if (started != SUCCESS) {
          Msp430RefVoltArbiterImplP__syncOwner = Msp430RefVoltArbiterImplP__NO_OWNER;
          Msp430RefVoltArbiterImplP__AdcResource__release(client);
          Msp430RefVoltArbiterImplP__AdcResource__request(client);
        }
    }
  else {
#line 95
    Msp430RefVoltArbiterImplP__ClientResource__granted(client);
    }
}

# 71 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id)
#line 71
{
  /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 73
    {
      if (/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
          /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
          /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId = id;
          /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
          {
            unsigned char __nesc_temp = 
#line 78
            SUCCESS;

            {
#line 78
              __nesc_atomic_end(__nesc_atomic); 
#line 78
              return __nesc_temp;
            }
          }
        }
#line 80
      {
        unsigned char __nesc_temp = 
#line 80
        /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(id);

        {
#line 80
          __nesc_atomic_end(__nesc_atomic); 
#line 80
          return __nesc_temp;
        }
      }
    }
#line 83
    __nesc_atomic_end(__nesc_atomic); }
}

# 94 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static error_t Msp430RefVoltGeneratorP__start(Msp430RefVoltGeneratorP__state_t targetState)
#line 94
{
  error_t result;

  if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE || Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_2_5V_STABLE) {
      if (targetState == Msp430RefVoltGeneratorP__m_state) {
          result = EALREADY;
        }
      else {
#line 100
        if ((result = Msp430RefVoltGeneratorP__switchOn(targetState)) == SUCCESS) {
            Msp430RefVoltGeneratorP__m_state = targetState;
            Msp430RefVoltGeneratorP__signalStartDone(targetState, SUCCESS);
          }
        }
    }
  else {
#line 104
    if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__GENERATOR_OFF) {
        if ((result = Msp430RefVoltGeneratorP__switchOn(targetState)) == SUCCESS) {
            Msp430RefVoltGeneratorP__SwitchOnTimer__startOneShot(17);
            Msp430RefVoltGeneratorP__m_state = targetState + 2;
          }
      }
    else {
#line 109
      if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_OFF_PENDING || Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_2_5V_OFF_PENDING) {
          if ((result = Msp430RefVoltGeneratorP__switchOn(targetState)) == SUCCESS) {

              Msp430RefVoltGeneratorP__state_t oldState = Msp430RefVoltGeneratorP__m_state;

#line 113
              Msp430RefVoltGeneratorP__SwitchOffTimer__stop();
              Msp430RefVoltGeneratorP__m_state = targetState;
              Msp430RefVoltGeneratorP__signalStopDone(oldState, FAIL);
              Msp430RefVoltGeneratorP__signalStartDone(targetState, SUCCESS);
            }
        }
      else {
#line 118
        if (Msp430RefVoltGeneratorP__m_state == targetState + 2) {
          result = SUCCESS;
          }
        else {
#line 121
          result = EBUSY;
          }
        }
      }
    }
#line 123
  return result;
}

#line 216
static error_t Msp430RefVoltGeneratorP__switchOn(uint8_t level)
#line 216
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 217
    {
      if (Msp430RefVoltGeneratorP__HplAdc12__isBusy()) {
          {
            unsigned char __nesc_temp = 
#line 219
            EBUSY;

            {
#line 219
              __nesc_atomic_end(__nesc_atomic); 
#line 219
              return __nesc_temp;
            }
          }
        }
      else 
#line 221
        {
          adc12ctl0_t ctl0 = Msp430RefVoltGeneratorP__HplAdc12__getCtl0();

#line 223
          ctl0.enc = 0;
          Msp430RefVoltGeneratorP__HplAdc12__setCtl0(ctl0);
          ctl0.refon = 1;


          ctl0.r2_5v = level - 1;
          Msp430RefVoltGeneratorP__HplAdc12__setCtl0(ctl0);
          {
            unsigned char __nesc_temp = 
#line 230
            SUCCESS;

            {
#line 230
              __nesc_atomic_end(__nesc_atomic); 
#line 230
              return __nesc_temp;
            }
          }
        }
    }
#line 234
    __nesc_atomic_end(__nesc_atomic); }
}

# 52 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/platforms/telosa/chips/sht11/HplSensirionSht11P.nc"
static error_t HplSensirionSht11P__SplitControl__start(void )
#line 52
{
  HplSensirionSht11P__PWR__makeOutput();
  HplSensirionSht11P__PWR__set();
  HplSensirionSht11P__Timer__startOneShot(11);
  return SUCCESS;
}

# 57 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P16*/HplMsp430GeneralIOP__6__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )33U &= ~(0x01 << 6);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}


static void /*HplMsp430GeneralIOC.P15*/HplMsp430GeneralIOP__5__IO__makeInput(void )
#line 61
{
#line 61
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 61
    * (volatile uint8_t * )34U &= ~(0x01 << 5);
#line 61
    __nesc_atomic_end(__nesc_atomic); }
}

#line 57
static void /*HplMsp430GeneralIOC.P15*/HplMsp430GeneralIOP__5__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )33U &= ~(0x01 << 5);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 149 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
static error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__performCommand(void )
#line 149
{

  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__initPins();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__resetDevice();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__transmissionStart();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__cmd &= 0x1F;
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__sendCommand(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__cmd);

  if (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__waitForResponse() != SUCCESS) {
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__busy = FALSE;
      return FAIL;
    }

  switch (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__cmd) {

      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CMD_SOFT_RESET: 
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__Timer__startOneShot(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__TIMEOUT_RESET);
      break;

      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CMD_MEASURE_TEMPERATURE: 
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__enableInterrupt();

      if (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__status & SHT11_STATUS_LOW_RES_BIT) {
          /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__Timer__startOneShot(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__TIMEOUT_12BIT);
        }
      else 
#line 173
        {
          /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__Timer__startOneShot(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__TIMEOUT_14BIT);
        }

      break;

      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CMD_MEASURE_HUMIDITY: 
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__enableInterrupt();

      if (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__status & SHT11_STATUS_LOW_RES_BIT) {
          /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__Timer__startOneShot(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__TIMEOUT_8BIT);
        }
      else 
#line 184
        {
          /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__Timer__startOneShot(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__TIMEOUT_12BIT);
        }

      break;

      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CMD_READ_STATUS: 
        {
          uint8_t tempStatus;
          uint8_t crc;

          tempStatus = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__readByte();
          crc = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__readByte();
          /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__endTransmission();

          /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__status = tempStatus;

          /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__signalStatusDone__postTask();
        }

      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CMD_WRITE_STATUS: 
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__writeByte(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__newStatus);

      if (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__waitForResponse() != SUCCESS) {
          /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__writeFail = TRUE;
        }
      else 
#line 209
        {
          /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__status = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__newStatus;
        }

      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__signalStatusDone__postTask();
    }


  return SUCCESS;
}

# 56 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P15*/HplMsp430GeneralIOP__5__IO__set(void )
#line 56
{
#line 56
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    * (volatile uint8_t * )33U |= 0x01 << 5;
#line 56
    __nesc_atomic_end(__nesc_atomic); }
}

# 69 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc"
static error_t /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__Interrupt__disable(void )
#line 69
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 70
    {
      /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__HplInterrupt__disable();
      /*HplSensirionSht11C.InterruptDATAC*/Msp430InterruptC__2__HplInterrupt__clear();
    }
#line 73
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 63 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P15*/HplMsp430GeneralIOP__5__IO__makeOutput(void )
#line 63
{
#line 63
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 63
    * (volatile uint8_t * )34U |= 0x01 << 5;
#line 63
    __nesc_atomic_end(__nesc_atomic); }
}

#line 56
static void /*HplMsp430GeneralIOC.P16*/HplMsp430GeneralIOP__6__IO__set(void )
#line 56
{
#line 56
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    * (volatile uint8_t * )33U |= 0x01 << 6;
#line 56
    __nesc_atomic_end(__nesc_atomic); }
}

# 255 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__writeByte(uint8_t byte)
#line 255
{
  uint8_t i;

#line 257
  for (i = 0; i < 8; i++) {
      if (byte & 0x80) {
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__set();
        }
      else {
#line 261
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__clr();
        }
#line 262
      byte = byte << 1;
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CLOCK__set();
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CLOCK__clr();
    }
}

static error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__waitForResponse(void )
#line 268
{
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__makeInput();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CLOCK__set();
  if (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__get()) {


      return FAIL;
    }
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CLOCK__clr();
  return SUCCESS;
}

# 73 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__Timer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(3U, dt);
#line 73
}
#line 73
# 281 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/sht11/SensirionSht11LogicP.nc"
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__enableInterrupt(void )
#line 281
{
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__makeInput();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__InterruptDATA__enableFallingEdge();
}

#line 355
static uint8_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__readByte(void )
#line 355
{
  uint8_t byte = 0;
  uint8_t i;

  for (i = 0; i < 8; i++) {
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CLOCK__set();
      if (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__get()) {
        byte |= 1;
        }
#line 363
      if (i != 7) {
        byte = byte << 1;
        }
#line 365
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CLOCK__clr();
    }

  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__ack();
  return byte;
}










static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__endTransmission(void )
#line 381
{
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__makeOutput();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__DATA__set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CLOCK__set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP__0__CLOCK__clr();
}

# 111 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
static error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__Resource__release(uint8_t id)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    {
      if (/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__state == /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__RES_BUSY && /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__resId == id) {
          if (/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__Queue__isEmpty() == FALSE) {
              /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__reqResId = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__Queue__dequeue();
              /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__resId = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__NO_RES;
              /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__state = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__RES_GRANTING;
              /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__grantedTask__postTask();
              /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(id);
            }
          else {
              /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__resId = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__default_owner_id;
              /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__state = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__RES_CONTROLLED;
              /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(id);
              /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
#line 127
            SUCCESS;

            {
#line 127
              __nesc_atomic_end(__nesc_atomic); 
#line 127
              return __nesc_temp;
            }
          }
        }
    }
#line 131
    __nesc_atomic_end(__nesc_atomic); }
#line 130
  return FAIL;
}

# 177 "SenseP.nc"
static void SenseP__HopSend__sendDone(message_t *msg, error_t error)
{
  if (&SenseP__hopPkt == msg) 
    {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 181
        {
          SenseP__busy = FALSE;



          SenseP__prepareSenseMsg();
          SenseP__sendPacket(&SenseP__sensePkt);
        }
#line 188
        __nesc_atomic_end(__nesc_atomic); }
    }
}

#line 68
static void SenseP__sendPacket(message_t *pkt)
#line 68
{
  if (SenseP__lastLen >= INF) {
#line 69
    return;
    }
#line 70
  if (SenseP__SenseSend__send(SenseP__lastFirstHop, pkt, sizeof(SenseMsg )) == SUCCESS) 
    {
      SenseP__busy = TRUE;
      switch (SenseP__lastFirstHop) {
          case 0: SenseP__Leds__led0Toggle();
#line 74
          break;
          case 1: SenseP__Leds__led1Toggle();
#line 75
          break;
          case 2: SenseP__Leds__led2Toggle();
#line 76
          break;
        }
    }
}

# 164 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static void CC2420ActiveMessageP__AMPacket__setType(message_t *amsg, am_id_t type)
#line 164
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(amsg);

#line 166
  __nesc_hton_leuint8(header->type.nxdata, type);
}

# 90 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/AMQueueImplP.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 91
{
  if (clientId >= 2) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 2) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(msg);

      ;
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 2;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 159 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static am_id_t CC2420ActiveMessageP__AMPacket__type(message_t *amsg)
#line 159
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(amsg);

#line 161
  return __nesc_ntoh_leuint8(header->type.nxdata);
}

#line 134
static am_addr_t CC2420ActiveMessageP__AMPacket__destination(message_t *amsg)
#line 134
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(amsg);

#line 136
  return __nesc_ntoh_leuint16(header->dest.nxdata);
}

#line 86
static error_t CC2420ActiveMessageP__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len)
#line 88
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(msg);

  if (len > CC2420ActiveMessageP__Packet__maxPayloadLength()) {
      return ESIZE;
    }

  __nesc_hton_leuint8(header->type.nxdata, id);
  __nesc_hton_leuint16(header->dest.nxdata, addr);
  __nesc_hton_leuint16(header->destpan.nxdata, CC2420ActiveMessageP__CC2420Config__getPanAddr());
  __nesc_hton_leuint16(header->src.nxdata, CC2420ActiveMessageP__AMPacket__address());

  if (CC2420ActiveMessageP__RadioResource__immediateRequest() == SUCCESS) {
      error_t rc;

#line 102
      CC2420ActiveMessageP__SendNotifier__aboutToSend(id, addr, msg);

      rc = CC2420ActiveMessageP__SubSend__send(msg, len);
      if (rc != SUCCESS) {
          CC2420ActiveMessageP__RadioResource__release();
        }

      return rc;
    }
  else 
#line 110
    {
      CC2420ActiveMessageP__pending_length = len;
      CC2420ActiveMessageP__pending_message = msg;
      return CC2420ActiveMessageP__RadioResource__request();
    }
}

# 106 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void )
#line 106
{
  am_addr_t myAddr;

#line 108
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 108
    myAddr = ActiveMessageAddressC__addr;
#line 108
    __nesc_atomic_end(__nesc_atomic); }
  return myAddr;
}

# 60 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 60
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 61
    {
      unsigned char __nesc_temp = 
#line 61
      /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead == /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;

      {
#line 61
        __nesc_atomic_end(__nesc_atomic); 
#line 61
        return __nesc_temp;
      }
    }
#line 63
    __nesc_atomic_end(__nesc_atomic); }
}

# 106 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static void CC2420PacketP__CC2420Packet__setNetwork(message_t *p_msg, uint8_t networkId)
#line 106
{

  __nesc_hton_leuint8(CC2420PacketP__CC2420PacketBody__getHeader(p_msg)->network.nxdata, networkId);
}

# 75 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static error_t UniqueSendP__Send__send(message_t *msg, uint8_t len)
#line 75
{
  error_t error;

#line 77
  if (UniqueSendP__State__requestState(UniqueSendP__S_SENDING) == SUCCESS) {
      __nesc_hton_leuint8(UniqueSendP__CC2420PacketBody__getHeader(msg)->dsn.nxdata, UniqueSendP__localSendId++);

      if ((error = UniqueSendP__SubSend__send(msg, len)) != SUCCESS) {
          UniqueSendP__State__toIdle();
        }

      return error;
    }

  return EBUSY;
}

# 819 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP__loadTXFIFO(void )
#line 819
{
  cc2420_header_t *header = CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg);
  uint8_t tx_power = __nesc_ntoh_uint8(CC2420TransmitP__CC2420PacketBody__getMetadata(CC2420TransmitP__m_msg)->tx_power.nxdata);

  if (!tx_power) {
      tx_power = 31;
    }

  CC2420TransmitP__CSN__clr();

  if (CC2420TransmitP__m_tx_power != tx_power) {
      CC2420TransmitP__TXCTRL__write((((2 << CC2420_TXCTRL_TXMIXBUF_CUR) | (
      3 << CC2420_TXCTRL_PA_CURRENT)) | (
      1 << CC2420_TXCTRL_RESERVED)) | ((
      tx_power & 0x1F) << CC2420_TXCTRL_PA_LEVEL));
    }

  CC2420TransmitP__m_tx_power = tx_power;

  {
    uint8_t tmpLen __attribute((unused))  = __nesc_ntoh_leuint8(header->length.nxdata) - 1;

#line 840
    CC2420TransmitP__TXFIFO__write((uint8_t * )header, __nesc_ntoh_leuint8(header->length.nxdata) - 1);
  }
}

# 305 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Reg__write(uint8_t addr, uint16_t data)
#line 305
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 306
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 308
            0;

            {
#line 308
              __nesc_atomic_end(__nesc_atomic); 
#line 308
              return __nesc_temp;
            }
          }
        }
    }
#line 312
    __nesc_atomic_end(__nesc_atomic); }
#line 311
  CC2420SpiP__SpiByte__write(addr);
  CC2420SpiP__SpiByte__write(data >> 8);
  return CC2420SpiP__SpiByte__write(data & 0xff);
}

# 206 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__send(uint8_t id, uint8_t *tx_buf, 
uint8_t *rx_buf, 
uint16_t len)
#line 208
{

  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_client = id;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf = tx_buf;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf = rx_buf;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len = len;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos = 0;

  if (len) {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__enableRxIntr();
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__continueOp();
    }
  else {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__postTask();
    }

  return SUCCESS;
}

#line 183
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__continueOp(void )
#line 183
{

  uint8_t end;
  uint8_t tmp;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 188
    {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf ? /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos] : 0);

      end = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos + /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SPI_ATOMIC_SIZE;
      if (end > /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len) {
        end = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len;
        }
      while (++/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos < end) {
          while (!/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__isRxIntrPending()) ;
          tmp = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__rx();
          if (/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf) {
            /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos - 1] = tmp;
            }
#line 200
          /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf ? /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos] : 0);
        }
    }
#line 202
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/interfaces/State.nc"
static void UniqueSendP__State__toIdle(void ){
#line 56
  StateImplP__State__toIdle(2U);
#line 56
}
#line 56
# 163 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err)
#line 163
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, err);
}

# 73 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static void CC2420ActiveMessageP__RadioResource__granted(void )
#line 73
{
  uint8_t rc;
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(CC2420ActiveMessageP__pending_message);

  CC2420ActiveMessageP__SendNotifier__aboutToSend(__nesc_ntoh_leuint8(header->type.nxdata), __nesc_ntoh_leuint16(header->dest.nxdata), CC2420ActiveMessageP__pending_message);
  rc = CC2420ActiveMessageP__SubSend__send(CC2420ActiveMessageP__pending_message, CC2420ActiveMessageP__pending_length);
  if (rc != SUCCESS) {
      CC2420ActiveMessageP__RadioResource__release();
      CC2420ActiveMessageP__AMSend__sendDone(__nesc_ntoh_leuint8(header->type.nxdata), CC2420ActiveMessageP__pending_message, rc);
    }
}

# 189 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err)
#line 189
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 2) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current, msg, err);
    }
  else {
      ;
    }
}

# 279 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static uint16_t CC2420ControlP__CC2420Config__getShortAddr(void )
#line 279
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 280
    {
      unsigned int __nesc_temp = 
#line 280
      CC2420ControlP__m_short_addr;

      {
#line 280
        __nesc_atomic_end(__nesc_atomic); 
#line 280
        return __nesc_temp;
      }
    }
#line 282
    __nesc_atomic_end(__nesc_atomic); }
}

# 98 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static uint8_t CC2420PacketP__CC2420Packet__getNetwork(message_t *p_msg)
#line 98
{



  return __nesc_ntoh_leuint8(CC2420PacketP__CC2420PacketBody__getHeader(p_msg)->network.nxdata);
}

# 764 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP__waitForNextPacket(void )
#line 764
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 765
    {
      if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STOPPED) {
          CC2420ReceiveP__SpiResource__release();
          {
#line 768
            __nesc_atomic_end(__nesc_atomic); 
#line 768
            return;
          }
        }
      CC2420ReceiveP__receivingPacket = FALSE;
#line 783
      if ((CC2420ReceiveP__m_missed_packets && CC2420ReceiveP__FIFO__get()) || !CC2420ReceiveP__FIFOP__get()) {

          if (CC2420ReceiveP__m_missed_packets) {
              CC2420ReceiveP__m_missed_packets--;
            }





          CC2420ReceiveP__beginReceive();
        }
      else 
        {

          CC2420ReceiveP__m_state = CC2420ReceiveP__S_STARTED;
          CC2420ReceiveP__m_missed_packets = 0;
          CC2420ReceiveP__SpiResource__release();
        }
    }
#line 802
    __nesc_atomic_end(__nesc_atomic); }
}

#line 711
static void CC2420ReceiveP__beginReceive(void )
#line 711
{
  CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_LENGTH;
  /* atomic removed: atomic calls only */
#line 713
  CC2420ReceiveP__receivingPacket = TRUE;
  if (CC2420ReceiveP__SpiResource__isOwner()) {
      CC2420ReceiveP__receive();
    }
  else {
#line 717
    if (CC2420ReceiveP__SpiResource__immediateRequest() == SUCCESS) {
        CC2420ReceiveP__receive();
      }
    else {
        CC2420ReceiveP__SpiResource__request();
      }
    }
}

#line 754
static void CC2420ReceiveP__receive(void )
#line 754
{
  CC2420ReceiveP__CSN__clr();
  CC2420ReceiveP__RXFIFO__beginRead((uint8_t *)CC2420ReceiveP__CC2420PacketBody__getHeader(CC2420ReceiveP__m_p_rx_buf), 1);
}

# 189 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Fifo__beginRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 190
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 194
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 196
            status;

            {
#line 196
              __nesc_atomic_end(__nesc_atomic); 
#line 196
              return __nesc_temp;
            }
          }
        }
    }
#line 200
    __nesc_atomic_end(__nesc_atomic); }
#line 200
  CC2420SpiP__m_addr = addr | 0x40;

  status = CC2420SpiP__SpiByte__write(CC2420SpiP__m_addr);
  CC2420SpiP__Fifo__continueRead(addr, data, len);

  return status;
}

#line 329
static void CC2420SpiP__SpiPacket__sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error)
#line 330
{
  if (CC2420SpiP__m_addr & 0x40) {
      CC2420SpiP__Fifo__readDone(CC2420SpiP__m_addr & ~0x40, rx_buf, len, error);
    }
  else 
#line 333
    {
      CC2420SpiP__Fifo__writeDone(CC2420SpiP__m_addr, tx_buf, len, error);
    }
}

# 728 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP__flush(void )
#line 728
{








  CC2420ReceiveP__reset_state();

  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__CSN__clr();
  CC2420ReceiveP__SFLUSHRX__strobe();
  CC2420ReceiveP__SFLUSHRX__strobe();
  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__SpiResource__release();
  CC2420ReceiveP__waitForNextPacket();
}

#line 808
static void CC2420ReceiveP__reset_state(void )
#line 808
{
  CC2420ReceiveP__m_bytes_left = CC2420ReceiveP__RXFIFO_SIZE;
  /* atomic removed: atomic calls only */
#line 810
  CC2420ReceiveP__receivingPacket = FALSE;
  CC2420ReceiveP__m_timestamp_head = 0;
  CC2420ReceiveP__m_timestamp_size = 0;
  CC2420ReceiveP__m_missed_packets = 0;
}

# 456 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static void CC2420ControlP__writeFsctrl(void )
#line 456
{
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 459
    {
      channel = CC2420ControlP__m_channel;
    }
#line 461
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP__FSCTRL__write((1 << CC2420_FSCTRL_LOCK_THR) | (((
  channel - 11) * 5 + 357) << CC2420_FSCTRL_FREQ));
}







static void CC2420ControlP__writeMdmctrl0(void )
#line 473
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 474
    {
      CC2420ControlP__MDMCTRL0__write((((((((1 << CC2420_MDMCTRL0_RESERVED_FRAME_MODE) | ((
      CC2420ControlP__addressRecognition && CC2420ControlP__hwAddressRecognition) << CC2420_MDMCTRL0_ADR_DECODE)) | (
      2 << CC2420_MDMCTRL0_CCA_HYST)) | (
      3 << CC2420_MDMCTRL0_CCA_MOD)) | (
      1 << CC2420_MDMCTRL0_AUTOCRC)) | ((
      CC2420ControlP__autoAckEnabled && CC2420ControlP__hwAutoAckDefault) << CC2420_MDMCTRL0_AUTOACK)) | (
      0 << CC2420_MDMCTRL0_AUTOACK)) | (
      2 << CC2420_MDMCTRL0_PREAMBLE_LENGTH));
    }
#line 483
    __nesc_atomic_end(__nesc_atomic); }
}







static void CC2420ControlP__writeId(void )
#line 492
{
  nxle_uint16_t id[2];

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 495
    {
      __nesc_hton_leuint16(id[0].nxdata, CC2420ControlP__m_pan);
      __nesc_hton_leuint16(id[1].nxdata, CC2420ControlP__m_short_addr);
    }
#line 498
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP__PANID__write(0, (uint8_t *)&id, sizeof id);
}

# 81 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static error_t CC2420CsmaP__SplitControl__start(void )
#line 81
{
  if (CC2420CsmaP__SplitControlState__requestState(CC2420CsmaP__S_STARTING) == SUCCESS) {
      CC2420CsmaP__CC2420Power__startVReg();
      return SUCCESS;
    }
  else {
#line 86
    if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTED)) {
        return EALREADY;
      }
    else {
#line 89
      if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTING)) {
          return SUCCESS;
        }
      }
    }
#line 93
  return EBUSY;
}

# 73 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint8_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 90
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 77 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
static error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__Resource__request(uint8_t id)
#line 77
{
  /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceRequested__requested(/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__state == /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__RES_CONTROLLED) {
          /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__state = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__RES_GRANTING;
          /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__reqResId = id;
        }
      else {
#line 84
        if (/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__reqResId == id) {
            {
              unsigned char __nesc_temp = 
#line 85
              SUCCESS;

              {
#line 85
                __nesc_atomic_end(__nesc_atomic); 
#line 85
                return __nesc_temp;
              }
            }
          }
        else 
#line 87
          {
            unsigned char __nesc_temp = 
#line 87
            /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__Queue__enqueue(id);

            {
#line 87
              __nesc_atomic_end(__nesc_atomic); 
#line 87
              return __nesc_temp;
            }
          }
        }
    }
#line 91
    __nesc_atomic_end(__nesc_atomic); }
#line 89
  /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 147 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 = t0;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt = dt;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__set_alarm();
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}

# 105 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12P.nc"
static void HplAdc12P__HplAdc12__stopConversion(void )
#line 105
{

  uint16_t ctl1 = HplAdc12P__ADC12CTL1;

#line 108
  HplAdc12P__ADC12CTL1 &= ~(0x0002 | 0x0004);
  HplAdc12P__ADC12CTL0 &= ~(0x0001 + 0x0002);
  HplAdc12P__ADC12CTL0 &= ~0x0010;
  HplAdc12P__ADC12CTL1 |= ctl1 & (0x0002 | 0x0004);
}

# 64 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
__attribute((wakeup)) __attribute((interrupt(8)))  void sig_PORT1_VECTOR(void )
{
  volatile int n = P1IFG & P1IE;

  if (n & (1 << 0)) {
#line 68
      HplMsp430InterruptP__Port10__fired();
#line 68
      return;
    }
#line 69
  if (n & (1 << 1)) {
#line 69
      HplMsp430InterruptP__Port11__fired();
#line 69
      return;
    }
#line 70
  if (n & (1 << 2)) {
#line 70
      HplMsp430InterruptP__Port12__fired();
#line 70
      return;
    }
#line 71
  if (n & (1 << 3)) {
#line 71
      HplMsp430InterruptP__Port13__fired();
#line 71
      return;
    }
#line 72
  if (n & (1 << 4)) {
#line 72
      HplMsp430InterruptP__Port14__fired();
#line 72
      return;
    }
#line 73
  if (n & (1 << 5)) {
#line 73
      HplMsp430InterruptP__Port15__fired();
#line 73
      return;
    }
#line 74
  if (n & (1 << 6)) {
#line 74
      HplMsp430InterruptP__Port16__fired();
#line 74
      return;
    }
#line 75
  if (n & (1 << 7)) {
#line 75
      HplMsp430InterruptP__Port17__fired();
#line 75
      return;
    }
}

#line 169
__attribute((wakeup)) __attribute((interrupt(2)))  void sig_PORT2_VECTOR(void )
{
  volatile int n = P2IFG & P2IE;

  if (n & (1 << 0)) {
#line 173
      HplMsp430InterruptP__Port20__fired();
#line 173
      return;
    }
#line 174
  if (n & (1 << 1)) {
#line 174
      HplMsp430InterruptP__Port21__fired();
#line 174
      return;
    }
#line 175
  if (n & (1 << 2)) {
#line 175
      HplMsp430InterruptP__Port22__fired();
#line 175
      return;
    }
#line 176
  if (n & (1 << 3)) {
#line 176
      HplMsp430InterruptP__Port23__fired();
#line 176
      return;
    }
#line 177
  if (n & (1 << 4)) {
#line 177
      HplMsp430InterruptP__Port24__fired();
#line 177
      return;
    }
#line 178
  if (n & (1 << 5)) {
#line 178
      HplMsp430InterruptP__Port25__fired();
#line 178
      return;
    }
#line 179
  if (n & (1 << 6)) {
#line 179
      HplMsp430InterruptP__Port26__fired();
#line 179
      return;
    }
#line 180
  if (n & (1 << 7)) {
#line 180
      HplMsp430InterruptP__Port27__fired();
#line 180
      return;
    }
}

# 96 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
__attribute((wakeup)) __attribute((interrupt(18)))  void sig_UART0RX_VECTOR(void )
#line 96
{
  uint8_t temp = U0RXBUF;

#line 98
  HplMsp430Usart0P__Interrupts__rxDone(temp);
}

# 153 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/system/ArbiterP.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse(void )
#line 153
{
  /* atomic removed: atomic calls only */
#line 154
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED) 
      {
        unsigned char __nesc_temp = 
#line 156
        FALSE;

#line 156
        return __nesc_temp;
      }
  }
#line 158
  return TRUE;
}






static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void )
#line 166
{
  /* atomic removed: atomic calls only */
#line 167
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state != /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY) 
      {
        unsigned char __nesc_temp = 
#line 169
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__NO_RES;

#line 169
        return __nesc_temp;
      }
#line 170
    {
      unsigned char __nesc_temp = 
#line 170
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId;

#line 170
      return __nesc_temp;
    }
  }
}

# 101 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
__attribute((wakeup)) __attribute((interrupt(16)))  void sig_UART0TX_VECTOR(void )
#line 101
{
  if (HplMsp430Usart0P__HplI2C__isI2C()) {
    HplMsp430Usart0P__I2CInterrupts__fired();
    }
  else {
#line 105
    HplMsp430Usart0P__Interrupts__txDone();
    }
}

# 120 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/HplAdc12P.nc"
__attribute((wakeup)) __attribute((interrupt(14)))  void sig_ADC_VECTOR(void )
#line 120
{
  HplAdc12P__HplAdc12__conversionDone(HplAdc12P__ADC12IV);
}

# 503 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static void Msp430Adc12ImplP__stopConversion(void )
{
  uint8_t i;

  if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__USE_TIMERA) {
    Msp430Adc12ImplP__TimerA__setMode(MSP430TIMER_STOP_MODE);
    }
  Msp430Adc12ImplP__resetAdcPin(Msp430Adc12ImplP__HplAdc12__getMCtl(0).inch);
  if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__MULTI_CHANNEL) {
      for (i = 1; i < Msp430Adc12ImplP__numChannels; i++) 
        Msp430Adc12ImplP__resetAdcPin(Msp430Adc12ImplP__HplAdc12__getMCtl(i).inch);
    }
  /* atomic removed: atomic calls only */
#line 515
  {
    Msp430Adc12ImplP__HplAdc12__stopConversion();
    Msp430Adc12ImplP__HplAdc12__resetIFGs();
    Msp430Adc12ImplP__state &= ~Msp430Adc12ImplP__ADC_BUSY;
  }
}

#line 159
static void Msp430Adc12ImplP__resetAdcPin(uint8_t inch)
{

  switch (inch) 
    {
      case 0: Msp430Adc12ImplP__Port60__selectIOFunc();
#line 164
      break;
      case 1: Msp430Adc12ImplP__Port61__selectIOFunc();
#line 165
      break;
      case 2: Msp430Adc12ImplP__Port62__selectIOFunc();
#line 166
      break;
      case 3: Msp430Adc12ImplP__Port63__selectIOFunc();
#line 167
      break;
      case 4: Msp430Adc12ImplP__Port64__selectIOFunc();
#line 168
      break;
      case 5: Msp430Adc12ImplP__Port65__selectIOFunc();
#line 169
      break;
      case 6: Msp430Adc12ImplP__Port66__selectIOFunc();
#line 170
      break;
      case 7: Msp430Adc12ImplP__Port67__selectIOFunc();
#line 171
      break;
    }
}

# 242 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
static error_t AdcStreamP__SingleChannel__singleDataReady(uint8_t streamClient, uint16_t data)
{
  if (AdcStreamP__client == AdcStreamP__NSTREAM) {
    return FAIL;
    }
  if (AdcStreamP__count == 0) 
    {
      AdcStreamP__now = AdcStreamP__Alarm__getNow();
      AdcStreamP__nextBuffer(TRUE);
    }
  else 
    {
      * AdcStreamP__pos++ = data;
      if (AdcStreamP__pos == AdcStreamP__buffer + AdcStreamP__count) 
        {
          /* atomic removed: atomic calls only */
          {
            if (AdcStreamP__lastBuffer) 
              {

                AdcStreamP__bufferQueueEnd[AdcStreamP__client] = (void *)0;
                AdcStreamP__readStreamFail__postTask();
                {
                  unsigned char __nesc_temp = 
#line 264
                  FAIL;

#line 264
                  return __nesc_temp;
                }
              }
            else {
                AdcStreamP__lastCount = AdcStreamP__count;
                AdcStreamP__lastBuffer = AdcStreamP__buffer;
              }
          }
          AdcStreamP__bufferDone__postTask();
          AdcStreamP__nextBuffer(TRUE);
        }
      else {
        AdcStreamP__nextAlarm();
        }
    }
#line 278
  return FAIL;
}

# 142 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcP.nc"
static error_t AdcP__SingleChannel__singleDataReady(uint8_t client, uint16_t data)
{
  switch (AdcP__state) 
    {
      case AdcP__STATE_READ: 
        AdcP__owner = client;
      AdcP__value = data;
      AdcP__readDone__postTask();
      break;
      case AdcP__STATE_READNOW: 
        AdcP__ReadNow__readDone(client, SUCCESS, data);
      break;
      default: 

        break;
    }
  return SUCCESS;
}

# 281 "/Users/roxanne/repos/network/sensor/tinyos-2.x/tos/chips/msp430/adc12/AdcStreamP.nc"
static uint16_t *AdcStreamP__SingleChannel__multipleDataReady(uint8_t streamClient, 
uint16_t *buf, uint16_t length)
{
  /* atomic removed: atomic calls only */
  {
    if (AdcStreamP__lastBuffer) 
      {

        AdcStreamP__bufferQueueEnd[AdcStreamP__client] = (void *)0;
        AdcStreamP__readStreamFail__postTask();
        {
          unsigned int *__nesc_temp = 
#line 291
          0;

#line 291
          return __nesc_temp;
        }
      }
    else {
        AdcStreamP__lastBuffer = AdcStreamP__buffer;
        AdcStreamP__lastCount = AdcStreamP__pos - AdcStreamP__buffer;
      }
  }
  AdcStreamP__bufferDone__postTask();
  AdcStreamP__nextMultiple(streamClient);
  return 0;
}

