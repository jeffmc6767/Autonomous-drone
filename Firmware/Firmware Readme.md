# STM32F411CEU6 Flight Controller Firmware

FOLLOW THESE INSTRUCTIONS FOR FLASHING FIRMWARE TO THE FC: 
## Files: (in Firmware/firmware)
main.c, bmi270.c, mpu6000.c, pid.c, pwm.c, sbus.c, spi.c, system_clock.c, uart.c, filter.c - Source code files:
* `CMakeLists.txt` - CMake build script.
* `STM32F411CEUx_FLASH.ld` - Linker script for STM32F411CEU6 memory map.

## How to Compile:

### Prerequisites
* `arm-none-eabi-gcc`
* `cmake`
* `ninja` or `make`

###  Steps:
```bash
cmake -B build -G Ninja
cmake --build build
```
Output files (`.bin`, `.hex`, `.elf`) will be generated inside the `build/` directory.

## How to Flash

### Using STM32CubeProgrammer (USB DFU mode)
1. Use a metal conducting object and short circut the pin that goes to BootO and GND on the FC ( Use the PCB design because I deleted the silscreen)while plugging in the USB cable to enter bootloader mode.
2. Run:
```bash
STM32_Programmer_CLI -c port=usb1 -w build/flight_controller_firmware.bin 0x08000000 -v -rst
```

### Using OpenOCD (ST-Link / SWD)
1. Connect SWDIO, SWCLK, GND, and 3V3 from an ST-Link adapter to the board.
2. Run:
```bash
openocd -f interface/stlink.cfg -f target/stm32f4x.cfg -c "program build/flight_controller_firmware.elf verify reset exit"
```
