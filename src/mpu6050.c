#include "mpu6050.h"


/**@PINOUT

 *	PA5 :  SPI1_SCK
 *	PA6 :  SPI1_MISO
 *	PA7 :  SPI1_MOSI

  MPU--------------> STM32
	VCC        -       3.3V
	GND        -       GND
	NCS				 - PA0
	SCL				 - SCK/PA5
	SDI/SDA    -       MOSI/PA7
	SDO/ADO    -       MISO/PA6
*/
