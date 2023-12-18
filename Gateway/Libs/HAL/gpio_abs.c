/*
 * gpio_abs.c
 *
 *  Created on: 18 Ara 2023
 *      Author: meteh
 */

#include "gpio_abs.h"

#include "GPIO.h"
#include <stdint.h>


gpio_abs_err_t gpio_init()
{
    GPIO_init();
    return GPIO_ABS_ERR_NO;
}

gpio_abs_err_t gpio_set_mode( unsigned int pinId, gpio_abs_mode_t mode )
{
    if( mode >= GPIO_ABS_MODE_MAX )
    {
        return GPIO_ABS_ERR_INVALID_PARAM;
    }

    GPIO_PinConfig valueToSet = GPIO_CFG_OUTPUT;

    if( GPIO_ABS_MODE_INPUT == mode )
    {
        valueToSet = GPIO_CFG_INPUT;
    }

    GPIO_setConfig( pinId, valueToSet );
    return GPIO_ABS_ERR_NO;
}

gpio_abs_err_t gpio_get_pin_value( unsigned int pinId, gpio_abs_pin_status_t pinStatus )
{
    return GPIO_ABS_ERR_NO;
}

gpio_abs_err_t gpio_set_pull_resistor( unsigned int pinId, gpio_abs_pull_res_t pullResOption )
{
    if( pullResOption >= GPIO_ABS_PULL_MAX )
    {
        return GPIO_ABS_ERR_INVALID_PARAM;
    }

    static const uint32_t lookUpForPullConfigs[GPIO_ABS_PULL_MAX][2] =
    {
     [ GPIO_ABS_PULL_RES_NONE ] = { GPIO_CFG_OUT_OD_NOPULL, GPIO_CFG_IN_NOPULL },
     [ GPIO_ABS_PULL_RES_UP ]   =   { GPIO_CFG_OUT_OD_PU, GPIO_CFG_IN_PU },
     [ GPIO_ABS_PULL_RES_DOWN ] = { GPIO_CFG_OUT_OD_PD, GPIO_CFG_IN_PD},
    };

    GPIO_PinConfig valueToSet;
    GPIO_getConfig (pinId, &valueToSet);

    if( valueToSet & GPIO_CFG_OUTPUT )
    {
        valueToSet |= lookUpForPullConfigs[pullResOption][0];
    }
    else if( valueToSet & GPIO_CFG_INPUT )
    {
        valueToSet |= lookUpForPullConfigs[pullResOption][1];
    }
    else
    {
        return GPIO_ABS_ERR_FATAL_ERROR;
    }

    GPIO_setConfig( pinId, valueToSet );
    return GPIO_ABS_ERR_NO;
}

gpio_abs_err_t gpio_enable_interrupt( unsigned int pinId, gpio_abs_int_type_t intType, gpio_abs_callback_func callBackFunc )
{
    return GPIO_ABS_ERR_NO;
}

gpio_abs_err_t gpio_disable_interrupt( unsigned int pinId )
{
    return GPIO_ABS_ERR_NO;
}

gpio_abs_err_t gpio_clear_interrupt( unsigned int pinId )
{
    return GPIO_ABS_ERR_NO;
}

