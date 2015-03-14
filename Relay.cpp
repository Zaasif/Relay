/*
   Relay.h - Library to control a relay.
   Created by Zain A. Asif, February 26, 2015.
*/
#include "Arduino.h"
#include "Relay.h"

Relay::Relay(int pin)
{
    pinMode(pin, OUTPUT);
   _pin = pin; 
}

void Relay::on()
{
    digitalWrite(_pin, HIGH);    //Turns Relay on
}

void Relay::off()
{
    digitalWrite(_pin, LOW);    //Turns Relay off    
}
