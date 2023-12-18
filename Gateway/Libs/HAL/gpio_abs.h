/*
 * gpio_abs.h
 *
 *  Created on: 18 Ara 2023
 *      Author: meteh
 */

#ifndef LIBS_HAL_GPIO_ABS_H_
#define LIBS_HAL_GPIO_ABS_H_

#include "gpio_abs_types.h"

gpio_abs_err_t gpio_init();
gpio_abs_err_t gpio_set_mode( unsigned int pinId, gpio_abs_mode_t mode );
gpio_abs_err_t gpio_get_pin_value( unsigned int pinId, gpio_abs_pin_status_t pinStatus );
gpio_abs_err_t gpio_set_pull_resistor( unsigned int pinId, gpio_abs_pull_res_t pullResOption );
gpio_abs_err_t gpio_enable_interrupt( unsigned int pinId, gpio_abs_int_type_t intType, gpio_abs_callback_func callBackFunc );
gpio_abs_err_t gpio_disable_interrupt( unsigned int pinId );
gpio_abs_err_t gpio_clear_interrupt( unsigned int pinId );



#endif /* LIBS_HAL_GPIO_ABS_H_ */
