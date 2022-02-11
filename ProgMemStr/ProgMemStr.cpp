#include "ProgMemStr.h"
#include <Arduino.h>

ProgMemStr::ProgMemStr(){
  };
  
void ProgMemStr::printCharMes(const char ptr[],const int maxBuffer=256) {
          {
            char tbuffer[maxBuffer];
            strcpy_P(tbuffer, ptr);
            String printMes = tbuffer;
            Serial.println(printMes);
          };
};
