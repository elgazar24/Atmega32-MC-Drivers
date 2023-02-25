/*                                                                          */
/*                                                                          */
/*  AUTOR : MOHAMED EBRAHIM MOHAMED ELGAZAR                                 */
/*  DATE  : 16 / 10 / 2022                                                  */
/*  LAYER : MCAL                                                            */
/*  DRIVER: DIO                                                             */
/*  MCU   : ATMEL32 (  AVR  )                                               */
/*  This file is developed by MOHAMED ELGAZAR, All copyrights are reserved  */
/*                                                                          */
/*                                                                          */




#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_


/*
PORT(X) FOR SETTING PORT VALUE

DDR(X) FOR SETTING PORT DIRECTION

PIN(X) FOR GETTING PORT VALUE
*/


// PORTA REGISTERS DEF  
#define DIO_PORTA_REG *((volatile u8*)0x3B)
#define DIO_DDRA_REG  *((volatile u8*)0x3A)
#define DIO_PINA_REG  *((volatile u8*)0x39)


// PORTB REGISTERS DEF 
#define DIO_PORTB_REG *((volatile u8*)0x38)
#define DIO_DDRB_REG  *((volatile u8*)0x37)
#define DIO_PINB_REG  *((volatile u8*)0x36)


// PORTC REGISTERS DEF 
#define DIO_PORTC_REG *((volatile u8*)0x35)
#define DIO_DDRC_REG  *((volatile u8*)0x34)
#define DIO_PINC_REG  *((volatile u8*)0x33)


// PORTD REGISTERS DEF 
#define DIO_PORTD_REG *((volatile u8*)0x32)
#define DIO_DDRD_REG  *((volatile u8*)0x31)
#define DIO_PIND_REG  *((volatile u8*)0x30)




#endif








