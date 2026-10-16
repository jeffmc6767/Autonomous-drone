cmake_minimum_required(VERSION 3.16)

# Set up target architecture for ARM Cortex-M4 with FPU
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR arm)

set(CMAKE_C_COMPILER arm-none-eabi-gcc)
set(CMAKE_OBJCOPY arm-none-eabi-objcopy)
set(CMAKE_SIZE arm-none-eabi-size)

project(flight_controller_firmware C ASM)

# MCU Compiler / Linker Flags for STM32F411CEU6
set(MCU_FLAGS "-mcpu=cortex-m4 -mthumb -mfpu=fpv4-sp-d16 -mfloat-abi=hard")

set(CMAKE_C_FLAGS "${MCU_FLAGS} -Wall -Wextra -O2 -fdata-sections -ffunction-sections")
set(CMAKE_EXE_LINKER_FLAGS "${MCU_FLAGS} -Wl,--gc-sections -T${CMAKE_CURRENT_SOURCE_DIR}/STM32F411CEUx_FLASH.ld")

# Include directories
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# Source files (renamed to standard .c extensions)
set(SOURCES
    main.c
    bmi270.c
    filter.c
    mpu6000.c
    pid.c
    pwm.c
    sbus.c
    spi.c
    system_clock.c
    uart.c
)

# Executable target
add_executable(${PROJECT_NAME}.elf ${SOURCES})

# Generate .bin and .hex files
add_custom_command(TARGET ${PROJECT_NAME}.elf POST_BUILD
    COMMAND ${CMAKE_OBJCOPY} -O binary ${PROJECT_NAME}.elf ${PROJECT_NAME}.bin
    COMMAND ${CMAKE_OBJCOPY} -O ihex ${PROJECT_NAME}.elf ${PROJECT_NAME}.hex
    COMMAND ${CMAKE_SIZE} ${PROJECT_NAME}.elf
    COMMENT "Building binary outputs..."
)
