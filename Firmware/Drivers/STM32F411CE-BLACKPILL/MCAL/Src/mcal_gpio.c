/*
 * Filename     : mcal_gpio.c
 * Description  : This source file contains MCAL GPIO Layer.
 * Author       : Shreesha N.
 * Date         : 2024-09-01
 *
 * MIT License
 *
 * Copyright (c) 2024 Shreesha N.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/*
 * Section: Includes
 * Description: This section contains library includes.
 */
#include "mcal_gpio.h"

/*
 * Section: Defines
 * Description: This section contains macro definitions.
 */

/*
 * Section: Variables
 * Description: This section contains variable definations.
 */

/*
 * @brief Toggles GPIO pin.
 *
 * @param[in] Takes GPIO_Param structure.
 *
 * @return 0
 *
 * @see Refer STM32 HAL_GPIO_TogglePin function
 */
UInt32 MCAL_GPIO_Toggle(GPIO_Param *gpio_param)
{
    HAL_GPIO_TogglePin((GPIO_TypeDef *)gpio_param->port, (uint16_t)gpio_param->pin);
    return 0;
}

/*
 * @brief Sets GPIO pin.
 *
 * @param[in] Takes GPIO_Param structure.
 *
 * @return 0
 *
 * @see Refer STM32 HAL_GPIO_WritePin function
 */
UInt32 MCAL_GPIO_Set(GPIO_Param *gpio_param)
{
    HAL_GPIO_WritePin((GPIO_TypeDef *)gpio_param->port, (uint16_t)gpio_param->pin, GPIO_PIN_SET);
    return 0;
}

/*
 * @brief Resets GPIO pin.
 *
 * @param[in] Takes GPIO_Param structure.
 *
 * @return 0
 *
 * @see Refer STM32 HAL_GPIO_WritePin function
 */
UInt32 MCAL_GPIO_Reset(GPIO_Param *gpio_param)
{
    HAL_GPIO_WritePin((GPIO_TypeDef *)gpio_param->port, (uint16_t)gpio_param->pin, GPIO_PIN_RESET);
    return 0;
}
