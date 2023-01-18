/*
 * Adc.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: medoa
 */

/*
 * Adc.h
 *
 *  Created on: Sep 4, 2022
 *      Author: ahmad
 */

#ifndef INC_ADC_H_
#define INC_ADC_H_

/* ADUMX Register Bits */
#define ADMUX_REFS1     7
#define ADMUX_REFS0     6
#define ADMUX_ADLAR     5
#define ADMUX_MUX4      4
#define ADMUX_MUX3      3
#define ADMUX_MUX2      2
#define ADMUX_MUX1      1
#define ADMUX_MUX0      0

#define ADCSRA_ADEN     7
#define ADCSRA_ADSC     6
#define ADCSRA_ADATE    5
#define ADCSRA_ADIF     4
#define ADCSRA_ADIE     3
#define ADCSRA_ADPS2    2
#define ADCSRA_ADPS1    1
#define ADCSRA_ADPS0    0


typedef enum {
    ADC_SINGLE_ADC0,
    ADC_SINGLE_ADC1,
    ADC_SINGLE_ADC2,
    ADC_SINGLE_ADC3,
    ADC_SINGLE_ADC4,
    ADC_SINGLE_ADC5,
    ADC_SINGLE_ADC6,
    ADC_SINGLE_ADC7,
    ADC_DIFF_ADC0_ADC0_X10,
    // TODO Complete all compinations
} Adc_ChannelType;

typedef enum {
    ADC_CONVERSION_NOT_COMPLETE,
    ADC_CONVERSION_COMPLETE
} Adc_ConversionStateType;

void Adc_Init(void);
void Adc_Enable(void);
void Adc_Disable(void);
void Adc_StartConversion(Adc_ChannelType channel);
Adc_ConversionStateType Adc_GetResult(u16* result);
u16 Adc_GetResultPolling(void);
void Adc_SetCallback (void (*callback) (u16 res));

#endif /* INC_ADC_H_ */

