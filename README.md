# ProgMemStr
Simple Arduino library for retreiving and printing Char arrays that were stored using PROGMEM.
PROGMEM store const into Flash memory instead of RAM, freeing up dynamic memory at a performance cost.

Strings in Arduino consume an insane amount of dynamic memory.
This can be a seriously limiting issue on smaller devices (atmega328) such as the Uno or Nano.

  example usage-
  
        #include "ProgMemStr.h"
        const PROGMEM char exMes[]  = "String to be stored";
        ProgMemStr sprog;
        setup() {
          sprog.printCharMes(exMes)
          };
        loop(){};

  This can save a HUGE amount of dynamic memory in String-heavy applications.
  
