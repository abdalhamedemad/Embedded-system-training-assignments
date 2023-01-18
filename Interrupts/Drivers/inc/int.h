/*
 * int.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: medoa
 */

/*
 * int.h
 *
 *  Created on: Sep 4, 2022
 *      Author: ahmad
 */

#ifndef INC_INT_H_
#define INC_INT_H_

#define VECTOR_EXT_INT0     __vector_1
#define VECTOR_EXT_INT1     __vector_2
#define VECTOR_EXT_INT2     __vector_3
#define VECTOR_ADC          __vector_16

#  define ISR(vector)            \
    void vector (void) __attribute__ ((signal)); \
    void vector (void)


#endif /* INC_INT_H_ */
