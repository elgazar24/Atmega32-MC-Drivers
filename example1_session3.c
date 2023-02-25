#define  F_CPU 16000000

#include <avr/io.h>
#include <util/delay.h>

// main 
int main(void) {

        // Setting Pins of PortA dirction to  ===> 0b00000001 ( Pin0(A0) = OutPut & rest of Pins as Input )
        DDRA = 0x01;
        // Setting Pins Value (1 or 0)  ===> 0b00000001 (Pin0(A0) = High( 5V ) & rest of Pins as 0V)
        PORTA = 0x01 ;
    
        // infinte while Loop 
    while (1) {
            
                 // Setting Pins Value (1 or 0)  ===> 0b00000000 (Pin0(A0) = LOW( 0V ) & rest of Pins as 0V)
                PORTA = 0x00 ;
         
                _delay_ms(1000); //    Wait for 1000 MiliSecounds = 1 S
            
                 // Setting Pins Value (1 or 0)  ===> 0b00000001 (Pin0(A0) = High( 5V ) & rest of Pins as 0V)
                  PORTA = 0x01 ;
                  
                _delay_ms(1000); //    Wait for 1000 MiliSecounds = 1 S
                
    } // End While
        
}// end main 
