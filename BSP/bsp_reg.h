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
*                                      BOARD SUPPORT PACKAGE (BSP)
*                                       Register Definitions File
*
*                                       ST Microelectronics STM32
*                                                on the
*
*                                            STM32L476G-EVAL
*                                           Evaluation Board
*
* Filename      : bsp_reg.h
* Version       : V1.00
* Programmer(s) : SB
*********************************************************************************************************
*/

#ifndef  BSP_REG_PRESENT
#define  BSP_REG_PRESENT


/*
*********************************************************************************************************
*********************************************************************************************************
*                                                DEFINES
*********************************************************************************************************
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                             RCC REGISTERS
*********************************************************************************************************
*/

#define  BSP_REG_RCC_BASE                           ((CPU_INT32U)(0x40021000u))

                                                                /* ---------------------- RCC_CR ---------------------- */
#define  BSP_REG_RCC_CR                             (*(CPU_REG32 *)(BSP_REG_RCC_BASE + 0x00u))


#define  BSP_REG_RCC_CR_BIT_PLLSAI2RDY              DEF_BIT_29
#define  BSP_REG_RCC_CR_BIT_PLLSAI2ON               DEF_BIT_28
#define  BSP_REG_RCC_CR_BIT_PLLSAI1RDY              DEF_BIT_27
#define  BSP_REG_RCC_CR_BIT_PLLSAI1ON               DEF_BIT_26
#define  BSP_REG_RCC_CR_BIT_PLLRDY                  DEF_BIT_25
#define  BSP_REG_RCC_CR_BIT_PLLON                   DEF_BIT_24
#define  BSP_REG_RCC_CR_BIT_CSSON                   DEF_BIT_19
#define  BSP_REG_RCC_CR_BIT_HSEBYP                  DEF_BIT_18
#define  BSP_REG_RCC_CR_BIT_HSERDY                  DEF_BIT_17
#define  BSP_REG_RCC_CR_BIT_HSEON                   DEF_BIT_16
#define  BSP_REG_RCC_CR_BIT_HSIASFS                 DEF_BIT_11
#define  BSP_REG_RCC_CR_BIT_HSIRDY                  DEF_BIT_10
#define  BSP_REG_RCC_CR_BIT_HSIKERON                DEF_BIT_09
#define  BSP_REG_RCC_CR_BIT_HSION                   DEF_BIT_08

#define  BSP_REG_RCC_CR_SHIFT_MSIRANGE              4u
#define  BSP_REG_RCC_CR_FIELD_MSIRANGE(val)         ((val) << BSP_REG_RCC_CR_SHIFT_MSIRANGE)
#define  BSP_REG_RCC_CR_MASK_MSIRANGE               BSP_REG_RCC_CR_FIELD_MSIRANGE(0xFu)

#define  BSP_REG_RCC_CR_BIT_MSIRGSEL                DEF_BIT_03
#define  BSP_REG_RCC_CR_BIT_MSIPLLEN                DEF_BIT_02
#define  BSP_REG_RCC_CR_BIT_MSIRDY                  DEF_BIT_01
#define  BSP_REG_RCC_CR_BIT_MSION                   DEF_BIT_00

                                                                /* --------------------- RCC_CFGR --------------------- */
#define  BSP_REG_RCC_CFGR                           (*(CPU_REG32 *)(BSP_REG_RCC_BASE + 0x08u))


#define  BSP_REG_RCC_CFGR_SHIFT_MCOPRE              28u
#define  BSP_REG_RCC_CFGR_FIELD_MCOPRE(val)         ((val) << BSP_REG_RCC_CFGR_SHIFT_MCOPRE)
#define  BSP_REG_RCC_CFGR_MASK_MCOPRE               BSP_REG_RCC_CFGR_FIELD_MCOPRE(0x7u)

