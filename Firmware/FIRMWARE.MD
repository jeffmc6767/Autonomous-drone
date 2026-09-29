# Custom Flight Controller Firmware Architecture - FC

## Architecture Overview
* **Microcontroller:** STM32F411CEU6 (ARM Cortex-M4 @ 100MHz, 512KB Flash)
* **Base Firmware:** Betaflight 4.5.x Unified Architecture
* **Target Identifier:** `FC`

## Pinout Mapping
* **IMU (BMI270):** Connected via SPI1 (`PA5` SCK, `PA6` MISO, `PA7` MOSI, `PA4` CS, `PA1` EXTI)
* **Digital Video (DJI O4):** Connected via UART1 (`PA9` TX1, `PA10` RX1) using MSP DisplayPort protocol
* **Radio Receiver (ELRS / CRSF):** Connected via UART2 (`PA2` TX2, `PA3` RX2)
* **ESC Motor Control:** Pins `PB0`, `PB1`, `PB4`, `PB5` (DShot300/DShot600 native timer support)
* **Power Telemetry:** Battery Voltage ADC on `PB2`, Current Sensing ADC on `PB3`

## Flashing Instructions
1. Put the custom PCB into Bootloader mode by grounding `BOOT0` during USB power insertion.
2. Open Betaflight Configurator -> Firmware Flasher.
3. Select Core Architecture **`STM32F411`** and flash standard Betaflight 4.5.
4. Access the **CLI tab**, paste the contents of `STARDANCE_F411.config`, and type `save`.