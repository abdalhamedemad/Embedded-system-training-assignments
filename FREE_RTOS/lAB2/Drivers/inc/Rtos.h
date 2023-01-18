/*
 * Rtos.h
 *
 *  Created on: ??�/??�/????
 *      Author: medoa
 */

#ifndef INC_RTOS_H_
#define INC_RTOS_H_
#include "std_types.h"
#include "macros.h"

typedef struct task
{
    u8 priority;
    u16 periodicity;
    void (*taskfunc) (void);
    /* data */
} Rtos_Task_t;

Rtos_Task_t tasks[3];
void Rtos_create_task(u8 cpriority , u16 cperiodicity , void (*taskfunc) (void));
void Rtos_schaduler();
void Rtos_start();

#endif /* INC_RTOS_H_ */
