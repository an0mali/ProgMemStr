# ProgMemStr
Simple Arduino library for retreiving and printing Char arrays that were stored using PROGMEM.
PROGMEM stores const into Flash memory instead of RAM, freeing up dynamic memory at a performance cost.

Strings in Arduino consume an insane amount of dynamic memory.
This can be a seriously limiting issue on smaller devices (atmega328) such as the Uno or Nano.

  example usage-
  
        #include "ProgMemStr.h"
        const PROGMEM char exMes[]  = "String to be stored";
        
        setup() {
          ProgMemStr().printCharMes(exMes)
          };
        loop(){};

  This can save a HUGE amount of dynamic memory in String-heavy applications.
  
Is there a better way to call a function from an included header than ProgMemStr().[function], without doing something like

ProgMemStr pms
pms.printCharMes(exMes)

???
The reason is I have other modules that also need to use this fuction, but may not always be in use together. This causes namespace clashes if I try to do the above in multiple sketches. If anyoen has a better implementation please lmk
