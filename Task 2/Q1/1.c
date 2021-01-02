#include <mega16.h>
#include <delay.h>

void main(void){
	DDRC = 0xFF;
	int cnt = 0;
	
	while(1){
		if (cnt ==0)
        	PORTC = 0b01000000;
		else if (cnt ==1)
        	PORTC = 0b01111001;
		else if (cnt ==2)
        	PORTC = 0b00100100;
		else if (cnt ==3)
        	PORTC = 0b00110000;
		else if (cnt ==4)
        	PORTC = 0b00011001;
		else if (cnt ==5)
        	PORTC = 0b00010010;
		else if (cnt ==6)
        	PORTC = 0b00000010;
		else if (cnt ==7)
        	PORTC = 0b01111000;
		else if (cnt ==8)
        	PORTC = 0b00000000;
		else if (cnt ==9)
        	PORTC = 0b00011000;
        	
        cnt++;
        else if(cnt ==10)
            cnt = 0;
            
        delay_ms(100);
	}
}

