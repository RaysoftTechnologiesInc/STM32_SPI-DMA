#include <stdint.h>
#include "spi_dma.h"

#define ACC_FULL_SCALE_2_G       0x00
#define ACC_FULL_SCALE_4_G       0x08
#define ACC_FULL_SCALE_8_G       0x10
#define ACC_FULL_SCALE_16_G      0x18

#define MPU6050_ADDR_ACCELCONFIG  			  0x1C
#define MPU6050_ADDR_USER_CTRL				  0x6A
#define MPU6050_ACCEL_XOUT_H				  0x3B

void mpu6050_accel_config(uint8_t mode);
void mpu6050_accel_update(void);
float mpu6050_get_x(void);
float mpu6050_get_y(void);
float mpu6050_get_z(void);
void mpu6050_ncs_pin_config(void);
void mpu6050_ncs_pin_set(void);
void mpu6050_ncs_pin_reset(void);


#endif