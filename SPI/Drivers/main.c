/*
 * main.c
 *
 *  Created on: ??�/??�/????
 *      Author: medoa
 */
#include "SSD.h"
#include "std_types.h"
#include "DIO.h"
#include <util/delay.h>
#include "LCD.h"
#include "Keypad.h"
#include "Calculator.h"
#include "Gpt.h"
//////////////////////////////// ADC //////////////////////////////////
#include "Adc.h"
#include "GlobalInterrupt.h"
#include "UART.h"
#include"SPI.h"
#undef F_CPU
#define F_CPU 8000000

// int main()
// {
//     // SEND ///
//     DIO_SetPinMode(DIO_PORTA, DIO_PIN0, DIO_INPUT_PULLUP);
//     SPI_Init();
//     while (1)
//     {
//         if (DIO_ReadPinLevel(DIO_PORTA, DIO_PIN0) == 0)
//         {
//             DIO_SetPinLevel(DIO_PORTB,DIO_PIN4,DIO_LOW);
//             SPI_Send_Data(1);
//             DIO_SetPinLevel(DIO_PORTB,DIO_PIN4,DIO_HIGH);
//         }
//         else if (DIO_ReadPinLevel(DIO_PORTA, DIO_PIN0) == 1)
//         {
//             DIO_SetPinLevel(DIO_PORTB,DIO_PIN4,DIO_LOW);
//             SPI_Send_Data(0);
//             DIO_SetPinLevel(DIO_PORTB,DIO_PIN4,DIO_LOW);
//         }
//         /* code */
//     }
// }

int main(){
  DIO_SetPinMode(DIO_PORTC,DIO_PIN0,DIO_OUTPUT);
  DIO_SetPinMode(DIO_PORTC,DIO_PIN1,DIO_OUTPUT);
//    DIO_SetPinLevel(DIO_PORTC,DIO_PIN0,DIO_HIGH);
         //   _delay_ms(1000);
  //DIO_SetPinLevel(DIO_PORTD,DIO_PIN0,DIO_INPUT_FLOATING);
  //DIO_SetPinLevel(DIO_PORTD,DIO_PIN1,DIO_OUTPUT);
   SPI_Init();
  while (1)
  {
      if(SPI_Recieve_Data()==1)
      {
          DIO_SetPinLevel(DIO_PORTC,DIO_PIN0,DIO_HIGH);
          DIO_SetPinLevel(DIO_PORTC,DIO_PIN1,DIO_LOW);
          //_delay_ms(1000);
      }
      else if(SPI_Recieve_Data()==0){
          DIO_SetPinLevel(DIO_PORTC,DIO_PIN0,DIO_LOW);
          DIO_SetPinLevel(DIO_PORTC,DIO_PIN1,DIO_HIGH);
      }
      /* code */
  }

}















// // int main(){
// //    // SEND ///
// //    DIO_SetPinMode(DIO_PORTA,DIO_PIN0,DIO_INPUT_PULLUP);
// //    //DIO_SetPinLevel(DIO_PORTD,DIO_PIN0,DIO_INPUT_FLOATING);
// //   // DIO_SetPinLevel(DIO_PORTD,DIO_PIN1,DIO_OUTPUT);
// //    UART_Init(Asynchronous,Odd_Parity,one_Stop_bit,_8_bit,_9600);

// //    while (1)
// //    {
// //        if(DIO_ReadPinLevel(DIO_PORTA,DIO_PIN0)==0)
// //        {
// //            UART_Send_Data(1);

// //        }
// //        else if(DIO_ReadPinLevel(DIO_PORTA,DIO_PIN0)==1){
// //            UART_Send_Data(0);
// //        }
// //        /* code */
// //    }
// // }

// int main(){
//    DIO_SetPinMode(DIO_PORTC,DIO_PIN0,DIO_OUTPUT);
//    DIO_SetPinLevel(DIO_PORTC,DIO_PIN0,DIO_HIGH);
//           //   _delay_ms(1000);
//    //DIO_SetPinLevel(DIO_PORTD,DIO_PIN0,DIO_INPUT_FLOATING);
//    //DIO_SetPinLevel(DIO_PORTD,DIO_PIN1,DIO_OUTPUT);
//    UART_Init(Asynchronous,Odd_Parity,one_Stop_bit,_8_bit,_9600);
//    while (1)
//    {
//        if(Recieve_Data()==1)
//        {
//            DIO_SetPinLevel(DIO_PORTC,DIO_PIN0,DIO_HIGH);
//            //_delay_ms(1000);
//        }
//        else if(Recieve_Data()==0){
//            DIO_SetPinLevel(DIO_PORTC,DIO_PIN0,DIO_LOW);
//        }
//        /* code */
//    }

