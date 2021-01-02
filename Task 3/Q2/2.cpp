#include <mega16.h>
#include <alcd.h>

char Chars[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int cnt,CheckEnd;

interrupt [TIM0_OVF] void timer0_ovf_isr(void)
{

    cnt++;
    if(cnt == 500){
    	CheckEnd++;
        if(CheckEnd == 26){
	        TCCR0=0x00;
	        TIMSK=0x00;
	        cnt = 0;
        }
        else
        {
        	lcd_putchar(Chars[CheckEnd]);
        	cnt = 0;
		}
    }
}


void main(void)
{
lcd_init();
lcd_gotoxy(0,0);

OCR0=0x00;
TCNT0=0x00;
TCCR0=0x01;
TIMSK=0x01;

#asm("sei")

}
