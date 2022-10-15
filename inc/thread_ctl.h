#include "hcdef.h"

struct hc_list_node {
    struct hc_list_node *next;
    struct hc_list_node *prev;
};
typedef struct hc_list_node *hc_list_t;

/*
 * thread control block
 *    tcb contain all information of a thread
 *    see tcb as a id card of the thread
 */
struct hc_thread
{
    void        *sp;              /* 线程栈指针 */
    void        *entry;           /* 线程入口地址 */
    void        *parameter;       /* 线程形参 */
    void        *stack_base_addr;      /* 线程起始地址 */
    hc_uint32_t stack_size;       /* 线程栈大小，单位为字节 */

    hc_list_t   tlist;            /* 线程链表节点 */
};
typedef struct hc_thread *hc_thread_t;
