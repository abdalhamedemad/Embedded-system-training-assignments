/*
 * I2C.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: medoa
 */

#ifndef INC_I2C_H_
#define INC_I2C_H_

void I2C_InitMaster(void);
void I2C_SendStartCondition(void);
void I2C_SendStopCondition(void);
void I2C_MasterWriteDataByte(u8 Data);
u8   I2C_MasterReadDataByteWith_ACK(void);           //read with send Ack
u8   I2C_MasterReadDataByteWith_NACK(void);          //read without send Ack


#endif /* INC_I2C_H_ */
