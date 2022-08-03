#include <HCSR04.h>

HCSR04 hc(5, 6); //initialisation class HCSR04 (5=trig pin , 6=echo pin)

void setup()
{ Serial.begin(9600); }

void loop()
{
    Serial.println( hc.dist() ); //return current distance (cm) in serial
    delay(100);
}
