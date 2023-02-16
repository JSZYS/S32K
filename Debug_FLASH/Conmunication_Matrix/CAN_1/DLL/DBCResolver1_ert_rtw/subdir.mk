################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Conmunication_Matrix/CAN_1/DLL/DBCResolver1_ert_rtw/DBCResolver1.c \
../Conmunication_Matrix/CAN_1/DLL/DBCResolver1_ert_rtw/ert_main.c 

OBJS += \
./Conmunication_Matrix/CAN_1/DLL/DBCResolver1_ert_rtw/DBCResolver1.o \
./Conmunication_Matrix/CAN_1/DLL/DBCResolver1_ert_rtw/ert_main.o 

C_DEPS += \
./Conmunication_Matrix/CAN_1/DLL/DBCResolver1_ert_rtw/DBCResolver1.d \
./Conmunication_Matrix/CAN_1/DLL/DBCResolver1_ert_rtw/ert_main.d 


# Each subdirectory must supply rules for building sources it contributes
Conmunication_Matrix/CAN_1/DLL/DBCResolver1_ert_rtw/%.o: ../Conmunication_Matrix/CAN_1/DLL/DBCResolver1_ert_rtw/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Conmunication_Matrix/CAN_1/DLL/DBCResolver1_ert_rtw/DBCResolver1.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


