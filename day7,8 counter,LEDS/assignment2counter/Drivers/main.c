/*
 * main.c
 *
 *  Created on: ??�/??�/????
 *      Author: medoa
 */
#include"SSD.h"
#include"std_types.h"
#include"DIO.h"
#include<util/delay.h>

void countup();
void countdown();
int main(void)
{
    
    DIO_SetPinMode(DIO_PORTA,DIO_PIN0,DIO_INPUT_PULLUP);
    DIO_SetPinMode(DIO_PORTA,DIO_PIN1,DIO_INPUT_PULLUP);
    DIO_SetPinMode(DIO_PORTA,DIO_PIN2,DIO_OUTPUT);
    DIO_SetPinMode(DIO_PORTC,DIO_PIN0,DIO_OUTPUT);
    DIO_SetPinMode(DIO_PORTC,DIO_PIN1,DIO_OUTPUT);
	SSD_Init();
    while(1){
//    	for(u8 i=0;i<10;i++){
//         for (u32 k = 0; k < 1000; k++)
//            {
//                /* code */
//
//
//            DIO_SetPinLevel(DIO_PORTC,DIO_PIN1,DIO_HIGH);
//            SSD_Write(0);
//            _delay_ms(1);
//            DIO_SetPinLevel(DIO_PORTC,DIO_PIN1,DIO_LOW);
//            DIO_SetPinLevel(DIO_PORTC,DIO_PIN0,DIO_HIGH);
//            SSD_Write(i);
//            _delay_ms(1);
//            DIO_SetPinLevel(DIO_PORTC,DIO_PIN0,DIO_LOW);
//            }
//    	}
        if(DIO_ReadPinLevel(DIO_PORTA,DIO_PIN0)==DIO_LOW)
        {
            countup();
        }
        else if(DIO_ReadPinLevel(DIO_PORTA,DIO_PIN1)==DIO_LOW){
            //DIO_SetPinLevel(DIO_PORTA,DIO_PIN2,DIO_LOW);
            countdown();
        }
	}


    

}
void countup(){
    u8 i;
    u8 j;
    u32 k;
    for ( i = 0; i <= 9; i++)
    {
        DIO_SetPinLevel(DIO_PORTC,DIO_PIN1,DIO_HIGH);
        SSD_Write(i);
        //_delay_ms(500);
        DIO_SetPinLevel(DIO_PORTC,DIO_PIN1,DIO_LOW);
        for ( j = 0; j <= 9; j++)
        {   
            for (u32 k = 0; k < 100; k++)
            {
                /* code */
            
            
            DIO_SetPinLevel(DIO_PORTC,DIO_PIN1,DIO_HIGH);
            SSD_Write(i);
            _delay_ms(3);
            DIO_SetPinLevel(DIO_PORTC,DIO_PIN1,DIO_LOW);
            DIO_SetPinLevel(DIO_PORTC,DIO_PIN0,DIO_HIGH);
            SSD_Write(j);
            _delay_ms(3);
            DIO_SetPinLevel(DIO_PORTC,DIO_PIN0,DIO_LOW);
            }
            //_delay_ms(100);
            /* code */
        }
        DIO_SetPinLevel(DIO_PORTC,DIO_PIN0,DIO_HIGH);
        SSD_Write(0);
        DIO_SetPinLevel(DIO_PORTC,DIO_PIN0,DIO_LOW);
        /* code */
    }
    

}
void countdown(){
    u8 i;
    u8 j;
    u32 k;
    for ( i = 9; i >= 0; i--)
    {
        DIO_SetPinLevel(DIO_PORTC,DIO_PIN1,DIO_HIGH);
        SSD_Write(i);
        //_delay_ms(500);
        DIO_SetPinLevel(DIO_PORTC,DIO_PIN1,DIO_LOW);
        for ( j = 9; j >= 0; j--)
        {   
            for (u32 k = 0; k < 100; k++)
            {
                /* code */
            
            
            DIO_SetPinLevel(DIO_PORTC,DIO_PIN1,DIO_HIGH);
            SSD_Write(i);
            _delay_ms(3);
            DIO_SetPinLevel(DIO_PORTC,DIO_PIN1,DIO_LOW);
            DIO_SetPinLevel(DIO_PORTC,DIO_PIN0,DIO_HIGH);
            SSD_Write(j);
            _delay_ms(3);
            DIO_SetPinLevel(DIO_PORTC,DIO_PIN0,DIO_LOW);
            }
            if(j==0)
                break;
            //_delay_ms(100);
            /* code */
        }
        DIO_SetPinLevel(DIO_PORTC,DIO_PIN0,DIO_HIGH);
        SSD_Write(0);
        DIO_SetPinLevel(DIO_PORTC,DIO_PIN0,DIO_LOW);
        /* code */
        if(i==0)
            break;
    }
    
}
