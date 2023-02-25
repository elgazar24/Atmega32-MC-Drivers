#define  F_CPU 16000000

#include <avr/io.h>
#include <util/delay.h>
int main(void) {

        DDRA = 0x01;
        
        PORTA = 0x01 ;
    
    while (1) {
        
                PORTA = 0x00 ;
                 
                _delay_ms(1000); // => 1 s
                
                  PORTA = 0x01 ;
                  
                _delay_ms(1000);
                
    }
}
