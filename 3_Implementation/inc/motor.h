/**
 * @file motor.h
 * @author vaibhav gaurkar
 * @brief 
 * @version 0.1
 * @date 2021-12-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __MOTOR_H__
#define __MOTOR_H__
#define PWM1H OCR1AH
#define PWM1L OCR1AL
#define PWM2H OCR1BH
#define PWM2L OCR1BL
unsigned int readADC(unsigned char ADCinput);
int reverse();
int stopping();
int forward();

#endif