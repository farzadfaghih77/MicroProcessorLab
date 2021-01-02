#include <mega16.h>
#include <delay.h>

int main(void)
{
    DDRD = 0xFF;
    DDRC = 0xFF;
    int i;
    int cnt;
    char seg_code[]={0b01000000,0b01111001,0b00100100,0b00110000,0b00011001,0b00010010,0b00000010,0b01111000,0b00000000,0b00011000};

    while (1)
    {
            for (cnt = 0; cnt <= 999; cnt++)
            {
                for (i = 0; i < 100; i++)
        
                {
                    PORTC = 0x01; 
                    PORTD = seg_code[i];               
                    _delay_ms(100);
    
                }
            }
    
    }
}
