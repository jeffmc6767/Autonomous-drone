#include "bmi270.h"
#include "spi.h"

#define CS_LOW()   (GPIOA->BSRR = GPIO_BSRR_BR4)
#define CS_HIGH()  (GPIOA->BSRR = GPIO_BSRR_BS4)

static void BMI270_WriteReg(uint8_t reg, uint8_t val) {
    CS_LOW();
    SPI1_Transfer(reg & 0x7F);
    SPI1_Transfer(val);
    CS_HIGH();
}

static uint8_t BMI270_ReadReg(uint8_t reg) {
    uint8_t val;
    CS_LOW();
    SPI1_Transfer(reg | 0x80);
    SPI1_Transfer(0x00);
    val = SPI1_Transfer(0x00);
    CS_HIGH();
    return val;
}

void BMI270_Init(void) {
    BMI270_WriteReg(0x7E, 0xB6);
    for (volatile int i = 0; i < 100000; i++);

    BMI270_WriteReg(0x7C, 0x00);
    BMI270_WriteReg(0x59, 0x00);
    
    BMI270_WriteReg(0x40, 0xA8);
    BMI270_WriteReg(0x41, 0x0E);
    BMI270_WriteReg(0x7D, 0x0E);
}

bool BMI270_ReadData(BMI270_Data_t *data) {
    uint8_t raw[12];
    
    CS_LOW();
    SPI1_Transfer(0x0C | 0x80);
    SPI1_Transfer(0x00);
    for (int i = 0; i < 12; i++) {
        raw[i] = SPI1_Transfer(0x00);
    }
    CS_HIGH();

    int16_t ax = (int16_t)((raw[1] << 8) | raw[0]);
    int16_t ay = (int16_t)((raw[3] << 8) | raw[2]);
    int16_t az = (int16_t)((raw[5] << 8) | raw[4]);
    int16_t gx = (int16_t)((raw[7] << 8) | raw[6]);
    int16_t gy = (int16_t)((raw[9] << 8) | raw[8]);
    int16_t gz = (int16_t)((raw[11] << 8) | raw[10]);

    data->accel_x = (float)ax / 16384.0f;
    data->accel_y = (float)ay / 16384.0f;
    data->accel_z = (float)az / 16384.0f;
    data->gyro_x  = (float)gx / 16.384f;
    data->gyro_y  = (float)gy / 16.384f;
    data->gyro_z  = (float)gz / 16.384f;

    return true;
}