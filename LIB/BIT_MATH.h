/*                                                                               */
/*    AUTOR : MOHAMED EBRAHIM ELGAZAR                                            */
/*    DATE  : 16 / 10 / 2022                                                     */
/*    LAYER : LIB                                                                */
/*    MCU   : ATMEL32 (  AVR  )                                                  */
/*    This file is developed by MOHAMED ELGAZAR, All copyrights are reserved     */
/*                                                                               */


//   Header Gard 
#ifndef BIT_MATH_H_
#define BIT_MATH_H_



// SET BITNUM AT REG HIGH
#define SETBIT(REG , BITNUM)     (REG |= (1<<BITNUM))


// CLER BITNUM AT REG TO LOW
#define CLEARBIT(REG , BITNUM)   (REG &= (~(1<<BITNUM)))

//XOR
// CHANGE VALUE OF BITNUM AT REG 
#define TOGGLEBIT(REG , BITNUM)  (REG ^= (1<<BITNUM))


// GET BIT VALUE 
#define GETBIT(REG,BITNUM)      (((REG) >> (BITNUM)) & (0x01))




#endif