#define  BSP_REG_RCC_CFGR_SHIFT_MCOSEL              24u
#define  BSP_REG_RCC_CFGR_FIELD_MCOSEL(val)         ((val) << BSP_REG_RCC_CFGR_SHIFT_MCOSEL)
#define  BSP_REG_RCC_CFGR_MASK_MCOSEL               BSP_REG_RCC_CFGR_FIELD_MCOSEL(0x7u)

#define  BSP_REG_RCC_CFGR_BIT_STOPWUCK              DEF_BIT_15

#define  BSP_REG_RCC_CFGR_SHIFT_PPRE2               11u
#define  BSP_REG_RCC_CFGR_FIELD_PPRE2(val)          ((val) << BSP_REG_RCC_CFGR_SHIFT_PPRE2)
#define  BSP_REG_RCC_CFGR_MASK_PPRE2                BSP_REG_RCC_CFGR_FIELD_PPRE2(0x7u)

#define  BSP_REG_RCC_CFGR_SHIFT_PPRE1               8u
#define  BSP_REG_RCC_CFGR_FIELD_PPRE1(val)          ((val) << BSP_REG_RCC_CFGR_SHIFT_PPRE1)
#define  BSP_REG_RCC_CFGR_MASK_PPRE1                BSP_REG_RCC_CFGR_FIELD_PPRE1(0x7u)

#define  BSP_REG_RCC_CFGR_SHIFT_HPRE                4u
#define  BSP_REG_RCC_CFGR_FIELD_HPRE(val)           ((val) << BSP_REG_RCC_CFGR_SHIFT_HPRE)
#define  BSP_REG_RCC_CFGR_MASK_HPRE                 BSP_REG_RCC_CFGR_FIELD_HPRE(0xFu)

#define  BSP_REG_RCC_CFGR_SHIFT_SWS                 2u
#define  BSP_REG_RCC_CFGR_FIELD_SWS(val)            ((val) << BSP_REG_RCC_CFGR_SHIFT_SWS)
#define  BSP_REG_RCC_CFGR_MASK_SWS                  BSP_REG_RCC_CFGR_FIELD_SWS(0x3u)

#define  BSP_REG_RCC_CFGR_SHIFT_SW                  0u
#define  BSP_REG_RCC_CFGR_FIELD_SW(val)             ((val) << BSP_REG_RCC_CFGR_SHIFT_SW)
#define  BSP_REG_RCC_CFGR_MASK_SW                   BSP_REG_RCC_CFGR_FIELD_SW(0x3u)

                                                                /* ------------------- RCC_PLLCFGR -------------------- */
#define  BSP_REG_RCC_PLLCFGR                        (*(CPU_REG32 *)(BSP_REG_RCC_BASE + 0x0Cu))


#define  BSP_REG_RCC_PLLCFGR_SHIFT_PLLR             25u
#define  BSP_REG_RCC_PLLCFGR_FIELD_PLLR(val)        ((val) << BSP_REG_RCC_PLLCFGR_SHIFT_PLLR)
#define  BSP_REG_RCC_PLLCFGR_MASK_PLLR              BSP_REG_RCC_PLLCFGR_FIELD_PLLR(0x3u)

#define  BSP_REG_RCC_PLLCFGR_BIT_PLLREN             DEF_BIT_24

#define  BSP_REG_RCC_PLLCFGR_SHIFT_PLLQ             21u
#define  BSP_REG_RCC_PLLCFGR_FIELD_PLLQ(val)        ((val) << BSP_REG_RCC_PLLCFGR_SHIFT_PLLQ)
#define  BSP_REG_RCC_PLLCFGR_MASK_PLLQ              BSP_REG_RCC_PLLCFGR_FIELD_PLLQ(0x3u)

#define  BSP_REG_RCC_PLLCFGR_BIT_PLLQEN             DEF_BIT_20
#define  BSP_REG_RCC_PLLCFGR_BIT_PLLP               DEF_BIT_17
#define  BSP_REG_RCC_PLLCFGR_BIT_PLLPEN             DEF_BIT_16

