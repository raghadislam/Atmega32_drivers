/*
 * timer_config.h
 *
 *  Created on: Dec 18, 2023
 *      Author: Raghad Islam
 */

#ifndef ATMEGA32_CTOS_MCAL_TIMER_TIMER_CONFIG_H_
#define ATMEGA32_CTOS_MCAL_TIMER_TIMER_CONFIG_H_

/* choose mood
 * options:
 * 1- TIMER_MODE_CTC
 * 2- TIMER_MODE_OVE
 * 3- TIMER_MODE_PWM
 * 4- TIMER_MODE_FASTPWM
 * 5- TIMER_MODE_PWM_8BIT       (timer 1 only)
 * 6- TIMER_MODE_PWM_9BIT       (timer 1 only)
 * 7- TIMER_MODE_PWM_10BIT 	    (timer 1 only)
 * 8- TIMER_MODE_FAST_PWM_8BIT  (timer 1 only)
 * 9- TIMER_MODE_FAST_PWM_9BIT  (timer 1 only)
 * 10 TIMER_MODE_FAST_PWM_10BIT (timer 1 only)
 * 11-TIMER_MODE_FASTPWM_ICR1   (timer 1 only)
 * 12 TIMER_MODE_FASTPWM_OCRA1  (timer 1 only) */

#define TIMER0_MODE			TIMER_MODE_FASTPWM
#define TIMER1_MODE			TIMER_MODE_OVE
#define TIMER2_MODE			TIMER_MODE_CTC


/* choose prescaler
 * options:
 * 1- TIMER_CLK_STOP
 * 2- TIMER_NO_PRESCALER
 * 3- TIMER_PRESCALER_8
 * 4- TIMER_PRESCALER_64
 * 5- TIMER_PRESCALER_128 (timer2 only)
 * 5- TIMER_PRESCALER_256
 * 6- TIMER_PRESCALER_1024
 * 7- TIMER_EXT_PRESCALER_RISING  (timer0 and timer1 only)
 * 8- TIMER_EXT_PRESCALER_FALLING (timer0 and timer1 only) */

#define TIMER0_PRESCALER		TIMER_PRESCALER_8
#define TIMER1_PRESCALER		TIMER_PRESCALER_8
#define TIMER2_PRESCALER		TIMER_NO_PRESCALER


/* choose action happens on OC0 at compare match
 * options:
 * 1- CLEAR_OC0
 * 2- SET_OC0
 * 3- TOGGLE_OC0
 * 4- DISCONNECT_OC0 */

#define TIMER0_CTC_ACTION		SET_OC
#define TIMER1_CTC_ACTION		DISCONNECT_OC
#define TIMER2_CTC_ACTION		DISCONNECT_OC


/* choose fast pwm waveform
 * options:
* 1- CLEAR_ON_COMP_SET_ON_TOP (non-inverted)
* 2- SET_ON_COMP_CLEAR_ON_TOP (inverted)
* 3- OC0_DISCONNECTED */

#define TIMER0_FASTPWM_SELECTION	CLEAR_ON_COMP_SET_ON_TOP
#define TIMER1_FASTPWM_SELECTION_A	CLEAR_ON_COMP_SET_ON_TOP
#define TIMER1_FASTPWM_SELECTION_B	CLEAR_ON_COMP_SET_ON_TOP
#define TIMER2_FASTPWM_SELECTION	CLEAR_ON_COMP_SET_ON_TOP



/* choose pwm waveform
 * options:
* 1- CLEAR_ON_UP_SET_ON_DOWN (non-inverted)
* 2- SET_ON_UP_CLEAR_ON_DOWN (inverted)
* 3- OC_DISCONNECTED */

#define TIMER0_PWM_SELECTION		CLEAR_ON_UP_SET_ON_DOWN
#define TIMER1_PWM_SELECTION_A		CLEAR_ON_UP_SET_ON_DOWN
#define TIMER1_PWM_SELECTION_B		CLEAR_ON_UP_SET_ON_DOWN
#define TIMER2_PWM_SELECTION		CLEAR_ON_UP_SET_ON_DOWN


/*determine timers statues
 * 1- ENABLED
 * 2- DISABLED */

#define TIMER0_STATE				TIMER_ENABLED
#define TIMER1_STATE_A				TIMER_ENABLED
#define TIMER1_STATE_B				TIMER_ENABLED
#define TIMER2_STATE				TIMER_ENABLED
#define ICU_STATE					TIMER_ENABLED

#define ICU_TRIGGER					RISING_EDGE

#define TIMER1_CTC_STATE_A		TIMER_ENABLED
#define TIMER1_CTC_STATE_B		TIMER_ENABLED

#define TIMER1_PWM_STATE_A		TIMER_ENABLED
#define TIMER1_PWM_STATE_B		TIMER_ENABLED

#define TIMER1_FASTPWM_STATE_A	TIMER_ENABLED
#define TIMER1_FASTPWM_STATE_B	TIMER_ENABLED








#endif /* ATMEGA32_CTOS_MCAL_TIMER_TIMER_CONFIG_H_ */
