/*
*********************************************************************************************************
*                                     MICIRUM BOARD SUPPORT PACKAGE
*
*                          (c) Copyright 2004-2015; Micrium, Inc.; Weston, FL
*
*               All rights reserved.  Protected by international copyright laws.
*               Knowledge of the source code may NOT be used to develop a similar product.
*               Please help us continue to provide the Embedded community with the finest
*               software available.  Your honesty is greatly appreciated.
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*
*                                         BOARD SUPPORT PACKAGE
*
*                                       ST Microelectronics STM32
*                                                on the
*
*                                            STM32L476G-EVAL
*                                           Evaluation Board
*
* Filename      : bsp_periph.c
* Version       : V1.00
* Programmer(s) : EHS
*                 YS
*                 SB
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                             INCLUDE FILES
*********************************************************************************************************
*/

#define  BSP_PERIPH_MODULE
#include "bsp.h"
#include "bsp_reg.h"


/*
*********************************************************************************************************
*                                            LOCAL DEFINES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                           LOCAL CONSTANTS
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                          LOCAL DATA TYPES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                            LOCAL TABLES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                       LOCAL GLOBAL VARIABLES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                      LOCAL FUNCTION PROTOTYPES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                     LOCAL CONFIGURATION ERRORS
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                             BSP_PeriphEn()
*
* Description : Enable clock for peripheral.
*
* Argument(s) : pwr_clk_id      Power/clock ID.
*
* Return(s)   : none.
*
* Caller(s)   : Application.
*
* Note(s)     : none.
*********************************************************************************************************
*/

void  BSP_PeriphEn (CPU_DATA  pwr_clk_id)
{
    switch (pwr_clk_id) {
                                                                /* --------------------- AHB1 BUS --------------------- */
        case BSP_PERIPH_ID_TSC:
        case BSP_PERIPH_ID_CRC:
        case BSP_PERIPH_ID_FLASH:
        case BSP_PERIPH_ID_DMA2:
        case BSP_PERIPH_ID_DMA1:
             BSP_REG_RCC_AHB1ENR |= DEF_BIT(pwr_clk_id & ~BSP_AHB1_REG1_MASK);

                                                                /* --------------------- AHB2 BUS --------------------- */
        case BSP_PERIPH_ID_RNG:
        case BSP_PERIPH_ID_AES:
        case BSP_PERIPH_ID_ADC:
        case BSP_PERIPH_ID_OTGFS:
        case BSP_PERIPH_ID_GPIOH:
        case BSP_PERIPH_ID_GPIOG:
        case BSP_PERIPH_ID_GPIOF:
        case BSP_PERIPH_ID_GPIOE:
        case BSP_PERIPH_ID_GPIOD:
        case BSP_PERIPH_ID_GPIOC:
        case BSP_PERIPH_ID_GPIOB:
        case BSP_PERIPH_ID_GPIOA:
             BSP_REG_RCC_AHB2ENR |= DEF_BIT(pwr_clk_id & ~BSP_AHB2_REG1_MASK);

                                                                /* --------------------- AHB3 BUS --------------------- */
        case BSP_PERIPH_ID_QSPI:
        case BSP_PERIPH_ID_FMC:
             BSP_REG_RCC_AHB3ENR |= DEF_BIT(pwr_clk_id & ~BSP_AHB3_REG1_MASK);

                                                                /* ------------------ APB1 BUS REG 1 ------------------ */
        case BSP_PERIPH_ID_LPTIM1:
        case BSP_PERIPH_ID_OPAMP:
        case BSP_PERIPH_ID_DAC1:
        case BSP_PERIPH_ID_PWR:
        case BSP_PERIPH_ID_CAN1:
        case BSP_PERIPH_ID_I2C3:
        case BSP_PERIPH_ID_I2C2:
        case BSP_PERIPH_ID_I2C1:
        case BSP_PERIPH_ID_UART5:
        case BSP_PERIPH_ID_UART4:
        case BSP_PERIPH_ID_USART3:
        case BSP_PERIPH_ID_USART2:
        case BSP_PERIPH_ID_SPI3:
        case BSP_PERIPH_ID_SPI2:
        case BSP_PERIPH_ID_WWDG:
        case BSP_PERIPH_ID_LCD:
        case BSP_PERIPH_ID_TIM7:
        case BSP_PERIPH_ID_TIM6:
        case BSP_PERIPH_ID_TIM5:
        case BSP_PERIPH_ID_TIM4:
        case BSP_PERIPH_ID_TIM3:
        case BSP_PERIPH_ID_TIM2:
             BSP_REG_RCC_APB1ENR1 |= DEF_BIT(pwr_clk_id & ~BSP_APB1_REG1_MASK);


                                                                /* ------------------ APB1 BUS REG 2 ------------------ */
        case BSP_PERIPH_ID_LPTIM2:
        case BSP_PERIPH_ID_SWPMI1:
        case BSP_PERIPH_ID_LPUART1:
             BSP_REG_RCC_APB1ENR2 |= DEF_BIT(pwr_clk_id & ~BSP_APB1_REG2_MASK);

                                                                /* --------------------- APB2 BUS --------------------- */
        case BSP_PERIPH_ID_DFSDM:
        case BSP_PERIPH_ID_SAI2:
        case BSP_PERIPH_ID_SAI1:
        case BSP_PERIPH_ID_TIM17:
        case BSP_PERIPH_ID_TIM16:
        case BSP_PERIPH_ID_TIM15:
        case BSP_PERIPH_ID_USART1:
        case BSP_PERIPH_ID_TIM8:
        case BSP_PERIPH_ID_SPI1:
        case BSP_PERIPH_ID_TIM1:
        case BSP_PERIPH_ID_SDMMC:
        case BSP_PERIPH_ID_FW:
        case BSP_PERIPH_ID_SYSCFG:
             BSP_REG_RCC_APB2ENR |= DEF_BIT(pwr_clk_id & ~BSP_APB2_REG1_MASK);


        default:
             break;
    }
}


