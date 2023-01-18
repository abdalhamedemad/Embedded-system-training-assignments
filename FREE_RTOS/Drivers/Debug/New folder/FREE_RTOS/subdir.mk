################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../New\ folder/FREE_RTOS/croutine.c \
../New\ folder/FREE_RTOS/heap_1.c \
../New\ folder/FREE_RTOS/list.c \
../New\ folder/FREE_RTOS/port.c \
../New\ folder/FREE_RTOS/queue.c \
../New\ folder/FREE_RTOS/tasks.c \
../New\ folder/FREE_RTOS/timers.c 

OBJS += \
./New\ folder/FREE_RTOS/croutine.o \
./New\ folder/FREE_RTOS/heap_1.o \
./New\ folder/FREE_RTOS/list.o \
./New\ folder/FREE_RTOS/port.o \
./New\ folder/FREE_RTOS/queue.o \
./New\ folder/FREE_RTOS/tasks.o \
./New\ folder/FREE_RTOS/timers.o 

C_DEPS += \
./New\ folder/FREE_RTOS/croutine.d \
./New\ folder/FREE_RTOS/heap_1.d \
./New\ folder/FREE_RTOS/list.d \
./New\ folder/FREE_RTOS/port.d \
./New\ folder/FREE_RTOS/queue.d \
./New\ folder/FREE_RTOS/tasks.d \
./New\ folder/FREE_RTOS/timers.d 


# Each subdirectory must supply rules for building sources it contributes
New\ folder/FREE_RTOS/croutine.o: ../New\ folder/FREE_RTOS/croutine.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"E:\CMP2024\ITI embeded sysytem\Workspaceforembeded\Drivers\inc" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"New folder/FREE_RTOS/croutine.d" -MT"New\ folder/FREE_RTOS/croutine.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

New\ folder/FREE_RTOS/heap_1.o: ../New\ folder/FREE_RTOS/heap_1.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"E:\CMP2024\ITI embeded sysytem\Workspaceforembeded\Drivers\inc" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"New folder/FREE_RTOS/heap_1.d" -MT"New\ folder/FREE_RTOS/heap_1.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

New\ folder/FREE_RTOS/list.o: ../New\ folder/FREE_RTOS/list.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"E:\CMP2024\ITI embeded sysytem\Workspaceforembeded\Drivers\inc" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"New folder/FREE_RTOS/list.d" -MT"New\ folder/FREE_RTOS/list.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

New\ folder/FREE_RTOS/port.o: ../New\ folder/FREE_RTOS/port.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"E:\CMP2024\ITI embeded sysytem\Workspaceforembeded\Drivers\inc" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"New folder/FREE_RTOS/port.d" -MT"New\ folder/FREE_RTOS/port.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

New\ folder/FREE_RTOS/queue.o: ../New\ folder/FREE_RTOS/queue.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"E:\CMP2024\ITI embeded sysytem\Workspaceforembeded\Drivers\inc" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"New folder/FREE_RTOS/queue.d" -MT"New\ folder/FREE_RTOS/queue.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

New\ folder/FREE_RTOS/tasks.o: ../New\ folder/FREE_RTOS/tasks.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"E:\CMP2024\ITI embeded sysytem\Workspaceforembeded\Drivers\inc" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"New folder/FREE_RTOS/tasks.d" -MT"New\ folder/FREE_RTOS/tasks.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

New\ folder/FREE_RTOS/timers.o: ../New\ folder/FREE_RTOS/timers.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"E:\CMP2024\ITI embeded sysytem\Workspaceforembeded\Drivers\inc" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"New folder/FREE_RTOS/timers.d" -MT"New\ folder/FREE_RTOS/timers.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


