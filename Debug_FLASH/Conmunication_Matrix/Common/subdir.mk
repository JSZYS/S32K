################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Conmunication_Matrix/Common/rtGetInf.c \
../Conmunication_Matrix/Common/rtGetNaN.c \
../Conmunication_Matrix/Common/rt_nonfinite.c 

OBJS += \
./Conmunication_Matrix/Common/rtGetInf.o \
./Conmunication_Matrix/Common/rtGetNaN.o \
./Conmunication_Matrix/Common/rt_nonfinite.o 

C_DEPS += \
./Conmunication_Matrix/Common/rtGetInf.d \
./Conmunication_Matrix/Common/rtGetNaN.d \
./Conmunication_Matrix/Common/rt_nonfinite.d 


# Each subdirectory must supply rules for building sources it contributes
Conmunication_Matrix/Common/%.o: ../Conmunication_Matrix/Common/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Conmunication_Matrix/Common/rtGetInf.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


