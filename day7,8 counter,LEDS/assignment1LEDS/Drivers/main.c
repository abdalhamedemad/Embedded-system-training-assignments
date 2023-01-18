/*
 * main.c
 *
 *  Created on: ??ï؟½/??ï؟½/????
 *      Author: medoa
 */
#include"SSD.h"
#include"std_types.h"
#include"DIO.h"
#include<util/delay.h>

void countup();
void countdown();
void Assignment_1_Leds_init();
void func1();
void flash();
int main(void)
{
   
    Assignment_1_Leds_init();


    

}
void flash(){
    //DIO_SetPortMode(DIO_PORTA,DIO_OUTPUT);

    for(u8 i=0; i<5;i++)
    {
        DIO_SetPortLevel(DIO_PORTA,DIO_HIGH);
        DIO_SetPortLevel(DIO_PORTB,DIO_HIGH);
        _delay_ms(250);
        DIO_SetPortLevel(DIO_PORTA,DIO_LOW);
        DIO_SetPortLevel(DIO_PORTB,DIO_LOW);
        _delay_ms(250);
       /* code */
    }
    _delay_ms(250);
}
void Assignment_1_Leds_init(){
    DIO_SetPortMode(DIO_PORTA,DIO_OUTPUT);
    DIO_SetPortMode(DIO_PORTB,DIO_OUTPUT);
    DIO_SetPinMode(DIO_PORTD,DIO_PIN0,DIO_INPUT_PULLUP);
    DIO_SetPinMode(DIO_PORTD,DIO_PIN1,DIO_INPUT_PULLUP);
    DIO_SetPinMode(DIO_PORTD,DIO_PIN2,DIO_INPUT_PULLUP);
    
    while (1)
    {
        if(DIO_ReadPinLevel(DIO_PORTD,DIO_PIN0)==DIO_LOW)
            {
                func1();
            }
            else if(DIO_ReadPinLevel(DIO_PORTD,DIO_PIN1)==DIO_LOW){
                //DIO_SetPinLevel(DIO_PORTA,DIO_PIN2,DIO_LOW);
                func2();
            }else if(DIO_ReadPinLevel(DIO_PORTD,DIO_PIN2)==DIO_LOW){
                //DIO_SetPinLevel(DIO_PORTA,DIO_PIN2,DIO_LOW);
                func3();
            }
    }

}
void func1(){
    flash();
	u8 i=0;
	for ( i = 0; i <=8; i++)
		{
		    //SET_BIT(PORTA,i);
            DIO_SetPinLevel(DIO_PORTA,i,DIO_HIGH);
		    _delay_ms(250);
		    /* code */
		}
			_delay_ms(250);
	for ( i = 0; i <=8; i++)
		{
			//SET_BIT(PORTB,i);
            DIO_SetPinLevel(DIO_PORTB,i,DIO_HIGH);
			_delay_ms(250);
			/* code */
		}
			_delay_ms(250);
	for ( i = 7; i >=0; i--)
		{
			//CLR_BIT(PORTB,i);
            DIO_SetPinLevel(DIO_PORTB,i,DIO_LOW);
			_delay_ms(250);
			if(i==0)
			break;

		}
			_delay_ms(250);
	for ( i = 7; i >=0; i--)
		{
			//CLR_BIT(PORTA,i);
            DIO_SetPinLevel(DIO_PORTA,i,DIO_LOW);
			_delay_ms(250);
			if(i==0)
				break;
			/* code */
		}



}
void func2(){
    flash();
	u8 i=0;
	for ( i = 0; i <=8; i++)
			{
				//SET_BIT(PORTA,i);
                DIO_SetPinLevel(DIO_PORTA,i,DIO_HIGH);
				//SET_BIT(PORTB,7-i);
                DIO_SetPinLevel(DIO_PORTB,7-i,DIO_HIGH);
				_delay_ms(250);
				/* code */
			}
			_delay_ms(250);


			for ( i = 7; i >=0; i--)
			{

				//CLR_BIT(PORTB,7-i);
                DIO_SetPinLevel(DIO_PORTB,7-i,DIO_LOW);
				//CLR_BIT(PORTA,i);
                DIO_SetPinLevel(DIO_PORTA,i,DIO_LOW);
				_delay_ms(250);
				if(i==0)
				break;
						/* code */
			}
			_delay_ms(250);


}

void func3(){
    flash();
	u8 i=0;
    for ( i = 0; i <8; i++)
    {
        //SET_BIT(PORTA,i);
        DIO_SetPinLevel(DIO_PORTA,i,DIO_HIGH);
        _delay_ms(250);
        //if(i!=0)
        //CLR_BIT(PORTA,i);
        DIO_SetPinLevel(DIO_PORTA,i,DIO_LOW);
        /* code */
    }
    _delay_ms(250);
    for ( i = 0; i <8; i++)
    {
        //SET_BIT(PORTB,i);
        DIO_SetPinLevel(DIO_PORTB,i,DIO_HIGH);
        _delay_ms(250);
        //CLR_BIT(PORTB,i);
        DIO_SetPinLevel(DIO_PORTB,i,DIO_LOW);
        /* code */
    }
    _delay_ms(250);

    for ( i = 7; i >=0; i--)
    {
        //SET_BIT(PORTB,i);
        DIO_SetPinLevel(DIO_PORTB,i,DIO_HIGH);
        _delay_ms(250);
        //CLR_BIT(PORTB,i);
        DIO_SetPinLevel(DIO_PORTB,i,DIO_LOW);
        if(i==0)
        break;
        /* code */
        }
        _delay_ms(250);
        for ( i = 7; i >=0; i--)
        {
        //SET_BIT(PORTA,i);
        DIO_SetPinLevel(DIO_PORTA,i,DIO_HIGH);
        _delay_ms(250);
        //if(i!=0)
        //CLR_BIT(PORTA,i);
        DIO_SetPinLevel(DIO_PORTA,i,DIO_LOW);
        if(i==0)
        break;
        /* code */
    }




}