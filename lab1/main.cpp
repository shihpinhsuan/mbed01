#include "mbed.h"


DigitalOut myLED(LED1);

DigitalOut myLED2(LED3);


void Led(DigitalOut &ledpin, int n);


int main()

{

   myLED = 0;

   myLED2 = 0;

   while (true)

   {

      Led(myLED, 3);

      Led(myLED2, 2);

   }

}