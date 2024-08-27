import os
from datetime import datetime

# Get the filename from the terminal input
file_name = input("Enter the file name (without extension): ")

# Get the author name from the terminal input
author_name = input("Enter the author name: ")

# Get the current date and time
now = datetime.now()
date_str = now.strftime("%Y-%m-%d")
year_str = now.strftime("%Y")

# The header file content
header_content = f"""/*
 * Filename     : {file_name}.h
 * Description  : Brief description of what this header file does.
 * Author       : {author_name}
 * Date         : {date_str}
 *
 * MIT License
 *
 * Copyright (c) {year_str} {author_name}
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

#ifndef {file_name.upper()}_H
#define {file_name.upper()}_H

/*
 * Section: Includes
 * Description: This section contains library includes.
 */
#include "hardware.h"
#include "systems.h"

/*
 * Section: Defines
 * Description: This section contains macro definitions.
 */
#define EXAMPLE_CONSTANT 100

/*
 * Section: Typedefs
 * Description: This section contains type definitions.
 */
typedef unsigned int uint;

/*
 * Section: Variables
 * Description: This section contains external variable declarations.
 */
extern int global_variable;

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
void exampleFunction(void);

#endif /* {file_name.upper()}_H */

"""

# The C file content
c_content = f"""/*
 * Filename     : {file_name}.c
 * Description  : Brief description of what this source file does.
 * Author       : {author_name}
 * Date         : {date_str}
 *
 * MIT License
 *
 * Copyright (c) {year_str} {author_name}
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
#include "{file_name}.h"

/*
 * Section: Defines
 * Description: This section contains macro definitions.
 */
#define PI_CONSTANT 3.141592

/*
 * Section: Variables
 * Description: This section contains variable definations.
 */
int global_variable;

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
void exampleFunction(void) {{
    // Function implementation here
}}

"""

# Write the header file
with open(f"{file_name}.h", "w") as header_file:
    header_file.write(header_content)

# Write the C file
with open(f"{file_name}.c", "w") as c_file:
    c_file.write(c_content)

print(f"Files '{file_name}.h' and '{file_name}.c' have been created successfully.")
