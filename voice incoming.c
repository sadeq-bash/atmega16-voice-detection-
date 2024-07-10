/*
 * voice incoming.c
 *
 * Created: 8/7/2023 3:48:26 AM
 * Author: LENOVO
 */

#include <io.h>
#include <alcd.h>
#include <delay.h>
#include <mega16a.h>

void main(void)
{
    DDRA = 0xFF;
    DDRD.2 = 0; 
    //PORTD.2 = 0; 
    SREG = 1 << 7;
    //#asm("sei");
    GICR = 1 << 6;
    MCUCR = 0x03; 
    lcd_init(16);
    lcd_puts("voice detection");
    delay_ms(500);     
    lcd_clear();
    lcd_puts("no voice");
while (1)
    {   
         
        
    }
}

interrupt [2] void incoming_voice(void)
{
      lcd_clear();
      lcd_puts("voice detected");
      delay_ms(500);
      lcd_clear(); 
      lcd_puts("no voice");
}