// }

// volatile u16 counter = 0;
// void TimerHandler(void) {
//     counter++;
// }

// int main (void) {
// 	 DIO_SetPinMode(DIO_PORTD,DIO_PIN5,DIO_OUTPUT);

//      while (1)
//      {servo(18);

//         /* code */
//      }

// 	 //    DIO_SetPinLevel(DIO_PORTB,DIO_PIN0,DIO_HIGH);
// 	 //    _delay_ms(1000);
//     Gpt_ConfigType config = {GPT_CHANNEL_TIMER0, SPT_MODE_Fast_PWM, GPT_OUTPUT_CLEAR, GPT_PRESCALER_1};

//    Gpt_Init(&config);
//    u8 x=0;
//   // Gpt_EnableNotification(GPT_CHANNEL_TIMER0,SPT_MODE_Fast_PWM,TimerHandler);
//    GlobalInterrupt_Enable();
//     while (1) {
//         x++;
//         Gpt_StartTimer(GPT_CHANNEL_TIMER0,x);
//         if (x == 255) {
//             x = 0;
//             //DIO_FlipPinLevel(DIO_PORTB,DIO_PIN0);
//         }
//     }
//}

// #define WITH_INT 1
// #define WITHOUT_INT 2

// #define APP WITH_INT

// #if (APP == WITH_INT)
// u16 result = 0;
// void Adc_Handler (u16 res) {
// 	result = res;
// }
// int main (void) {
// 	LCD_Init();

// 	Adc_Init();
// 	DIO_SetPinMode(DIO_PORTA, DIO_PIN0, DIO_INPUT_FLOATING);
// 	DIO_SetPinMode(DIO_PORTD, DIO_PIN0, DIO_OUTPUT);
// 	DIO_SetPinMode(DIO_PORTD, DIO_PIN1, DIO_OUTPUT);
// 	DIO_SetPinMode(DIO_PORTD, DIO_PIN3, DIO_OUTPUT);
// 	DIO_SetPinMode(DIO_PORTD, DIO_PIN2, DIO_OUTPUT);

// 	Adc_SetCallback(Adc_Handler);
// 	while (1)
// 	{
// 		u16 milli_volt = result * (5000.0/1024);
// 		LCD_SetCursorPosition(0,0);
// 		LCD_DisplayString((u8*)"Temp = ");
// 		LCD_DisplayNumber(milli_volt/10); // 0 .. 1023
// 		if((milli_volt/10) > 40)
// 		{
// 			DIO_SetPinLevel(DIO_PORTD,DIO_PIN0,DIO_HIGH);
// 			DIO_SetPinLevel(DIO_PORTD,DIO_PIN3,DIO_HIGH);

// 			DIO_SetPinLevel(DIO_PORTD,DIO_PIN1,DIO_LOW);
// 			DIO_SetPinLevel(DIO_PORTD,DIO_PIN2,DIO_LOW);

// 		}else if((milli_volt/10) < 34){
// 			DIO_SetPinLevel(DIO_PORTD,DIO_PIN1,DIO_HIGH);
// 			DIO_SetPinLevel(DIO_PORTD,DIO_PIN2,DIO_HIGH);

// 			DIO_SetPinLevel(DIO_PORTD,DIO_PIN3,DIO_LOW);
// 			DIO_SetPinLevel(DIO_PORTD,DIO_PIN0,DIO_LOW);

// 		}else{
// 			DIO_SetPinLevel(DIO_PORTD,DIO_PIN2,DIO_LOW);
// 			DIO_SetPinLevel(DIO_PORTD,DIO_PIN3,DIO_LOW);