#define  BSP_REG_RCC_PLLCFGR_SHIFT_PLLN             8u
#define  BSP_REG_RCC_PLLCFGR_FIELD_PLLN(val)        ((val) << BSP_REG_RCC_PLLCFGR_SHIFT_PLLN)
#define  BSP_REG_RCC_PLLCFGR_MASK_PLLN              BSP_REG_RCC_PLLCFGR_FIELD_PLLN(0x7Fu)

#define  BSP_REG_RCC_PLLCFGR_SHIFT_PLLM             4u
#define  BSP_REG_RCC_PLLCFGR_FIELD_PLLM(val)        ((val) << BSP_REG_RCC_PLLCFGR_SHIFT_PLLM)
#define  BSP_REG_RCC_PLLCFGR_MASK_PLLM              BSP_REG_RCC_PLLCFGR_FIELD_PLLM(0x7u)

#define  BSP_REG_RCC_PLLCFGR_SHIFT_PLLSRC           0u
#define  BSP_REG_RCC_PLLCFGR_FIELD_PLLSRC(val)      ((val) << BSP_REG_RCC_PLLCFGR_SHIFT_PLLSRC)
#define  BSP_REG_RCC_PLLCFGR_MASK_PLLSRC            BSP_REG_RCC_PLLCFGR_FIELD_PLLSRC(0x3u)

                                                                /* ------------------- RCC_AHB1ENR -------------------- */
#define  BSP_REG_RCC_AHB1ENR                        (*(CPU_REG32 *)(BSP_REG_RCC_BASE + 0x48u))

#define  BSP_REG_RCC_AHB1ENR_BIT_TSCEN              DEF_BIT_16
#define  BSP_REG_RCC_AHB1ENR_BIT_CRCEN              DEF_BIT_12
#define  BSP_REG_RCC_AHB1ENR_BIT_FLASHEN            DEF_BIT_08
#define  BSP_REG_RCC_AHB1ENR_BIT_DMA2EN             DEF_BIT_01
#define  BSP_REG_RCC_AHB1ENR_BIT_DMA1EN             DEF_BIT_00

                                                                /* ------------------- RCC_AHB2ENR -------------------- */
#define  BSP_REG_RCC_AHB2ENR                        (*(CPU_REG32 *)(BSP_REG_RCC_BASE + 0x4Cu))

#define  BSP_REG_RCC_AHB2ENR_BIT_RNGEN              DEF_BIT_18
#define  BSP_REG_RCC_AHB2ENR_BIT_AESEN              DEF_BIT_16
#define  BSP_REG_RCC_AHB2ENR_BIT_ADCEN              DEF_BIT_13
#define  BSP_REG_RCC_AHB2ENR_BIT_OTGFSEN            DEF_BIT_12
#define  BSP_REG_RCC_AHB2ENR_BIT_GPIOHEN            DEF_BIT_07
#define  BSP_REG_RCC_AHB2ENR_BIT_GPIOGEN            DEF_BIT_06
#define  BSP_REG_RCC_AHB2ENR_BIT_GPIOFEN            DEF_BIT_05
#define  BSP_REG_RCC_AHB2ENR_BIT_GPIOEEN            DEF_BIT_04
#define  BSP_REG_RCC_AHB2ENR_BIT_GPIODEN            DEF_BIT_03
#define  BSP_REG_RCC_AHB2ENR_BIT_GPIOCEN            DEF_BIT_02
#define  BSP_REG_RCC_AHB2ENR_BIT_GPIOBEN            DEF_BIT_01
#define  BSP_REG_RCC_AHB2ENR_BIT_GPIOAEN            DEF_BIT_00

                                                                /* ------------------- RCC_AHB3ENR -------------------- */
#define  BSP_REG_RCC_AHB3ENR                        (*(CPU_REG32 *)(BSP_REG_RCC_BASE + 0x50u))

