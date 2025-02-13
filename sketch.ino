#include <avr/io.h>
#include <util/delay.h>

void Timer0_init()
{
  //tryb pracy CTC
  TCCR0A |= (1<<WGM01);

  //prescaler 1024 -> (16 000 000 /(1024*1000)) = 15,62 -> 1ms
  TCCR0B |= (1<<CS02);
  TCCR0B |= (1<<CS00);
  
  //1ms
  OCR0A = 15;

  //włączenie przerwań 
  TIMSK0 |= (1<<OCIE0A);
 
  //wlaczenie przerwań 
  sei();
}


volatile int licznik =0;
int main()
{
  //diody
  DDRD |= (1<<PD5);
  
  PORTD &= ~(1<<PD5);
  
  Timer0_init();
  
  while(1)
  {}

  return 0;
}

ISR(TIMER0_COMPA_vect)
{
  licznik++;
  if(licznik==1000)
  {
    PORTD ^= (1<<PD5); // Zmiana stanu diody
    licznik=0;
  }
}
