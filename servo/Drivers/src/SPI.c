/*
 * SPI.c
 *
 *  Created on: ??�/??�/????
 *      Author: medoa
 */

#include "std_types.h"
#include "macros.h"
#include "Registers.h"
#include"SPI.h"
#include"SPI_confg.h"
#include "DIO.h"


void SPI_Init(){


    SET_BIT(SPCR,SPCR_SPE);
    #if ( 0 && SPI_Mode == SPI_Master)
        SET_BIT(SPCR,SPCR_MSTR);
        /* f/128*/
        SET_BIT(SPCR,SPCR_SPR0);
        SET_BIT(SPCR,SPCR_SPR1);
        CLR_BIT(SPSR,SPSR_SPI2X);
        DIO_SetPinMode(DIO_PORTB,DIO_PIN5,DIO_OUTPUT);
        DIO_SetPinMode(DIO_PORTB,DIO_PIN6,DIO_INPUT_FLOATING);
        DIO_SetPinMode(DIO_PORTB,DIO_PIN7,DIO_OUTPUT);
        DIO_SetPinMode(DIO_PORTB,DIO_PIN4,DIO_OUTPUT);
    #elif (1 || SPI_Mode == SPI_Slave)
        CLR_BIT(SPCR,SPCR_MSTR);
        DIO_SetPinMode(DIO_PORTB,DIO_PIN5,DIO_INPUT_FLOATING);
        DIO_SetPinMode(DIO_PORTB,DIO_PIN6,DIO_OUTPUT);
        DIO_SetPinMode(DIO_PORTB,DIO_PIN7,DIO_INPUT_FLOATING);
        DIO_SetPinMode(DIO_PORTB,DIO_PIN4,DIO_INPUT_FLOATING);
    #endif
    #if (SPI_Direction == LSB)
        SET_BIT(SPCR,SPCR_DORD);
    #elif (SPI_Direction == MSB)
        CLR_BIT(SPCR,SPCR_DORD);
    #endif

    
}

void SPI_Send_Data(u8 data){
    SPDR=data;
    while (GET_BIT(SPSR,7)==0);
}

u8 SPI_Recieve_Data()
{
    while (GET_BIT(SPSR,7)==0);
    return SPDR;
}