#define  BSP_REG_RCC_AHB3ENR_BIT_QSPIEN             DEF_BIT_08
#define  BSP_REG_RCC_AHB3ENR_BIT_FMCEN              DEF_BIT_00

                                                                /* ------------------- RCC_APB1ENR1 ------------------- */
#define  BSP_REG_RCC_APB1ENR1                       (*(CPU_REG32 *)(BSP_REG_RCC_BASE + 0x58u))

#define  BSP_REG_RCC_APB1ENR1_BIT_LPTIM1EN          DEF_BIT_31
#define  BSP_REG_RCC_APB1ENR1_BIT_OPAMPEN           DEF_BIT_30
#define  BSP_REG_RCC_APB1ENR1_BIT_DAC1EN            DEF_BIT_29
#define  BSP_REG_RCC_APB1ENR1_BIT_PWREN             DEF_BIT_28
#define  BSP_REG_RCC_APB1ENR1_BIT_CAN1EN            DEF_BIT_25
#define  BSP_REG_RCC_APB1ENR1_BIT_I2C3EN            DEF_BIT_23
#define  BSP_REG_RCC_APB1ENR1_BIT_I2C2EN            DEF_BIT_22
#define  BSP_REG_RCC_APB1ENR1_BIT_I2C1EN            DEF_BIT_21
#define  BSP_REG_RCC_APB1ENR1_BIT_UART5EN           DEF_BIT_20
#define  BSP_REG_RCC_APB1ENR1_BIT_UART4EN           DEF_BIT_19
#define  BSP_REG_RCC_APB1ENR1_BIT_USART3EN          DEF_BIT_18
#define  BSP_REG_RCC_APB1ENR1_BIT_USART2EN          DEF_BIT_17
#define  BSP_REG_RCC_APB1ENR1_BIT_SPI3EN            DEF_BIT_15
#define  BSP_REG_RCC_APB1ENR1_BIT_SPI2EN            DEF_BIT_14
#define  BSP_REG_RCC_APB1ENR1_BIT_WWDGEN            DEF_BIT_11
#define  BSP_REG_RCC_APB1ENR1_BIT_LCDEN             DEF_BIT_09
#define  BSP_REG_RCC_APB1ENR1_BIT_TIM7EN            DEF_BIT_05
#define  BSP_REG_RCC_APB1ENR1_BIT_TIM6EN            DEF_BIT_04
#define  BSP_REG_RCC_APB1ENR1_BIT_TIM5EN            DEF_BIT_03
#define  BSP_REG_RCC_APB1ENR1_BIT_TIM4EN            DEF_BIT_02
#define  BSP_REG_RCC_APB1ENR1_BIT_TIM3EN            DEF_BIT_01
#define  BSP_REG_RCC_APB1ENR1_BIT_TIM2EN            DEF_BIT_00

                                                                /* ------------------- RCC_APB1ENR2 ------------------- */
#define  BSP_REG_RCC_APB1ENR2                       (*(CPU_REG32 *)(BSP_REG_RCC_BASE + 0x5Cu))

#define  BSP_REG_RCC_APB1ENR2_BIT_LPTIM2EN          DEF_BIT_05
#define  BSP_REG_RCC_APB1ENR2_BIT_SWPMI1EN          DEF_BIT_02
#define  BSP_REG_RCC_APB1ENR2_BIT_LPUART1EN         DEF_BIT_00

                                                                /* ------------------- RCC_APB2ENR -------------------- */
#define  BSP_REG_RCC_APB2ENR                        (*(CPU_REG32 *)(BSP_REG_RCC_BASE + 0x60u))

