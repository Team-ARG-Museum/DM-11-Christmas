#ifndef MENU_H
#define MENU_H

#include <Arduino.h>
#include "globals.h"

void demoIntro()
{
  globalCounter++;
  sprites.drawSelfMasked(34, 4, T_arg, 0);
  if (globalCounter > 180)
  {
    for (char t = 0; t < 18; t++) {
      vert[t] = random(MAX_HEIGHT >> 1);
      if (t % 1 == 0) {
        vert[t] <<= 1;
      }
    }
    for (char t = 0; t < 16; t++) {
      rowStart[t] = (random(MAX_HEIGHT >> 1));
      if (t % 1 == 0) {
        rowStart[t] <<= 1;
      }
    }
    gameState = STATE_DEMO;
  }
};



#endif
