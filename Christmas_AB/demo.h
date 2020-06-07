#ifndef DEMO_H
#define DEMO_H

#include <Arduino.h>
#include "globals.h"


const unsigned char PROGMEM demoText[] = "Merry Christmas to all Arduboy fans out there from TEAM a.r.g.              Special hi to @Gaveno112 STG @huard_olivier @SiegfriedCroes @castpixel and also @bateskecom.    See you all in 2017 !         ";
int scrolling = 128;
int timeDemo;

void updateSnow() {
  // Main snow-feild code
  unsigned char ctr = 0;
  unsigned char stp = 1;
  for (unsigned char loop = 17; loop > stp + 7; loop -= stp) { // 17
    countdn[loop]--;
    if (countdn[loop] == 0) {
      countdn[loop] = spead[loop];
      //remove old flake image
      int y = vert[loop];
      int a = 0;
      for (a = 0; a < 4; a++) {
        snowRow[y] &= (255 - tempimg[loop * 4 + a]);
        y++; if (y >= MAX_HEIGHT) {
          y = 0; // was 176
        }
      }//a

      // rem calculate new vertical position
      // rem (vert) & frame number (offset)
      vert[loop]++;
      if (vert[loop] >= MAX_HEIGHT) {
        vert[loop] = 0;
      }
      offset[loop]--;
      if (offset[loop] < 0) {
        offset[loop] = mx[loop];
      }
      // rem get next frame of animation
      y = pgm_read_byte(&frames[fptrs[loop] + offset[loop]]);
      for (a = 0; a < 4; a++) {
        tempimg[loop * 4 + a] = pgm_read_byte(&flkimage[y + a]);
      }
      // rem add new frame at new position
      y = vert[loop];
      for (a = 0; a < 4; a++) {
        snowRow[y] |= tempimg[loop * 4 + a];
        y++; if (y >= MAX_HEIGHT) {
          y = 0;
        }
      }


    } // countdn
  }// loop
  for (char x = 0; x < 16; x++) {
    for (char y = 0; y < MAX_HEIGHT; y++) {
      char p = rowStart[x] + y;
      if (p >= MAX_HEIGHT) {
        p -= MAX_HEIGHT;
      }
      for (char t = 0; t < 8; t++) {
        arduboy.drawPixel(t + (x * 8), y, snowRow[p] & (1 << t));
      }
    }
  }
}

void drawScrollingText()
{
  if (arduboy.everyXFrames(1)) scrolling -=2;
  for (int textX = 0; textX < sizeof(demoText) - 1; textX++)
  {
    if ((scrolling + 13 * textX < 128) && (scrolling + 13 * textX > -32))
    {
      sprites.drawSelfMasked(scrolling + 13 * textX, 2, font_bitmaps, pgm_read_byte(&demoText[textX]) - 32);
    }
  }
}

void showLandscape()
{
  for (byte i=0; i<4; i++) sprites.drawSelfMasked(i*32, 0, landscape, i);
}


void demoSetup()
{
  timeDemo = sizeof(demoText);
}

void demoPlay()
{
  frameNumber++;
  updateSnow();
  drawScrollingText();
  showLandscape();
}




#endif
