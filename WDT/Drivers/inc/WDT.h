/*
 * WDT.h
 *
 *  Created on: ??�/??�/????
 *      Author: medoa
 */

#ifndef INC_WDT_H_
#define INC_WDT_H_
#include "Registers.h"

#define WDTCR_WDE 3
#define WDTCR_WDTOE 4
#define WDTCR_WDP0 0
#define WDTCR_WDP1 1
#define WDTCR_WDP2 2

typedef enum {
    WDT_t_16ms,
    WDT_t_32_5ms,
    WDT_t_65_ms,
    WDT_t_0_13s,
    WDT_t_0_26s,
    WDT_t_0_52s,
    WDT_t_1s,
    WDT_t_2_1s

} Prescale_Select;


void WDT_enable();

void WDT_disable();

void WDT_SleepTime(Prescale_Select ps);



#endif /* INC_WDT_H_ */
