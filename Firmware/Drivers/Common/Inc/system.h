/*
 * Filename     : system.h
 * Description  : This header file contains system related defines, enums, structures, variables and functions.
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

#ifndef SYSTEM_H
#define SYSTEM_H

/*
 * Section: Includes
 * Description: This section contains library includes.
 */
#include "utils.h"

/*
 * Section: Defines
 * Description: This section contains macro definitions.
 */

/*
 * Section: Enum
 * Description: This section contains macro definitions.
 */
// System States
typedef enum
{
    SYS_RESET = 0x00U,
    SYS_INIT,
    SYS_RUNNING,
    SYS_HALT,
    SYS_FAIL,
    SYS_DEAD
}System_States;

// System States
typedef enum
{
    FALSE = 0x00U,
    TRUE  = 0x01U,
}Boolean_States;

/*
 * Section: Typedefs
 * Description: This section contains type definitions.
 */
// System Parameters
typedef struct
{
    System_States state;
    UInt64 uptime;
    UInt32 error;
}System_Param;

/*
 * Section: Variables
 * Description: This section contains external variable declarations.
 */
// Holds the count of microseconds
extern volatile UInt64 usCounter;

// Holds the count of milliseconds
extern volatile UInt64 msCounter;

/*
 * @brief Initialize the system.
 *
 * @return System States
 *
 * @note System is initialized.
 * 
 */
System_States System_Init(void);

/*
 * @brief Background tasks of the system.
 *
 * @return System States
 *
 * @note Tasks are running in system background.
 * 
 */
System_States System_Background(void);

/*
 * @brief Foreground tasks of the system.
 *
 * @return System States
 *
 * @note Tasks are running in system foreground.
 * 
 */
System_States System_Foreground(void);

#endif /* SYSTEM_H */
