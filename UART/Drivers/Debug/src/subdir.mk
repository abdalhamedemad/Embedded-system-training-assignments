################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Adc.c \
../src/Calculator.c \
../src/DIO.c \
../src/ExtInterrupt.c \
../src/GlobalInterrupt.c \
../src/Gpt.c \
../src/Keypad.c \
../src/LCD.c \
../src/SSD.c \
../src/UART.c 

OBJS += \
./src/Adc.o \
./src/Calculator.o \
./src/DIO.o \
./src/ExtInterrupt.o \
./src/GlobalInterrupt.o \
./src/Gpt.o \
./src/Keypad.o \
./src/LCD.o \
./src/SSD.o \
./src/UART.o 

C_DEPS += \
./src/Adc.d \
./src/Calculator.d \
./src/DIO.d \
./src/ExtInterrupt.d \
./src/GlobalInterrupt.d \
./src/Gpt.d \
./src/Keypad.d \
./src/LCD.d \
./src/SSD.d \
./src/UART.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"E:\CMP2024\ITI embeded sysytem\Workspaceforembeded\Drivers\inc" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


