# ProgMemStr
Simple library for retreiving and printing Char arrays that were stored using PROGMEM


  example usage-
  
        #include "ProgMemStr.h"
        const PROGMEM char exMes[]  = "String to be stored";
        ProgMemStr sprog;
        setup() {
          sprog.printCharMes(exMes)
          };
        loop(){};

  This can save a HUGE amount of dynamic memory in String-heavy applications.
  
