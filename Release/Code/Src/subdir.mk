################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Code/Src/human.cpp \
../Code/Src/main.cpp 

OBJS += \
./Code/Src/human.o \
./Code/Src/main.o 

CPP_DEPS += \
./Code/Src/human.d \
./Code/Src/main.d 


# Each subdirectory must supply rules for building sources it contributes
Code/Src/%.o: ../Code/Src/%.cpp Code/Src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


