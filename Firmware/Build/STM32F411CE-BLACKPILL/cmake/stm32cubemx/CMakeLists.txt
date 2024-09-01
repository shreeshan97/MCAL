cmake_minimum_required(VERSION 3.22)

project(stm32cubemx)
add_library(stm32cubemx INTERFACE)

# Enable CMake support for ASM and C languages
enable_language(C ASM)

target_compile_definitions(stm32cubemx INTERFACE 
	USE_HAL_DRIVER 
	STM32F411xE
    $<$<CONFIG:Debug>:DEBUG>
)

# Add the path variable for Drivers files
set(DRIVERS "../../../../Drivers/STM32F411CE-BLACKPILL/")

target_include_directories(stm32cubemx INTERFACE
    ../../Core/Inc
    ${DRIVERS}/STM32F4xx_HAL_Driver/Inc
    ${DRIVERS}/STM32F4xx_HAL_Driver/Inc/Legacy
    ${DRIVERS}/CMSIS/Device/ST/STM32F4xx/Include
    ${DRIVERS}/CMSIS/Include
)

target_sources(stm32cubemx INTERFACE
    ../../Core/Src/main.c
    ../../Core/Src/gpio.c
    ../../Core/Src/i2c.c
    ../../Core/Src/usart.c
    ../../Core/Src/stm32f4xx_it.c
    ../../Core/Src/stm32f4xx_hal_msp.c
    ${DRIVERS}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_i2c.c
    ${DRIVERS}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_i2c_ex.c
    ${DRIVERS}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rcc.c
    ${DRIVERS}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rcc_ex.c
    ${DRIVERS}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash.c
    ${DRIVERS}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash_ex.c
    ${DRIVERS}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash_ramfunc.c
    ${DRIVERS}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_gpio.c
    ${DRIVERS}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dma_ex.c
    ${DRIVERS}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dma.c
    ${DRIVERS}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pwr.c
    ${DRIVERS}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pwr_ex.c
    ${DRIVERS}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_cortex.c
    ${DRIVERS}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal.c
    ${DRIVERS}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_exti.c
    ${DRIVERS}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_tim.c
    ${DRIVERS}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_tim_ex.c
    ${DRIVERS}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_uart.c
    ../../Core/Src/system_stm32f4xx.c
    ../../Core/Src/sysmem.c
    ../../Core/Src/syscalls.c
    ../../startup_stm32f411xe.s
)

target_link_directories(stm32cubemx INTERFACE
)

target_link_libraries(stm32cubemx INTERFACE
)

# Validate that STM32CubeMX code is compatible with C standard
if(CMAKE_C_STANDARD LESS 11)
    message(ERROR "Generated code requires C11 or higher")
endif()


