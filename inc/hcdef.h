#ifndef __HC_DEF_H__
#define __HC_DEF_H__

/*
*      data type
*/

/* RT-Thread 基础数据类型重定义*/
typedef signed   char                   hc_int8_t;
typedef signed   short                  hc_int16_t;
typedef signed   long                   hc_int32_t;
typedef unsigned char                   hc_uint8_t;
typedef unsigned short                  hc_uint16_t;
typedef unsigned long                   hc_uint32_t;
typedef int                             hc_bool_t;

/* 32bit CPU*/
typedef long                            hc_base_t;
typedef unsigned long                   hc_ubase_t;
typedef hc_base_t                       hc_err_t;
typedef hc_uint32_t                     hc_time_t;
typedef hc_uint32_t                     hc_tick_t;
typedef hc_base_t                       hc_flag_t;
typedef hc_ubase_t                      hc_size_t;
typedef hc_ubase_t                      hc_dev_t;
typedef hc_base_t                       hc_off_t;


/* 布尔数据类型重定义*/
#define HC_TRUE                         1
#define HC_FALSE                        0

#ifdef __CC_ARM
        #define hc_inline                   static __inline
        #define ALIGN(n)                    __attribute__((aligned(n)))

#elif defined (__GNUC__)
        #define hc_incline                  static __inline 
        #define ALIGN(n)                    __attribute__((aligned(n)))

#else
    #error not found corresponding toolchain
#endif

#define HC_ALIGN(size, align)           (((size) + (align) - 1) & ~((align) - 1))
#define HC_ALIGN_DOWN(size, align)      ((size) & ~((align) - 1))

#define HC_NULL                         (0)

#endif /* __HC_DEF_H__*/