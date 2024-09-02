/*
 * Filename     : main.c
 * Description  : This source file contains the main function.
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
#include "main.h"

/*
 * Section: Defines
 * Description: This section contains macro definitions.
 */

/*
 * Section: Variables
 * Description: This section contains variable definations.
 */

/*
 * @brief Runs the main() of the project.
 *
 * @note Contains the initialization and looping subroutine. 
 *
 */
int main(void)
{
    // Initialize all hardware peripherals
    Hardware_Init();

    // Initialize all system tasks
    System_Init();

    while(TRUE)
    {
        // Run system background tasks
        System_Background();     
    }
    return 0;
}