#define  BSP_REG_RCC_APB2ENR_BIT_DFSDMEN            DEF_BIT_24
#define  BSP_REG_RCC_APB2ENR_BIT_SAI2EN             DEF_BIT_22
#define  BSP_REG_RCC_APB2ENR_BIT_SAI1EN             DEF_BIT_21
#define  BSP_REG_RCC_APB2ENR_BIT_TIM17EN            DEF_BIT_18
#define  BSP_REG_RCC_APB2ENR_BIT_TIM16EN            DEF_BIT_17
#define  BSP_REG_RCC_APB2ENR_BIT_TIM15EN            DEF_BIT_16
#define  BSP_REG_RCC_APB2ENR_BIT_USART1EN           DEF_BIT_14
#define  BSP_REG_RCC_APB2ENR_BIT_TIM8EN             DEF_BIT_13
#define  BSP_REG_RCC_APB2ENR_BIT_SPI1EN             DEF_BIT_12
#define  BSP_REG_RCC_APB2ENR_BIT_TIM1EN             DEF_BIT_11
#define  BSP_REG_RCC_APB2ENR_BIT_SDMMCEN            DEF_BIT_10
#define  BSP_REG_RCC_APB2ENR_BIT_FWEN               DEF_BIT_07
#define  BSP_REG_RCC_APB2ENR_BIT_SYSCFGEN           DEF_BIT_00


/*
*********************************************************************************************************
*                                              FLASH REGISTERS
*********************************************************************************************************
*/

#define  BSP_REG_FLASH_BASE                         ((CPU_INT32U)(0x40022000u))

                                                                /* -------------------- FLASH_ACR --------------------- */
#define  BSP_REG_FLASH_ACR                          (*(CPU_REG32 *)(BSP_REG_FLASH_BASE + 0x00u))


#define  BSP_REG_FLASH_ACR_BIT_SLEEP_PD             DEF_BIT_14
#define  BSP_REG_FLASH_ACR_BIT_RUN_PD               DEF_BIT_13
#define  BSP_REG_FLASH_ACR_BIT_DCRST                DEF_BIT_12
#define  BSP_REG_FLASH_ACR_BIT_ICRST                DEF_BIT_11
#define  BSP_REG_FLASH_ACR_BIT_DCEN                 DEF_BIT_10
#define  BSP_REG_FLASH_ACR_BIT_ICEN                 DEF_BIT_09
#define  BSP_REG_FLASH_ACR_BIT_PRFTEN               DEF_BIT_08

#define  BSP_REG_FLASH_ACR_SHIFT_LATENCY            0u
#define  BSP_REG_FLASH_ACR_FIELD_LATENCY(val)       ((val) << BSP_REG_FLASH_ACR_SHIFT_LATENCY)
#define  BSP_REG_FLASH_ACR_MASK_LATENCY             BSP_REG_FLASH_ACR_FIELD_LATENCY(0x7u)


/*
*********************************************************************************************************
*                                              GPIO REGISTERS
*********************************************************************************************************
*/

#define  BSP_REG_GPIOA_BASE                         ((CPU_INT32U)(0x48000000u))
#define  BSP_REG_GPIOB_BASE                         ((CPU_INT32U)(0x48000400u))
#define  BSP_REG_GPIOC_BASE                         ((CPU_INT32U)(0x48000800u))
#define  BSP_REG_GPIOD_BASE                         ((CPU_INT32U)(0x48000C00u))
#define  BSP_REG_GPIOE_BASE                         ((CPU_INT32U)(0x48001000u))
#define  BSP_REG_GPIOF_BASE                         ((CPU_INT32U)(0x48001400u))
#define  BSP_REG_GPIOG_BASE                         ((CPU_INT32U)(0x48001800u))
#define  BSP_REG_GPIOH_BASE                         ((CPU_INT32U)(0x48001C00u))

                                                                /* -------------------- GPIO_MODER -------------------- */
#define  BSP_REG_GPIO_MODER(base)                   (*(CPU_REG32 *)((base) + 0x00u))


