#include "ProgMemStr.h"
#include <Arduino.h>

ProgMemStr::ProgMemStr(){
  };
  
void ProgMemStr::printCharMes(const char ptr[],int maxBuffer=256) {
          {
            const int bsize = maxBuffer;
            char tbuffer[bsize];
            strcpy_P(tbuffer, ptr);
            String printMes = tbuffer;
            Serial.println(printMes);
          };
};
