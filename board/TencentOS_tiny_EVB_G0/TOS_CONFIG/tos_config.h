#ifndef _TOS_CONFIG_H_
#define  _TOS_CONFIG_H_

#include "stm32g0xx.h"

#define TOS_CFG_TASK_PRIO_MAX           10u

#define TOS_CFG_ROUND_ROBIN_EN          1u

#define TOS_CFG_OBJECT_VERIFY_EN        1u

#define TOS_CFG_OBJ_DYNAMIC_CREATE_EN   1u

#define TOS_CFG_EVENT_EN                1u

#define TOS_CFG_MMBLK_EN                1u

#define TOS_CFG_MMHEAP_EN               1u

#define TOS_CFG_MMHEAP_DEFAULT_POOL_SIZE        0x2000

#define TOS_CFG_MUTEX_EN                1u

#define TOS_CFG_TIMER_EN                1u

#define TOS_CFG_SEM_EN                  1u

#define TOS_CFG_IDLE_TASK_STK_SIZE      128u

#define TOS_CFG_CPU_TICK_PER_SECOND     1000u

#define TOS_CFG_CPU_CLOCK               (SystemCoreClock)

#define TOS_CFG_TIMER_AS_PROC           1u

#define TOS_CFG_MAIL_QUEUE_EN           1u

#endif

