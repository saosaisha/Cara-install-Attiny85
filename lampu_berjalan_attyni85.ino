#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
while(1)
{
DDRB= 0xff; //sets semua pin sebagai output

PORTB= 0b00000001; //sets LED P0 red LED, HIGH or ON
_delay_ms(100);//Nyala terus selama 1/2 detik
PORTB=0b00000000;//turns off P0
_delay_ms(100);

PORTB= 0b00000010; //sets LED P1 red LED, HIGH or ON
_delay_ms(100);//Nyala terus selama 1/2 detik
PORTB=0b00000000;//turns off P1
_delay_ms(100);

PORTB= 0b00000100; //sets LED P2 red LED, HIGH or ON
_delay_ms(100);//Nyala terus selama 1/2 detik
PORTB=0b00000000;//turns off P2
_delay_ms(100);

PORTB= 0b00001000; //sets LED P3 red LED, HIGH or ON
_delay_ms(100);//Nyala terus selama 1/2 detik
PORTB=0b00000000;//turns off P3
_delay_ms(100);

PORTB= 0b00010000; //sets LED P4 red LED, HIGH or ON
_delay_ms(100);//Nyala terus selama 1/2 detik
PORTB=0b00000000;//turns off P4
_delay_ms(100);


}
}
