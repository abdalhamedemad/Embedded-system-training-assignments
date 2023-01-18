/*
 * WDT.c
 *
 *  Created on: ??�/??�/????
 *      Author: medoa
 */
#include "WDT.h"
#include "macros.h"
#include "std_types.h"

void WDT_enable(){
    SET_BIT(WDTCR,WDTCR_WDE);
}

/*
 t_16ms,
    t_32_5ms,
    t_65_ms,
    t_0_13s,
    t_0_26s,
    t_0_52s,
    t_1s,
    t_2_1s
*/
void WDT_disable(){
    WDTCR=0b00001100;
    // WDTCR=0;
}
void WDT_SleepTime(Prescale_Select ps){
    switch (ps)
    {
    case WDT_t_16ms :
        CLR_BIT(WDTCR,WDTCR_WDP0);
        CLR_BIT(WDTCR,WDTCR_WDP1);
        CLR_BIT(WDTCR,WDTCR_WDP2);
        /* code */
        break;
    case WDT_t_32_5ms :
        SET_BIT(WDTCR,WDTCR_WDP0);
        CLR_BIT(WDTCR,WDTCR_WDP1);
        CLR_BIT(WDTCR,WDTCR_WDP2);
        /* code */
        break;
    case WDT_t_65_ms :
        CLR_BIT(WDTCR,WDTCR_WDP0);
        SET_BIT(WDTCR,WDTCR_WDP1);
        CLR_BIT(WDTCR,WDTCR_WDP2);
        /* code */
        break;
    case WDT_t_0_13s :
        SET_BIT(WDTCR,WDTCR_WDP0);
        SET_BIT(WDTCR,WDTCR_WDP1);
        CLR_BIT(WDTCR,WDTCR_WDP2);
        /* code */
        break;
    case WDT_t_0_26s :
        CLR_BIT(WDTCR,WDTCR_WDP0);
        CLR_BIT(WDTCR,WDTCR_WDP1);
        SET_BIT(WDTCR,WDTCR_WDP2);
        /* code */
        break;
    case WDT_t_0_52s :
        SET_BIT(WDTCR,WDTCR_WDP0);
        CLR_BIT(WDTCR,WDTCR_WDP1);
        SET_BIT(WDTCR,WDTCR_WDP2);
        /* code */
        break;
    case WDT_t_1s :
        CLR_BIT(WDTCR,WDTCR_WDP0);
        SET_BIT(WDTCR,WDTCR_WDP1);
        SET_BIT(WDTCR,WDTCR_WDP2);
        /* code */
        break;
    case WDT_t_2_1s :
        SET_BIT(WDTCR,WDTCR_WDP0);
        SET_BIT(WDTCR,WDTCR_WDP1);
        SET_BIT(WDTCR,WDTCR_WDP2);
        /* code */
        break;
    
    
    default:
        CLR_BIT(WDTCR,WDTCR_WDP0);
        CLR_BIT(WDTCR,WDTCR_WDP1);
        CLR_BIT(WDTCR,WDTCR_WDP2);
        break;
    }
}
