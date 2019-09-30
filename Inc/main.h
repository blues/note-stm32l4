
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include "stm32l4xx_hal.h"

void Error_Handler(void);

#define MCO_Pin GPIO_PIN_0
#define MCO_GPIO_Port GPIOA
#define VCP_TX_Pin GPIO_PIN_2
#define VCP_TX_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define VCP_RX_Pin GPIO_PIN_15
#define VCP_RX_GPIO_Port GPIOA
#define LD3_Pin GPIO_PIN_3
#define LD3_GPIO_Port GPIOB

long unsigned int millis(void);
void delay(uint32_t ms);
void setup(void);
void loop(void);

bool MY_Debug(void);
void MY_Sleep_DeInit(void);

#include "event.h"
#ifdef EVENT_TIMER
uint32_t MY_TimerMs(void);
#endif

#ifdef __cplusplus
}
#endif

#endif // __MAIN_H 
