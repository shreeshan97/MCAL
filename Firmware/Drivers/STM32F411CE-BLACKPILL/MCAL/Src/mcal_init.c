/*
 * Filename     : mcal_init.c
 * Description  : This source file contains MCAL Layer Peripheral Initialization.
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
#include "mcal_init.h"

/*
 * Section: Defines
 * Description: This section contains macro definitions.
 */

/*
 * Section: Variables
 * Description: This section contains variable definations.
 */
// Activity LED pointer
GPIO_Param ActivityLED;

/*
 * @brief Initialize all peripheral with MCAL layer.
 *
 * @return MCAL Status value.
 *
 * @note Call this function to initialize all peripherals.
 *
 */
MCAL_Status MCAL_Init(void)
{
    // Initialize Activity LED
    ActivityLED.pin   = LED_Pin;
    ActivityLED.port  = (UInt32) LED_GPIO_Port;
    ActivityLED.type  = DIGITAL_OUTUT;
    ActivityLED.value = RESET;

    return MCAL_OK;
}
