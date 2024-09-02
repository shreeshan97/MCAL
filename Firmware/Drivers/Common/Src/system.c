/*
 * Filename     : system.c
 * Description  : This source file contains system related structures, variables and functions.
 * Author       : Shreesha N.
 * Date         : 2024-08-29
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
#include "system.h"
#include "mcal_init.h"
#include "blinky.h"

/*
 * Section: Defines
 * Description: This section contains macro definitions.
 */

/*
 * Section: Variables
 * Description: This section contains variable definations.
 */
/*
 * Section: Variables
 * Description: This section contains external variable declarations.
 */
// Holds the count of microseconds
volatile UInt64 usCounter = 0x00U;

// Holds the count of milliseconds
volatile UInt64 msCounter = 0x00U;

/*
 * @brief Initialize the system.
 *
 * @return System States
 *
 * @note System is initialized.
 * 
 */
System_States System_Init(void)
{
    // Initialize MCAL Layers
    MCAL_Init();
    return SYS_INIT;
}

/*
 * @brief Background tasks of the system.
 *
 * @return System States
 *
 * @note Tasks are running in system background.
 * 
 */
System_States System_Background(void)
{
    // Running blinky task
    Blinky();
    return SYS_RUNNING;
}

/*
 * @brief Foreground tasks of the system.
 *
 * @return System States
 *
 * @note Tasks are running in system foreground.
 * 
 */
System_States System_Foreground(void)
{
    return SYS_RUNNING;
}
