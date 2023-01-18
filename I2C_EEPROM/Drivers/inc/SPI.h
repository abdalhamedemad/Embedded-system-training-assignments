/*
 * SPI.h
 *
 *  Created on: ??�/??�/????
 *      Author: medoa
 */

#ifndef INC_SPI_H_
#define INC_SPI_H_
#include "Registers.h"

#define SPCR_DORD 5
#define SPCR_SPE 6
#define SPCR_MSTR 4

#define SPCR_SPR0 0
#define SPCR_SPR1 1
#define SPSR_SPI2X 0

u8 SPI_Recieve_Data();
void SPI_Send_Data(u8 data);
void SPI_Init();



#endif /* INC_SPI_H_ */
