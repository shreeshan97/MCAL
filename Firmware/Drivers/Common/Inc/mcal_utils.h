/*
 * Filename     : mcal_utils.h
 * Description  : This header contains MCAL Layer Utilities. 
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

#ifndef MCAL_UTILS_H
#define MCAL_UTILS_H

/*
 * Section: Includes
 * Description: This section contains library includes.
 */

/*
 * Section: Defines
 * Description: This section contains macro definitions.
 */

/*
 * Section: Enum
 * Description: This section contains macro definitions.
 */
/** 
  * @brief  MCAL Status structures definition  
  */  
typedef enum 
{
  MCAL_OK       = 0x00U,
  MCAL_ERROR    = 0x01U,
  MCAL_BUSY     = 0x02U,
  MCAL_TIMEOUT  = 0x03U
} MCAL_Status;

/*
 * Section: Typedefs
 * Description: This section contains type definitions.
 */

/*
 * Section: Variables
 * Description: This section contains external variable declarations.
 */

/*
 * @brief Brief description of the function.
 *
 * Detailed description of the function. 
 *
 * @param[in] param1 Description of the first input parameter.
 * 
 * @param[out] param2 Description of the second parameter, if applicable. 
 *                    Include the type and purpose.
 *
 * @return Description of the return value.
 *
 * @note Any additional notes.
 *
 * @warning Any warnings about the function's use, potential issues, 
 *          or special considerations.
 *
 * @see Reference to related functions or documentation.
 */

#endif /* MCAL_UTILS_H */
