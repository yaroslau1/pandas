/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  ** This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * COPYRIGHT(c) 2019 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H__
#define __MAIN_H__

/* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define M_ENABLE_Pin GPIO_PIN_0
#define M_ENABLE_GPIO_Port GPIOC
#define ECG_PWDN_Pin GPIO_PIN_2
#define ECG_PWDN_GPIO_Port GPIOC
#define V_BAT_Pin GPIO_PIN_3
#define V_BAT_GPIO_Port GPIOC
#define USER_BUTTON_Pin GPIO_PIN_0
#define USER_BUTTON_GPIO_Port GPIOA
#define V_COMM_Pin GPIO_PIN_1
#define V_COMM_GPIO_Port GPIOA
#define V_DVCC_Pin GPIO_PIN_2
#define V_DVCC_GPIO_Port GPIOA
#define V_AVCC_Pin GPIO_PIN_3
#define V_AVCC_GPIO_Port GPIOA
#define ECG_RESET_Pin GPIO_PIN_4
#define ECG_RESET_GPIO_Port GPIOA
#define ECG_SCK_Pin GPIO_PIN_5
#define ECG_SCK_GPIO_Port GPIOA
#define ECG_MISO_Pin GPIO_PIN_6
#define ECG_MISO_GPIO_Port GPIOA
#define ECG_MOSI_Pin GPIO_PIN_7
#define ECG_MOSI_GPIO_Port GPIOA
#define ECG_START_Pin GPIO_PIN_4
#define ECG_START_GPIO_Port GPIOC
#define ECG_CS_Pin GPIO_PIN_5
#define ECG_CS_GPIO_Port GPIOC
#define BUZZER_N_Pin GPIO_PIN_0
#define BUZZER_N_GPIO_Port GPIOB
#define ECG_DRDY_Pin GPIO_PIN_1
#define ECG_DRDY_GPIO_Port GPIOB
#define BOOT1_Pin GPIO_PIN_2
#define BOOT1_GPIO_Port GPIOB
#define BT_TX_Pin GPIO_PIN_10
#define BT_TX_GPIO_Port GPIOB
#define BT_RX_Pin GPIO_PIN_11
#define BT_RX_GPIO_Port GPIOB
#define BT_LSTAT_Pin GPIO_PIN_12
#define BT_LSTAT_GPIO_Port GPIOB
#define BT_CTS_Pin GPIO_PIN_13
#define BT_CTS_GPIO_Port GPIOB
#define BT_RTS_Pin GPIO_PIN_14
#define BT_RTS_GPIO_Port GPIOB
#define BT_RST_Pin GPIO_PIN_15
#define BT_RST_GPIO_Port GPIOB
#define BT_ENABLE_Pin GPIO_PIN_6
#define BT_ENABLE_GPIO_Port GPIOC
#define BUZZER_P_Pin GPIO_PIN_7
#define BUZZER_P_GPIO_Port GPIOC
#define BT_BOOT_Pin GPIO_PIN_8
#define BT_BOOT_GPIO_Port GPIOC
#define F2_048MHz_Pin GPIO_PIN_9
#define F2_048MHz_GPIO_Port GPIOC
#define WIFI_RESET_Pin GPIO_PIN_8
#define WIFI_RESET_GPIO_Port GPIOA
#define WIFI_TX_Pin GPIO_PIN_9
#define WIFI_TX_GPIO_Port GPIOA
#define WIFI_RX_Pin GPIO_PIN_10
#define WIFI_RX_GPIO_Port GPIOA
#define WIFI_CTS_Pin GPIO_PIN_11
#define WIFI_CTS_GPIO_Port GPIOA
#define WIFI_RTS_Pin GPIO_PIN_12
#define WIFI_RTS_GPIO_Port GPIOA
#define WIFI_ENABLE_Pin GPIO_PIN_15
#define WIFI_ENABLE_GPIO_Port GPIOA
#define SRAM_SCK_Pin GPIO_PIN_10
#define SRAM_SCK_GPIO_Port GPIOC
#define SRAM_MISO_Pin GPIO_PIN_11
#define SRAM_MISO_GPIO_Port GPIOC
#define SRAM_MOSI_Pin GPIO_PIN_12
#define SRAM_MOSI_GPIO_Port GPIOC
#define SRAM_CS_Pin GPIO_PIN_2
#define SRAM_CS_GPIO_Port GPIOD
#define SRAM_ENABLE_Pin GPIO_PIN_3
#define SRAM_ENABLE_GPIO_Port GPIOB
#define ADS_ENABLE_Pin GPIO_PIN_5
#define ADS_ENABLE_GPIO_Port GPIOB
#define LED_YELLOW_Pin GPIO_PIN_6
#define LED_YELLOW_GPIO_Port GPIOB
#define LED_GREEN_Pin GPIO_PIN_7
#define LED_GREEN_GPIO_Port GPIOB
#define LED_BLUE_Pin GPIO_PIN_8
#define LED_BLUE_GPIO_Port GPIOB

/* ########################## Assert Selection ############################## */
/**
  * @brief Uncomment the line below to expanse the "assert_param" macro in the 
  *        HAL drivers code
  */
/* #define USE_FULL_ASSERT    1U */

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
 extern "C" {
#endif
void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)
#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