// 			DIO_SetPinLevel(DIO_PORTD,DIO_PIN0,DIO_LOW);
// 			DIO_SetPinLevel(DIO_PORTD,DIO_PIN1,DIO_LOW);
// 		}
// 		LCD_DisplayString((u8*)" C        ");
// 		Adc_StartConversion(ADC_SINGLE_ADC0);
// 		_delay_ms(500);
// 	}
// }
// #elif (APP == WITHOUT_INT)
// int main (void) {
// 	u16 result;
// 	u16 milli_volt;
// 	LCD_Init();
// 	LCD_DisplayString("Temp = ");
// 	_delay_ms(500);

// 	Adc_Init();
// 	DIO_SetPinMode(DIO_PORTA, DIO_PIN0, DIO_INPUT_FLOATING);
// 	while (1)
// 	{
// 		Adc_StartConversion(ADC_SINGLE_ADC0);
// 		result = Adc_GetResultPolling();
// 		//while (Adc_GetResult(&result) == ADC_CONVERSION_NOT_COMPLETE);
// 		milli_volt = result * (5000.0/1024);
// 		LCD_SetCursorPosition(0,0);
// 		LCD_DisplayString((u8*)"Temp = ");
// 		LCD_DisplayNumber(milli_volt/10); // 0 .. 1023
// 		LCD_DisplayString((u8*)" C        ");
// 		_delay_ms(500);
// 	}
// }
// #endif

///////////////////////// End ADC/////////////////////////////////////

// void countup(u8 x);
// void countdown(u8 x);
// void Assignment_1_Leds_init();
// void func1();
// void flash();
// void countertrrafic();
// void lcd();
// void lcd2();
// void keypad();
// u8 Check_IS_NOtANumber (Keypad_ButtonType pressed_button );
// void interrupt();
// u8 i;
//
// void INT0_Handler (void) {
//	i = 0;
// }
// void INT1_Handler (void) {
//	DIO_SetPinLevel(DIO_PORTD,DIO_PIN4,DIO_HIGH);
// }
// void INT2_Handler (void) {
//	DIO_SetPinLevel(DIO_PORTD,DIO_PIN5,DIO_HIGH);
// }
// int main(void)
//{
//
//
//	interrupt();
//    // keypad();
//	//lcd2();
//	//countertrrafic();
//     // while (1)
//     // {
//     //     /* code */
//     // SSD_Init();
//     // SSD_Write(SSD_NUMBER_0);
//     // _delay_ms(500);
//     // SSD_Write(SSD_NUMBER_1);
//     // _delay_ms(500);
//     // SSD_Write(SSD_NUMBER_2);
//     // _delay_ms(500);
//     // SSD_Write(SSD_NUMBER_3);
//     // _delay_ms(500);
//     // SSD_Write(SSD_NUMBER_4);
//     // _delay_ms(500);
//     // SSD_Write(SSD_NUMBER_5);
//     // _delay_ms(500);
//     // SSD_Write(SSD_NUMBER_6);
//     // _delay_ms(500);
//     // SSD_Write(SSD_NUMBER_7);
//     // _delay_ms(500);
//     // SSD_Write(SSD_NUMBER_8);
//     // _delay_ms(500);
//     // SSD_Write(SSD_NUMBER_9);
//     // _delay_ms(500);
//     // }
//
//
//
//     // while(1){
//     //    	for(u8 i=0;i<10;i++){
//     //         for (u32 k = 0; k < 1000; k++)
//     //            {
//     //                /* code */
//     //
//     //
//     //            DIO_SetPinLevel(DIO_PORTC,DIO_PIN1,DIO_HIGH);
//     //            SSD_Write(0);
//     //            _delay_ms(1);
//     //            DIO_SetPinLevel(DIO_PORTC,DIO_PIN1,DIO_LOW);
//     //            DIO_SetPinLevel(DIO_PORTC,DIO_PIN0,DIO_HIGH);
//     //            SSD_Write(i);
//     //            _delay_ms(1);
//     //            DIO_SetPinLevel(DIO_PORTC,DIO_PIN0,DIO_LOW);
//     //            }
//     //    	}
//     //     if(DIO_ReadPinLevel(DIO_PORTA,DIO_PIN0)==DIO_LOW)
//     //     {
//     //         countup();
//     //     }
//     //     else if(DIO_ReadPinLevel(DIO_PORTA,DIO_PIN1)==DIO_LOW){
//     //         //DIO_SetPinLevel(DIO_PORTA,DIO_PIN2,DIO_LOW);
//     //         countdown();
//     //     }
//     // }
// }
// void interrupt(){
//   //  DIO_SetPinLevel(DIO_PORTD,DIO_PIN3,DIO_HIGH);
//	    DIO_SetPinMode(DIO_PORTD, DIO_PIN2, DIO_INPUT_PULLUP); // INT0
//         DIO_SetPinMode(DIO_PORTD, DIO_PIN3, DIO_INPUT_PULLUP); // INT0
//         DIO_SetPinMode(DIO_PORTB, DIO_PIN2, DIO_INPUT_PULLUP); // INT0
//         DIO_SetPinMode(DIO_PORTD, DIO_PIN4, DIO_OUTPUT);
//         DIO_SetPinMode(DIO_PORTD, DIO_PIN5, DIO_OUTPUT);
//         SSD_Init();
//		ExtInterrupt_SetINT0Callback(INT0_Handler);
//         ExtInterrupt_SetINT1Callback(INT1_Handler);
//         ExtInterrupt_SetINT2Callback(INT2_Handler);
//		ExtInterrupt_Init();
//		while (1)
//		{
//			for (i=0; i<10; i++)
//			{
//				SSD_Write(i);
//				_delay_ms(500);
//			}
//		}
// }
// void calmuldiv(s32 arr [],u8 x)
//{////////// 1111 + 2 + 3 + 5 ///////6  // 1+2+6*2*2+5*2
//	// 1+2*4*8
//    /// 1 + 2 + 3
//   // s32 arr[20]={1,'+',2,'+',3};
//   //LCD_Clear();
//    //x=5;
//     s32 arr2[20];
//     int c=0;
//     int divzerr=0;
//     s32 m=0;
//     for (u8 i = 1; i < x+1; i+=2)
//     {
//         //LCD_DisplayNumber(arr[i]);
//         switch (arr[i])
//         {
//             case '*':
//             arr[i+1]=arr[i-1]*arr[i+1];
//             m=arr[i+1];
//             break;
//             case '/':
//             if(arr[i+1]==0)
//                 {divzerr=1;
//                 break;
//                 }
//             arr[i+1]=arr[i-1]/arr[i+1];
//
//             break;
//             default:
//             arr2[c]=arr[i-1];
//             arr2[c+1]=arr[i];
//             c+=2;
//             break;
//         }
//         if(divzerr)
//             break;
//         /* code */
//     }
//     if(!divzerr){
//    // if(arr[x-1]=='x' || arr[x-1]=='/')
//         {
//             arr2[c]=arr[x];
//             //arr2[c+1]=arr[i];
//         }
//         // for (u8 i = 0; i < c+1; i++)
//         // {
//         //     switch (arr2[i])
//         //     {
//         //         case '+':
//         //         LCD_DisplayCharacter('+');
//         //         break;
//         //         case '-':
//         //         LCD_DisplayCharacter('-');
//         //         break;
//         //         default:
//         //         LCD_DisplayNumber(arr2[i]);
//         //         break;
//         //     }
//
//         //     /* code */
//         // }
//
//
//         ///////////////////////////////////////
//        // _delay_ms(2000);
//         //LCD_Clear();
//         for (u8 i = 1; i < c+1; i+=2)
//         {
//             //LCD_DisplayNumber(arr[i]);
//             switch (arr2[i])
//             {
//                 case '+':
//                 arr2[i+1]=arr2[i-1]+arr2[i+1];
//                 break;
//                 case '-':
//                 arr2[i+1]=arr2[i-1]-arr2[i+1];
//                 break;
//                 case '*':
//                 arr2[i+1]=arr2[i-1]*arr[i+1];
//                 break;
//                 case '/':
//                 arr[i+1]=arr[i-1]/arr[i+1];
//                 break;
//
//                 default:
//                 break;
//             }
//             /* code */
//         }
//         c=arr2[c];
//         LCD_SetCursorPosition(1,0);
//         LCD_DisplayNumber(c);
//     } else{
//         LCD_Clear();
//         LCD_DisplayString("maths error");
//     }
//
////    c=arr[x];
////    LCD_DisplayNumber(c);
//
//
//}
// void calcarr(s32 arr [],u8 x)
//{////////// 1111 + 2 + 3 + 5 ///////6  // 1+2*2*2*2+5*2
//	//
//   /// 1 + 2 + 3
//  // s32 arr[20]={1,'+',2,'+',3};
// LCD_Clear();
//   //x=5;
//    int c=0;
//    for (u8 i = 1; i < x+1; i+=2)
//    {
//        //LCD_DisplayNumber(arr[i]);
//        switch (arr[i])
//        {
//            case '+':
//            arr[i+1]=arr[i-1]+arr[i+1];
//            break;
//            case '-':
//            arr[i+1]=arr[i-1]-arr[i+1];
//            break;
//            case '*':
//            arr[i+1]=arr[i-1]*arr[i+1];
//            break;
//            case '/':
//            arr[i+1]=arr[i-1]/arr[i+1];
//            break;
//            default:
//            break;
//        }
//        /* code */
//    }
//    c=arr[x];
//    LCD_DisplayNumber(c);
//
//
//}
// void keypad(){
//    LCD_Init();
//    Keypad_Init();
//    Keypad_ButtonType pressed_button ;
//    u8 c=0;
//    u8 cn=0;
//    s32 arr[20]={0};
//    while (1)
//    {
//        /* code */
//
//
//        do{
//            pressed_button= Keypad_GetPressedButton();
//        }while (pressed_button==KEYPAD_BUTTON_INVALID);
//        if (pressed_button == CALCULATOR_BUTTON_CLR) {
//
//                LCD_Clear();
//                c=0;
//                for (u8 i = 0; i < 20; i++)
//                {
//                arr[i]=0;
//                /* code */
//                }
//                continue;
//        }
//        if(Check_IS_NOtANumber(pressed_button)){
//            s32 ss = Calculator_GetRealNumber(pressed_button);
//            LCD_DisplayNumber(ss);
//            arr[c]=arr[c]*10+ss; // 0*1+1->1   1*10+1 1 2 3
//            //arr[c]=ss;
//        }else if(pressed_button != CALCULATOR_BUTTON_EQUAL){
//            u8 operation=0;
//            switch (pressed_button)
//            {
//            case CALCULATOR_BUTTON_PLUS:
//                operation = '+';
//                break;
//            case CALCULATOR_BUTTON_MINUS:
//                operation = '-';
//                break;
//            case CALCULATOR_BUTTON_MUL:
//                operation = '*';
//                break;
//            case CALCULATOR_BUTTON_DIV:
//                operation = '/';
//                break;
//            default:
//                break;
//            }
//            LCD_DisplayCharacter(operation);
//            cn=0;
//            c++;
//            arr[c]=operation;
//            c++;
//
//        } else{
//            calmuldiv(arr,c);
//            c=0;
//            for (u8 i = 0; i < 20; i++)
//            {
//                arr[i]=0;
//                /* code */
//            }
//
//            //LCD_Clear();
//        }
//
//
//    }
//
//
//
//}
// u8 Check_IS_NOtANumber (Keypad_ButtonType pressed_button ){
//    if(pressed_button != CALCULATOR_BUTTON_CLR && pressed_button != CALCULATOR_BUTTON_PLUS && pressed_button !=CALCULATOR_BUTTON_MINUS && pressed_button != CALCULATOR_BUTTON_MUL && pressed_button !=CALCULATOR_BUTTON_DIV && pressed_button !=CALCULATOR_BUTTON_EQUAL)
//    return 1;
//    return 0;
//}
// void lcd2(){
//	LCD_Init();
//
//    DIO_SetPinMode(DIO_PORTC,DIO_PIN0,DIO_INPUT_PULLUP);
//    DIO_SetPinMode(DIO_PORTC,DIO_PIN1,DIO_INPUT_PULLUP);
//    DIO_SetPinMode(DIO_PORTC,DIO_PIN2,DIO_INPUT_PULLUP);
//    DIO_SetPinMode(DIO_PORTC,DIO_PIN3,DIO_INPUT_PULLUP);
//    DIO_SetPortMode(DIO_PORTD,DIO_OUTPUT);
//    u8 states[4]={0,0,0,0};
//    u8 boolstate=0;
//    while (1)
//    {
//
//        for (u8 i = 0; i < 4; i++)
//        {
//        if(DIO_ReadPinLevel(DIO_PORTC,i)==DIO_LOW)
//        {
//
//        if(states[i]== DIO_HIGH)
//            {
//                boolstate=1;
//                states[i]=0;
//            }
//            // LCD_Clear();
//            // LCD_DisplayString("Switch on");
//            // LCD_DisplayNumber(i);
//        }
//        if(DIO_ReadPinLevel(DIO_PORTC,i)==DIO_HIGH)
//        {
//            if(states[i]== DIO_LOW)
//            {
//                boolstate=1;
//                states[i]=1;
//            }
//            // LCD_Clear();
//            // LCD_DisplayString("Switch off");
//            // LCD_DisplayNumber(i);
//        }
//           /* code */
//        }
//        if(boolstate)
//        LCD_Clear();
//        for (u8 i = 0; (i < 4)&&boolstate; i++)
//        {
//
//            if(states[i]== DIO_HIGH){
//            LCD_DisplayString("off");
//            LCD_DisplayNumber(i);
//            LCD_DisplayCharacter(' ');
//            DIO_SetPinLevel(DIO_PORTD,i,DIO_LOW);
//            } else{
//            LCD_DisplayString("on");
//            LCD_DisplayNumber(i);
//            LCD_DisplayCharacter(' ');
//            DIO_SetPinLevel(DIO_PORTD,i,DIO_HIGH);
//            }
//
//            /* code */
//        }
//        boolstate=0;
//
//
//        /* code */
//    }
//
//
//}
// void lcd(){
//
// LCD_Init();
// u8 i=0;
// u8 x=0;
// u8 ix=16;
// u8 printed=0;
////char *name="Ahmed"; //  5 chars
// while (1)
//{
//	x=!x;
//     LCD_SetCursorPosition(x,i*5);
//
//     LCD_DisplayString("Ahmed");
//     printed+=5;
//     if(ix <40 && printed >16)
//     {
//         LCD_ShiftLeft(5);
//         ix+=5;
//         if(ix>40)
//         	return;
//     }
//
//     _delay_ms(1000);
//     i++;
//
//     /* code */
// }
// while(1)
//{}
//
//
//
//
// }
// void countertrrafic(){
//     ////////////////////////////////counter traffic//////////////
//     DIO_SetPinMode(DIO_PORTA,DIO_PIN0,DIO_OUTPUT);
//     DIO_SetPinMode(DIO_PORTA,DIO_PIN1,DIO_OUTPUT);
//     DIO_SetPinMode(DIO_PORTA,DIO_PIN2,DIO_OUTPUT);
//     DIO_SetPinMode(DIO_PORTC,DIO_PIN0,DIO_OUTPUT);
//     DIO_SetPinMode(DIO_PORTC,DIO_PIN1,DIO_OUTPUT);
//     SSD_Init();
//
//     // Assignment_1_Leds_init();
//     while (1)
//     {
//         //DIO_SetPinLevel(DIO_PORTA,DIO_PIN0,DIO_HIGH);
//         //_delay_ms(1000);
//         //DIO_SetPinLevel(DIO_PORTA,DIO_PIN0,DIO_LOW);
//         DIO_SetPinLevel(DIO_PORTA,DIO_PIN0,DIO_HIGH);
//         countup(10);
//         DIO_SetPinLevel(DIO_PORTA,DIO_PIN0,DIO_LOW);
//         DIO_SetPinLevel(DIO_PORTA,DIO_PIN1,DIO_HIGH);
//         countup(3);
//         DIO_SetPinLevel(DIO_PORTA,DIO_PIN1,DIO_LOW);
//         DIO_SetPinLevel(DIO_PORTA,DIO_PIN2,DIO_HIGH);
//         countup(10);
//         DIO_SetPinLevel(DIO_PORTA,DIO_PIN2,DIO_LOW);
//
//         /* code */
//     }
//
//
// }
// void flash()
//{
//     // DIO_SetPortMode(DIO_PORTA,DIO_OUTPUT);
//     for (u8 i = 0; i < 5; i++)
//     {
//         DIO_SetPortLevel(DIO_PORTA, DIO_HIGH);
//         DIO_SetPortLevel(DIO_PORTB, DIO_HIGH);
//         _delay_ms(250);
//         DIO_SetPortLevel(DIO_PORTA, DIO_LOW);
//         DIO_SetPortLevel(DIO_PORTB, DIO_LOW);
//         _delay_ms(250);
//         /* code */
//     }
//     _delay_ms(250);
// }
// void Assignment_1_Leds_init()
//{
//     DIO_SetPortMode(DIO_PORTA, DIO_OUTPUT);
//     DIO_SetPortMode(DIO_PORTB, DIO_OUTPUT);
//     DIO_SetPinMode(DIO_PORTD, DIO_PIN0, DIO_INPUT_PULLUP);
//     DIO_SetPinMode(DIO_PORTD, DIO_PIN1, DIO_INPUT_PULLUP);
//     DIO_SetPinMode(DIO_PORTD, DIO_PIN2, DIO_INPUT_PULLUP);
//
//     while (1)
//     {
//         if (DIO_ReadPinLevel(DIO_PORTD, DIO_PIN0) == DIO_LOW)
//         {
//             func1();
//         }
//         else if (DIO_ReadPinLevel(DIO_PORTD, DIO_PIN1) == DIO_LOW)
//         {
//             // DIO_SetPinLevel(DIO_PORTA,DIO_PIN2,DIO_LOW);
//             func2();
//         }
//         else if (DIO_ReadPinLevel(DIO_PORTD, DIO_PIN2) == DIO_LOW)
//         {
//             // DIO_SetPinLevel(DIO_PORTA,DIO_PIN2,DIO_LOW);
//             func3();
//         }
//     }
// }
// void func1()
//{
//
//     flash();
//
//     u8 i = 0;
//     for (i = 0; i <= 8; i++)
//     {
//         // SET_BIT(PORTA,i);
//         DIO_SetPinLevel(DIO_PORTA, i, DIO_HIGH);
//         _delay_ms(250);
//         /* code */
//     }
//     _delay_ms(250);
//     for (i = 0; i <= 8; i++)
//     {
//         // SET_BIT(PORTB,i);
//         DIO_SetPinLevel(DIO_PORTB, i, DIO_HIGH);
//         _delay_ms(250);
//         /* code */
//     }
//     _delay_ms(250);
//     for (i = 7; i >= 0; i--)
//     {
//         // CLR_BIT(PORTB,i);
//         DIO_SetPinLevel(DIO_PORTB, i, DIO_LOW);
//         _delay_ms(250);
//         if (i == 0)
//             break;
//     }
//     _delay_ms(250);
//     for (i = 7; i >= 0; i--)
//     {
//         // CLR_BIT(PORTA,i);
//         DIO_SetPinLevel(DIO_PORTA, i, DIO_LOW);
//         _delay_ms(250);
//         if (i == 0)
//             break;
//         /* code */
//     }
// }
// void func2()
//{
//     flash();
//     u8 i = 0;
//     for (i = 0; i <= 8; i++)
//     {
//         // SET_BIT(PORTA,i);
//         DIO_SetPinLevel(DIO_PORTA, i, DIO_HIGH);
//         // SET_BIT(PORTB,7-i);
//         DIO_SetPinLevel(DIO_PORTB, 7 - i, DIO_HIGH);
//         _delay_ms(250);
//         /* code */
//     }
//     _delay_ms(250);
//     for (i = 7; i >= 0; i--)
//     {
//         // CLR_BIT(PORTB,7-i);
//         DIO_SetPinLevel(DIO_PORTB, 7 - i, DIO_LOW);
//         // CLR_BIT(PORTA,i);
//         DIO_SetPinLevel(DIO_PORTA, i, DIO_LOW);
//         _delay_ms(250);
//         if (i == 0)
//             break;
//         /* code */
//     }
//     _delay_ms(250);
// }

