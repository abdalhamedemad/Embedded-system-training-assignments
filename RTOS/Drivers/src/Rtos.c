/*
 * Rtos.c
 *
 *  Created on: ??�/??�/????
 *      Author: medoa
 */

#include "Rtos.h"
#include "Gpt.h"
#include "GlobalInterrupt.h"
// volatile u16 counter = 0;
// void TimerHandler(void)
// {
//     counter++;
// }

void Rtos_create_task(u8 cpriority, u16 cperiodicity, void (*ctaskfunc)(void))
{

    tasks[cpriority].priority = cpriority;
    tasks[cpriority].periodicity = cperiodicity;
    tasks[cpriority].taskfunc = ctaskfunc;
}

void Rtos_start()
{
    Gpt_ConfigType config = {GPT_CHANNEL_TIMER0, GPT_MODE_CTC, GPT_OUTPUT_NORMAL, GPT_PRESCALER_64};
    Gpt_Init(&config);
    Gpt_StartTimer(GPT_CHANNEL_TIMER0, 125);
    Gpt_EnableNotification(GPT_CHANNEL_TIMER0, GPT_MODE_CTC, Rtos_schaduler);
    GlobalInterrupt_Enable();
}
void Rtos_schaduler()
{
    static u16 TickCounter = 0;
    TickCounter++;
    for (u8 i = 0; i < 3; i++)
    {
        if ((TickCounter % tasks[i].periodicity) == 0)
        {
            tasks[i].taskfunc();
        }
        else
        {
        }
        /* code */
    }
}
