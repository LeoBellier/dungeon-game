################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../GameMap.cpp \
../MapCell.cpp \
../Player.cpp \
../main.cpp 

OBJS += \
./GameMap.o \
./MapCell.o \
./Player.o \
./main.o 

CPP_DEPS += \
./GameMap.d \
./MapCell.d \
./Player.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


