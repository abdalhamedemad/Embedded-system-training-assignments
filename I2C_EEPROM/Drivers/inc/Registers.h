/*
 * Registers.h
 *
 *  Created on: ??�/??�/????
 *      Author: medoa
 */

#ifndef INC_REGISTERS_H_
#define INC_REGISTERS_H_

/************ DIO Registers ************/
#define PORTA	*((volatile u8*)0x3B)
#define DDRA	*((volatile u8*)0x3A)
#define PINA	*((volatile u8*)0x39)

#define PORTB	*((volatile u8*)0x38)
#define DDRB	*((volatile u8*)0x37)
#define PINB	*((volatile u8*)0x36)

#define PORTC	*((volatile u8*)0x35)
#define DDRC	*((volatile u8*)0x34)
#define PINC	*((volatile u8*)0x33)

#define PORTD	*((volatile u8*)0x32)
#define DDRD	*((volatile u8*)0x31)
#define PIND	*((volatile u8*)0x30)

/************ External Interrupt ************/
#define MCUCR *((volatile u8*)0x55)
#define MCUCSR	*((volatile u8*)0x54)
#define GICR	*((volatile u8*)0x5B)
#define GIFR	*((volatile u8*)0x5A)

/************ Global Interrupt ************/
#define SREG	*((volatile u8*)0x5F)

/************ ADC ************/
#define ADMUX                   *((volatile u8*)0x27)
#define ADCSRA                  *((volatile u8*)0x26)
#define ADC_DATA_REGISTER       *((volatile u16*)0x24)
#define ADCL                    *((volatile u8*)0x24)
#define ADCH                    *((volatile u8*)0x25)
#define SFIOR                   *((volatile u8*)0x50)

/************ TIMER 0 ************/
#define TCCR0                   *((volatile u8*)0x53)
#define TCNT0                   *((volatile u8*)0x52)
#define OCR0                    *((volatile u8*)0x5C)
#define TIMSK                   *((volatile u8*)0x59)
#define TIFR                    *((volatile u8*)0x58)

/************ TIMER 1 ************/
#define TCCR1A                   *((volatile u8*)0x4F)
#define TCCR1B                   *((volatile u8*)0x4E)
#define TCNT1H                   *((volatile u8*)0x40)
#define TCNT1L                   *((volatile u8*)0x4C)
#define TCNT1HL_DATA_REGISTER    *((volatile u16*)0x4C)

#define OCR1AH                   *((volatile u8*)0x4B)
#define OCR1AL                   *((volatile u8*)0x4A)
#define OCR1AHL_DATA_REGISTER    *((volatile u16*)0x4A)

#define OCR1BH                   *((volatile u8*)0x49)
#define OCR1BL                   *((volatile u8*)0x48)
#define OCR1BHL_DATA_REGISTER    *((volatile u16*)0x48)

#define ICR1H                    *((volatile u8*)0x47)
#define ICR1L                    *((volatile u8*)0x46)
#define ICR1_LH                  *((volatile u16*)0x46)
/************ TIMER 2 ************/
#define TCCR2                   *((volatile u8*)0x45)
#define TCNT2                   *((volatile u8*)0x44)
#define OCR2                    *((volatile u8*)0x43)



/******************* UART registers           */
#define UDR                    *((volatile u8*)0x2C)
#define UCSRA                    *((volatile u8*)0x2B)
#define UCSRB                    *((volatile u8*)0x2A)
#define UCSRC                    *((volatile u8*)0x40)
#define UBRRL                    *((volatile u8*)0x29)
#define UBRRH                    *((volatile u8*)0x40)
#define OCR2                    *((volatile u8*)0x43)
/******************* SPI registers ************************/
#define SPCR                    *((volatile u8*)0x2D)
#define SPDR                    *((volatile u8*)0x2F)
#define SPSR                    *((volatile u8*)0x2E)
/************ I2C ************/
#define TWBR     *((volatile u8*)0x20)
#define TWCR     *((volatile u8*)0x56)
#define TWSR     *((volatile u8*)0x21)
#define TWDR     *((volatile u8*)0x23)
#define TWAR     *((volatile u8*)0x22)

#define START_ACK             0x08  // start has been sent
#define REP_START_ACK         0x10  // repeated start
#define SLAVE_ADD_AND_WR_ACK  0x18  // Master transmit ( slave address + Write request ) to slave + Ack received from slave
#define SLAVE_ADD_AND_RD_ACK  0x40  // Master transmit ( slave address + Read request ) to slave + Ack received from slave
#define MSTR_WR_BYTE_ACK      0x28  // Master transmit data and ACK has been received from Slave.
#define MSTR_RD_BYTE_ACK      0x50  // Master received data and send ACK to slave
#define MSTR_RD_BYTE_NACK     0x58  // Master received data but doesn't send ACK to slave

#endif /* INC_REGISTERS_H_ */