/*
*********************************************************************************************************
*                                             BSP_PeriphDis()
*
* Description : Disable clock for peripheral.
*
* Argument(s) : pwr_clk_id      Power/clock ID.
*
* Return(s)   : none.
*
* Caller(s)   : Application.
*
* Note(s)     : none.
*********************************************************************************************************
*/

void  BSP_PeriphDis (CPU_DATA  pwr_clk_id)
{
    switch (pwr_clk_id) {
                                                                /* --------------------- AHB1 BUS --------------------- */
        case BSP_PERIPH_ID_TSC:
        case BSP_PERIPH_ID_CRC:
        case BSP_PERIPH_ID_FLASH:
        case BSP_PERIPH_ID_DMA2:
        case BSP_PERIPH_ID_DMA1:
             BSP_REG_RCC_AHB1ENR &= ~DEF_BIT(pwr_clk_id & ~BSP_AHB1_REG1_MASK);

                                                                /* --------------------- AHB2 BUS --------------------- */
        case BSP_PERIPH_ID_RNG:
        case BSP_PERIPH_ID_AES:
        case BSP_PERIPH_ID_ADC:
        case BSP_PERIPH_ID_OTGFS:
        case BSP_PERIPH_ID_GPIOH:
        case BSP_PERIPH_ID_GPIOG:
        case BSP_PERIPH_ID_GPIOF:
        case BSP_PERIPH_ID_GPIOE:
        case BSP_PERIPH_ID_GPIOD:
        case BSP_PERIPH_ID_GPIOC:
        case BSP_PERIPH_ID_GPIOB:
        case BSP_PERIPH_ID_GPIOA:
             BSP_REG_RCC_AHB2ENR &= ~DEF_BIT(pwr_clk_id & ~BSP_AHB2_REG1_MASK);

                                                                /* --------------------- AHB3 BUS --------------------- */
        case BSP_PERIPH_ID_QSPI:
        case BSP_PERIPH_ID_FMC:
             BSP_REG_RCC_AHB3ENR &= ~DEF_BIT(pwr_clk_id & ~BSP_AHB3_REG1_MASK);

                                                                /* ------------------ APB1 BUS REG 1 ------------------ */
        case BSP_PERIPH_ID_LPTIM1:
        case BSP_PERIPH_ID_OPAMP:
        case BSP_PERIPH_ID_DAC1:
        case BSP_PERIPH_ID_PWR:
        case BSP_PERIPH_ID_CAN1:
        case BSP_PERIPH_ID_I2C3:
        case BSP_PERIPH_ID_I2C2:
        case BSP_PERIPH_ID_I2C1:
        case BSP_PERIPH_ID_UART5:
        case BSP_PERIPH_ID_UART4:
        case BSP_PERIPH_ID_USART3:
        case BSP_PERIPH_ID_USART2:
        case BSP_PERIPH_ID_SPI3:
        case BSP_PERIPH_ID_SPI2:
        case BSP_PERIPH_ID_WWDG:
        case BSP_PERIPH_ID_LCD:
        case BSP_PERIPH_ID_TIM7:
        case BSP_PERIPH_ID_TIM6:
        case BSP_PERIPH_ID_TIM5:
        case BSP_PERIPH_ID_TIM4:
        case BSP_PERIPH_ID_TIM3:
        case BSP_PERIPH_ID_TIM2:
             BSP_REG_RCC_APB1ENR1 &= ~DEF_BIT(pwr_clk_id & ~BSP_APB1_REG1_MASK);


                                                                /* ------------------ APB1 BUS REG 2 ------------------ */
        case BSP_PERIPH_ID_LPTIM2:
        case BSP_PERIPH_ID_SWPMI1:
        case BSP_PERIPH_ID_LPUART1:
             BSP_REG_RCC_APB1ENR2 &= ~DEF_BIT(pwr_clk_id & ~BSP_APB1_REG2_MASK);

                                                                /* --------------------- APB2 BUS --------------------- */
        case BSP_PERIPH_ID_DFSDM:
        case BSP_PERIPH_ID_SAI2:
        case BSP_PERIPH_ID_SAI1:
        case BSP_PERIPH_ID_TIM17:
        case BSP_PERIPH_ID_TIM16:
        case BSP_PERIPH_ID_TIM15:
        case BSP_PERIPH_ID_USART1:
        case BSP_PERIPH_ID_TIM8:
        case BSP_PERIPH_ID_SPI1:
        case BSP_PERIPH_ID_TIM1:
        case BSP_PERIPH_ID_SDMMC:
        case BSP_PERIPH_ID_FW:
        case BSP_PERIPH_ID_SYSCFG:
             BSP_REG_RCC_APB2ENR &= ~DEF_BIT(pwr_clk_id & ~BSP_APB2_REG1_MASK);


        default:
             break;
    }
}
