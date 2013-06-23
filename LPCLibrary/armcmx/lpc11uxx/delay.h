/*
 * delay5.h
 *
 *  Created on: 2012/11/15
 *      Author: sin
 */

#ifndef __DELAY_H_
#define __DELAY_H_

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
//#include "armcmx.h"

extern volatile uint32_t __counter_micros;
extern volatile uint32_t __counter_millis;

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

uint32_t micros(void);
uint32_t millis(void);
	
void init_timer16_1(void);
void enable_timer16_1(void);
void disable_timer16_1(void);
void reset_timer16_1(void);
void TIMER16_1_IRQHandler(void);

void delay_ms(uint32_t);
void delay_us(uint32_t);

#define delay(x)  delay_ms(x)
#define delayMicroseconds(x)  delay_us(x)


#ifdef __cplusplus
}
#endif


#endif /* DELAY5_H_ */
