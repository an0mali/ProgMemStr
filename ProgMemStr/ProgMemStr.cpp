#include "ProgMemStr.h"
#include <Arduino.h>

ProgMemStr::ProgMemStr(){
  };
  
void ProgMemStr::printCharMes(const char ptr[],bool endLine=true, const int maxBuffer=256) {
          {
            char tbuffer[maxBuffer];
            strcpy_P(tbuffer, ptr);
            String printMes = tbuffer;
            if (endLine) {
              Serial.println(printMes);
            } else {
              Serial.print(printMes);
            };
          };
};