// void func3()
//{
//     flash();
//     u8 i = 0;
//     for (i = 0; i < 8; i++)
//     {
//         // SET_BIT(PORTA,i);
//         DIO_SetPinLevel(DIO_PORTA, i, DIO_HIGH);
//         _delay_ms(250);
//         // if(i!=0)
//         // CLR_BIT(PORTA,i);
//         DIO_SetPinLevel(DIO_PORTA, i, DIO_LOW);
//         /* code */
//     }
//     _delay_ms(250);
//     for (i = 0; i < 8; i++)
//     {
//         // SET_BIT(PORTB,i);
//         DIO_SetPinLevel(DIO_PORTB, i, DIO_HIGH);
//         _delay_ms(250);
//         // CLR_BIT(PORTB,i);
//         DIO_SetPinLevel(DIO_PORTB, i, DIO_LOW);
//         /* code */
//     }
//     _delay_ms(250);
//     for (i = 7; i >= 0; i--)
//     {
//         // SET_BIT(PORTB,i);
//         DIO_SetPinLevel(DIO_PORTB, i, DIO_HIGH);
//         _delay_ms(250);
//         // CLR_BIT(PORTB,i);
//         DIO_SetPinLevel(DIO_PORTB, i, DIO_LOW);
//         if (i == 0)
//             break;
//         /* code */
//     }
//     _delay_ms(250);
//     for (i = 7; i >= 0; i--)
//     {
//         // SET_BIT(PORTA,i);
//         DIO_SetPinLevel(DIO_PORTA, i, DIO_HIGH);
//         _delay_ms(250);
//         // if(i!=0)
//         // CLR_BIT(PORTA,i);
//         DIO_SetPinLevel(DIO_PORTA, i, DIO_LOW);
//         if (i == 0)
//             break;
//         /* code */
//     }
// }
// void countup(u8 x)
//{
//     u8 i;
//     u8 j;
//     u32 k;
//     //u8 f=0;
//     for (i = 0; i <= 9; i++)
//     {
//         DIO_SetPinLevel(DIO_PORTC, DIO_PIN1, DIO_HIGH);
//         SSD_Write(i);
//         //_delay_ms(500);
//         DIO_SetPinLevel(DIO_PORTC, DIO_PIN1, DIO_LOW);
//         for (j = 0; j <= 9; j++)
//         {
//             for (u32 k = 0; k < 100; k++)
//             {
//                 /* code */
//                 DIO_SetPinLevel(DIO_PORTC, DIO_PIN1, DIO_HIGH);
//                 SSD_Write(i);
//                 _delay_ms(3);
//                 DIO_SetPinLevel(DIO_PORTC, DIO_PIN1, DIO_LOW);
//                 DIO_SetPinLevel(DIO_PORTC, DIO_PIN0, DIO_HIGH);
//                 SSD_Write(j);
//                 _delay_ms(3);
//                 DIO_SetPinLevel(DIO_PORTC, DIO_PIN0, DIO_LOW);
//             }
//             if((i*10+j)==x)
//                 return;
//             //_delay_ms(100);
//             /* code */
//         }
//         DIO_SetPinLevel(DIO_PORTC, DIO_PIN0, DIO_HIGH);
//         SSD_Write(0);
//         DIO_SetPinLevel(DIO_PORTC, DIO_PIN0, DIO_LOW);
//         /* code */
//     }
// }
// void countdown( u8 x)
//{
//     u8 ii=x/10;
//     u8 jj=x-ii;
//     u8 i;
//     u8 j;
//     u32 k;
//     for (i = 1; i >= 0; i--)
//     {
//         DIO_SetPinLevel(DIO_PORTC, DIO_PIN1, DIO_HIGH);
//         SSD_Write(i);
//         //_delay_ms(500);
//       DIO_SetPinLevel(DIO_PORTC, DIO_PIN1, DIO_LOW);
//         for (j = 9; j >= 0; j--)
//         {
//             for (u32 k = 0; k < 100; k++)
//             {
//                 /* code */
//                 DIO_SetPinLevel(DIO_PORTC, DIO_PIN1, DIO_HIGH);
//                 SSD_Write(i);
//                 _delay_ms(3);
//                 DIO_SetPinLevel(DIO_PORTC, DIO_PIN1, DIO_LOW);
//                 DIO_SetPinLevel(DIO_PORTC, DIO_PIN0, DIO_HIGH);
//                 SSD_Write(j);
//                 _delay_ms(3);
//                 DIO_SetPinLevel(DIO_PORTC, DIO_PIN0, DIO_LOW);
//             }
//             if (j == 0)
//                 break;
//             //_delay_ms(100);
//             /* code */
//         }
//         DIO_SetPinLevel(DIO_PORTC, DIO_PIN0, DIO_HIGH);
//         SSD_Write(0);
//         DIO_SetPinLevel(DIO_PORTC, DIO_PIN0, DIO_LOW);
//         /* code */
//         if (i == 0)
//             break;
//     }
// }
