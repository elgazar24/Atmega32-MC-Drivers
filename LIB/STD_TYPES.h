/*                                                                              */
/*   AUTOR : MOHAMED EBRAHIM ELGAZAR                                            */
/*   DATE  : 16 / 10 / 2022                                                     */
/*   LAYER : LIB                                                                */
/*   MCU   : ATMEL32 (  AVR  )                                                  */
/*   This file is developed by MOHAMED ELGAZAR, All copyrights are reserved     */
/*                                                                              */



//   Header Gard 
#ifndef STD_TYPES_H_
#define STD_TYPES_H_



// unsigned char variable  (0  - >  255)
typedef unsigned char u8;

// signed char variable  (-128  - >  127)
typedef signed char s8;

// unsigned short variable  (0  - >  65535)
typedef unsigned short u16;

// signed short variable  (-32768  - >  32767)
typedef signed short s16;

// unsigned long variable  (0  - >  4294967296)
typedef unsigned long u32;

// signed long variable  ( -2147483648  - >  2147483647)
typedef signed long s32;



#define NULL ((volatile u8)0)



#endif