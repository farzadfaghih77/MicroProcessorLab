#include <mega16.h>
#include <alcd.h>

void main(void)
{
    lcd_init();   
    lcd_gotoxy(0,0);
    lcd_putsf("Hello World");
    
}
