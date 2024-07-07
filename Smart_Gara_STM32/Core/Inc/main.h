/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define led_Pin GPIO_PIN_13
#define led_GPIO_Port GPIOC
#define SERVO1_PIN_Pin GPIO_PIN_0
#define SERVO1_PIN_GPIO_Port GPIOA
#define SERVO2_PIN_Pin GPIO_PIN_1
#define SERVO2_PIN_GPIO_Port GPIOA
#define Buzzer_pin_Pin GPIO_PIN_1
#define Buzzer_pin_GPIO_Port GPIOB
#define USART3_RX_Pin GPIO_PIN_11
#define USART3_RX_GPIO_Port GPIOB
#define LCD_RS_Pin GPIO_PIN_12
#define LCD_RS_GPIO_Port GPIOB
#define LCD_EN_Pin GPIO_PIN_13
#define LCD_EN_GPIO_Port GPIOB
#define LCD_D4_Pin GPIO_PIN_14
#define LCD_D4_GPIO_Port GPIOB
#define LCD_D5_Pin GPIO_PIN_15
#define LCD_D5_GPIO_Port GPIOB
#define LCD_D6_Pin GPIO_PIN_8
#define LCD_D6_GPIO_Port GPIOA
#define LCD_D7_Pin GPIO_PIN_9
#define LCD_D7_GPIO_Port GPIOA
#define SS5_PIN_Pin GPIO_PIN_3
#define SS5_PIN_GPIO_Port GPIOB
#define SS4_PIN_Pin GPIO_PIN_4
#define SS4_PIN_GPIO_Port GPIOB
#define SS3_PIN_Pin GPIO_PIN_5
#define SS3_PIN_GPIO_Port GPIOB
#define SS2_PIN_Pin GPIO_PIN_6
#define SS2_PIN_GPIO_Port GPIOB
#define SS1_PIN_Pin GPIO_PIN_7
#define SS1_PIN_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */