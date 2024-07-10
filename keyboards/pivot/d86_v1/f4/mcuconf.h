

#pragma once

#include_next <mcuconf.h>

#undef STM32_SERIAL_USE_USART1
#define STM32_SERIAL_USE_USART1 TRUE


#undef STM32_PWM_USE_TIM3
#define STM32_PWM_USE_TIM3 TRUE

#undef STM32_PLLM_VALUE
#undef STM32_PLLN_VALUE
#undef STM32_PLLP_VALUE
#undef STM32_PLLQ_VALUE

#define STM32_PLLM_VALUE                    8
#define STM32_PLLN_VALUE                    120
#define STM32_PLLP_VALUE                    4
#define STM32_PLLQ_VALUE                    5  //Only for usb frequency


#undef STM32_ADC_USE_ADC1
#define STM32_ADC_USE_ADC1 TRUE
