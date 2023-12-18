/*
 * error_codes.h
 *
 *  Created on: 18 Ara 2023
 *      Author: meteh
 */

#ifndef LIBS_HAL_ERROR_CODES_H_
#define LIBS_HAL_ERROR_CODES_H_

#define NUMBER_OF_ERROR_CODES_PER_MODULE (0x100u)
#define GENERATE_ERROR_CODE_BASE_VALUE( x ) ( ( x ) * NUMBER_OF_ERROR_CODES_PER_MODULE )


typedef enum{
    ERROR_CODES_GPIO_ABS = GENERATE_ERROR_CODE_BASE_VALUE(0),
    ERROR_CODES_I2C_ABS = GENERATE_ERROR_CODE_BASE_VALUE(1),

    ERROR_CODES_MAX
} error_codes_t;

#endif /* LIBS_HAL_ERROR_CODES_H_ */