#define  BSP_REG_GPIO_SHIFT_MODE(y)                 (2u * (y))
#define  BSP_REG_GPIO_FIELD_MODE(val, y)            ((val) << BSP_REG_GPIO_SHIFT_MODE(y))
#define  BSP_REG_GPIO_MASK_MODE(y)                  BSP_REG_GPIO_FIELD_MODE(0x3u, (y))

                                                                /* -------------------- GPIO_OTYPER ------------------- */
#define  BSP_REG_GPIO_OTYPER(base)                  (*(CPU_REG32 *)((base) + 0x04u))


#define  BSP_REG_GPIO_BIT_OT(y)                     (1u << (y))

                                                                /* ------------------- GPIO_OSPEEDR ------------------- */
#define  BSP_REG_GPIO_OSPEEDR(base)                 (*(CPU_REG32 *)((base) + 0x08u))


#define  BSP_REG_GPIO_SHIFT_OSPEED(y)               (2u * (y))
#define  BSP_REG_GPIO_FIELD_OSPEED(val, y)          ((val) << BSP_REG_GPIO_SHIFT_OSPEED(y))
#define  BSP_REG_GPIO_MASK_OSPEED(y)                BSP_REG_GPIO_FIELD_OSPEED(0x3u, (y))

                                                                /* -------------------- GPIO_PUPDR -------------------- */
#define  BSP_REG_GPIO_PUPDR(base)                   (*(CPU_REG32 *)((base) + 0x0Cu))


#define  BSP_REG_GPIO_SHIFT_PUPD(y)                 (2u * (y))
#define  BSP_REG_GPIO_FIELD_PUPD(val, y)            ((val) << BSP_REG_GPIO_SHIFT_PUPD(y))
#define  BSP_REG_GPIO_MASK_PUPD(y)                  BSP_REG_GPIO_FIELD_PUPD(0x3u, (y))

                                                                /* --------------------- GPIO_IDR --------------------- */
#define  BSP_REG_GPIO_IDR(base)                     (*(CPU_REG32 *)((base) + 0x10u))


#define  BSP_REG_GPIO_BIT_ID(y)                     (1u << (y))

                                                                /* --------------------- GPIO_ODR --------------------- */
#define  BSP_REG_GPIO_ODR(base)                     (*(CPU_REG32 *)((base) + 0x14u))


#define  BSP_REG_GPIO_BIT_OD(y)                     (1u << (y))

                                                                /* --------------- GPIO_BSRR & GPIO_BRR --------------- */
#define  BSP_REG_GPIO_BSRR(base)                    (*(CPU_REG32 *)((base) + 0x18u))
#define  BSP_REG_GPIO_BRR(base)                     (*(CPU_REG32 *)((base) + 0x28u))


#define  BSP_REG_GPIO_BIT_BR(y)                     (1u << ((y) + 16u))
#define  BSP_REG_GPIO_BIT_BS(y)                     (1u <<  (y))

                                                                /* --------------------- GPIO_LCKR -------------------- */
#define  BSP_REG_GPIO_LCKR(base)                    (*(CPU_REG32 *)((base) + 0x1Cu))


#define  BSP_REG_GPIO_BIT_LCKK                      DEF_BIT_16
#define  BSP_REG_GPIO_BIT_LCK(y)                    (1u << (y))

                                                                /* --------------- GPIO_AFRL & GPIO_AFRH -------------- */
#define  BSP_REG_GPIO_AFRL(base)                   (*(CPU_REG32 *)((base) + 0x20u))
#define  BSP_REG_GPIO_AFRH(base)                   (*(CPU_REG32 *)((base) + 0x24u))


#define  BSP_REG_GPIO_SHIFT_AFSEL(y)               (4u * ((y) % 8u))
#define  BSP_REG_GPIO_FIELD_AFSEL(val, y)          ((val) << BSP_REG_GPIO_SHIFT_AFSEL(y))
#define  BSP_REG_GPIO_MASK_AFSEL(y)                BSP_REG_GPIO_FIELD_AFSEL(0x7u, (y))


#endif                                                          /* End of module include.                               */

