/*
 * Filename     : mcal_gpio.h
 * Description  : This header file contains MCAL GPIO Layer.
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

#ifndef MCAL_GPIO_H
#define MCAL_GPIO_H

/*
 * Section: Includes
 * Description: This section contains library includes.
 */
#include "utils.h"
#include "gpio.h"

/*
 * Section: Defines
 * Description: This section contains macro definitions.
 */


/*
 * Section: Enum
 * Description: This section contains macro definitions.
 */
// GPIO Pin Type
typedef enum
{
    DIGITAL_INPUT = 0x00U,
    ANALOG_INPUT,
    DIGITAL_OUTUT,
    ANALOG_OUTUT,
}GPIO_Type;

/*
 * Section: Typedefs
 * Description: This section contains type definitions.
 */
// GPIO Control Structure
typedef struct 
{
    UInt32 pin;        // GPIO pin number
    UInt32 port;       // GPIO port number
    UInt32 value;      // GPIO output/input/analog value
    UInt32 type;       // GPIO pin type
}GPIO_Param;

/*
 * Section: Variables
 * Description: This section contains external variable declarations.
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
extern UInt32 MCAL_GPIO_Toggle(GPIO_Param *gpio_param);

/*
 * @brief Sets GPIO pin.
 *
 * @param[in] Takes GPIO_Param structure.
 *
 * @return 0
 *
 * @see Refer STM32 HAL_GPIO_WritePin function
 */
extern UInt32 MCAL_GPIO_Set(GPIO_Param *gpio_param);

/*
 * @brief Resets GPIO pin.
 *
 * @param[in] Takes GPIO_Param structure.
 *
 * @return 0
 *
 * @see Refer STM32 HAL_GPIO_WritePin function
 */
extern UInt32 MCAL_GPIO_Reset(GPIO_Param *gpio_param);

#endif /* MCAL_GPIO_H */
