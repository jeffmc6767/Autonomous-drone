
JFC,
-
My custom 20x20 drone FC stack for 3-4s setups, and my custom 3 inch drone frame. 

<img width="785" height="750" alt="Screenshot 2026-08-27 at 12 05 02 PM" src="https://github.com/user-attachments/assets/4f887015-b989-4f76-99ce-1e4ef7748bc7" />
<img width="633" height="423" alt="Screenshot 2026-10-15 at 9 36 35 PM" src="https://github.com/user-attachments/assets/dc28dd8a-363b-423a-8f39-d30115489f55" />


Specs:
- 

- up to 99km/h (I calculated based on other drones with similar setup and weight)
- A theoretical 5-7 minutes of flight time though im not sure 
- Costs around 1.2$ a print and tees 3.5 hours. 
- 4K video 60fps (from the dji o4 air unit)
- Usable with Ardu pilot, betafpv, and most other open source software, though I coded one myself(and with the help of AI). Its under the Firmware file
- 44g PLA and PETG print. 





Build guide:
-

Here's how you can start building this yourself:

1. Produce the PCB(like from a pcb manufacturer)
2. Buy all components from the BOM.CSV.(Some of the quantities are a bit higher than I need because for example: 10 capacitors might be cheaper than 4)
3. Solder all of the components on the PCB(I would recoment using the PCB file because I deleted a lot of the silkscreen text so it would be easier to design)
4. Compile the firmware and flash it to the flight controler(through the USB-C) ( more information below)
5. Print the drone frame(More about it below)
6. Install the ESC, motors, and solder the connections.
7. Install the FC and solder those connections and connect the ESC to the FC.
8. Install the DJI o4 air unit and also solder or connect the pins and headers. Mount the camera and antennas.
9. If you prefer ELRS you can install that too. I have included the pins. TX, RX, 5.5V, GND
10. Pair with your DJI Goggles and ELRS or DJI controller
11. FLYYY!!

**About the drone frame:**
I have included 3 step files:
1. 1x Top Plate - Top cover for the frame
2. 1x Bottom Plate - The bottom plate
3. 2x TPU Guards - Protects the propellers and motors

**About the Firmware:**

Microcontroller: STM32F411CEU6 (ARM Cortex-M4 @ 100MHz, 512KB Flash)
Base Firmware: Betaflight 4.5.x Unified Architecture
Target Identifier: FC
Pinout Mapping

IMU (BMI270): Connected via SPI1 (PA5 SCK, PA6 MISO, PA7 MOSI, PA4 CS, PA1 EXTI)
Digital Video (DJI O4): Connected via UART1 (PA9 TX1, PA10 RX1) using MSP DisplayPort protocol
Radio Receiver (ELRS / CRSF): Connected via UART2 (PA2 TX2, PA3 RX2)
ESC Motor Control: Pins PB0, PB1, PB4, PB5 (DShot300/DShot600 native timer support)
Power Telemetry: Battery Voltage ADC on PB2, Current Sensing ADC on PB3
Flashing Instructions

Put the custom PCB into Bootloader mode by grounding BOOT0 during USB power insertion.
Open Betaflight Configurator -> Firmware Flasher.
Select Core Architecture STM32F411 and flash standard Betaflight 4.5.
Access the CLI tab, paste the contents of STARDANCE_F411.config, and type save.

Images gallery:
-

Current Version: 
-
**V5.5:** New Drone frame I designed myself: 

It's a 3 inch drone frame that I designed for 1404 motors. It can support a 20x20mm stack and 25.4x25.4 dji o4 air unit. 

It has 4 rubber/tpu things that go around the bottom of the props to protect it. 

In total, it weighs 44g when 3d printed. 
<img width="612" height="431" alt="Screenshot 2026-10-15 at 9 28 00 PM" src="https://github.com/user-attachments/assets/07caf39d-3a63-482f-8f8d-fa41a102a947" />


**V5:**
PCB layout:  
The main changes I made was the dimensions from 39mmx37mm to 30mmx32mm. Everything is now compacted and looks much better from the V3 where it was larger and stuff was everywhere. I improved the routing of all of the components and moved every single component to the top of the board that I can use a hot plate and solder everything at once more easily and efficiently. 

- Added ELRS pads for communication
- Added GPS RX and TX
- Added Borometer pads 
<img width="785" height="750" alt="Screenshot 2026-08-27 at 12 05 02 PM" src="https://github.com/user-attachments/assets/4f887015-b989-4f76-99ce-1e4ef7748bc7" />
<img width="487" height="500" alt="Screenshot 2026-08-27 at 12 07 03 PM" src="https://github.com/user-attachments/assets/36097295-e3e2-463c-ad62-5239ef32e481" />

<img width="452" height="515" alt="Screenshot 2026-08-27 at 12 09 32 PM" src="https://github.com/user-attachments/assets/9961de37-1eeb-4fe5-8e9a-2bfd9c89132c" />

This version will now use a custom 2 inch drone frame that I will 3d print 

**Past Versions:**
V4:
-

transferred all B.CU components to the F.CU (not the JST connector) and modified the Edge.cuts 
<img width="531" height="630" alt="Screenshot 2026-08-21 at 5 43 20 PM" src="https://github.com/user-attachments/assets/2e558948-eaea-4125-9af4-3da78b4aaaf3" />
<img width="508" height="466" alt="Screenshot 2026-08-22 at 11 22 32 PM" src="https://github.com/user-attachments/assets/11296026-0bfc-454e-8a76-3a97c0032a68" />

<img width="845" height="723" alt="Screenshot 2026-08-22 at 11 22 59 PM" src="https://github.com/user-attachments/assets/34c34ae3-5844-4452-9000-bad7e49f2483" />
<img width="736" height="730" alt="Screenshot 2026-08-22 at 11 23 20 PM" src="https://github.com/user-attachments/assets/ee93d3cc-f8f9-495e-b53e-9eda3c0b2e71" />




V3:
-
<img width="616" height="493" alt="Screenshot 2026-08-17 at 3 55 34 PM" src="https://github.com/user-attachments/assets/a130c431-52fc-4f07-81a4-e0ed05a2d03d" />

V2:
-
<img width="821" height="585" alt="Screenshot 2026-07-31 at 7 13 25 PM" src="https://github.com/user-attachments/assets/3b3539f7-dc79-4e42-871d-b5c917edbff1" />
<img width="707" height="459" alt="Screenshot 2026-07-31 at 7 15 06 PM" src="https://github.com/user-attachments/assets/5516fdfc-c9e1-40cf-a771-af439e948465" />


V1:
- 
<img width="828" height="533" alt="Screenshot 2026-07-30 at 10 27 04 PM" src="https://github.com/user-attachments/assets/546fdda9-45f8-42da-bf20-779c6e596f0a" />



