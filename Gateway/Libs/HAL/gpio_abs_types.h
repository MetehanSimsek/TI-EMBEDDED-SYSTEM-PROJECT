/*
 * gpio_pin_types.h
 *
 *  Created on: 18 Ara 2023
 *      Author: meteh
 */

#ifndef LIBS_HAL_GPIO_ABS_TYPES_H_
#define LIBS_HAL_GPIO_ABS_TYPES_H_

#include "error_codes.h"

typedef enum{
    GPIO_ABS_ERR_NO = ERROR_CODES_GPIO_ABS,
    GPIO_ABS_ERR_INVALID_PARAM,
    GPIO_ABS_ERR_FATAL_ERROR,

    GPIO_ABS_ERR_MAx

} gpio_abs_err_t;


typedef enum{
    GPIO_ABS_MODE_INPUT  = 0u,
    GPIO_ABS_MODE_OUTPUT,

    GPIO_ABS_MODE_MAX
} gpio_abs_mode_t;

typedef enum{
    GPIO_ABS_PULL_RES_NONE = 0u,
    GPIO_ABS_PULL_RES_UP,
    GPIO_ABS_PULL_RES_DOWN,

    GPIO_ABS_PULL_MAX
} gpio_abs_pull_res_t;

typedef enum{
    GPIO_ABS_INT_TYPE_NONE = 0u,
    GPIO_ABS_INT_TYPE_FALLING_EDGE,
    GPIO_ABS_INT_TYPE_RISING_EDGE,
    GPIO_ABS_INT_TYPE_BOTH_EDGE,
    GPIO_ABS_INT_TYPE_LOW_LEVEL,
    GPIO_ABS_INT_TYPE_HIGH_LEVEL,

    GPIO_ABS_INT_TYPE_MAX
} gpio_abs_int_type_t;

typedef enum{
    GPIO_PIN_STATUS_LOW = 0u,
    GPIO_PIN_STATUS_HIGH,

    GPIO_PIN_STATUS_MAX
} gpio_abs_pin_status_t;

typedef void (*gpio_abs_callback_func)(void);


#endif /* LIBS_HAL_GPIO_ABS_TYPES_H_ */
