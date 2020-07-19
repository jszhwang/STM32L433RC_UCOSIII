/**
  * @brief This file contains functions that generated by CUBEMX
  * @retval None
  */
#ifndef __BSP_HAL_H__
#define __BSP_HAL_H__
#include "stm32l4xx_hal.h"

#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define MCO_Pin GPIO_PIN_0
#define MCO_GPIO_Port GPIOH
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define SMPS_EN_Pin GPIO_PIN_4
#define SMPS_EN_GPIO_Port GPIOA
#define SMPS_V1_Pin GPIO_PIN_5
#define SMPS_V1_GPIO_Port GPIOA
#define SMPS_PG_Pin GPIO_PIN_6
#define SMPS_PG_GPIO_Port GPIOA
#define SMPS_SW_Pin GPIO_PIN_7
#define SMPS_SW_GPIO_Port GPIOA
#define LD4_Pin GPIO_PIN_13
#define LD4_GPIO_Port GPIOB
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB

extern UART_HandleTypeDef huart2;
extern DMA_HandleTypeDef hdma_usart2_tx;


void SystemClock_Config(void);
void MX_GPIO_Init(void);
void MX_USART2_UART_Init(void);
void MX_DMA_Init(void);
void Error_Handler(void);

#ifdef  USE_FULL_ASSERT
void assert_failed(uint8_t *file, uint32_t line);
#endif
#endif