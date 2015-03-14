/*
   Relay.h - Library to control a relay.
   Created by Zain A. Asif, February 26, 2015.
*/

#ifndef Relay_h
#define Relay_h

#include "Arduino.h"

class Relay
{
  public:
    Relay (int pin);
    void on();
    void off();
  private:
    int _pin;
};

#endif
