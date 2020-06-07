/*
  DEMO: Christmas

  MADE by TEAM a.r.g. : http://www.team-arg.org/demos.html

  2016 - JO3RI

  using snow generator by Spinal: http://community.arduboy.com/t/some-snow-for-you-all/2606

  License: MIT : https://opensource.org/licenses/MIT

*/

//determine the demo
#define DEMO_ID 11

#include "globals.h"
#include "menu.h"
#include "demo.h"
#include "song.h"


typedef void (*FunctionPointer) ();

const FunctionPointer PROGMEM mainGameLoop[] = {
  demoIntro,
  demoSetup,
  demoPlay,
};


void setup() {
  arduboy.begin();
  arduboy.setFrameRate(60);                                 // set the frame rate of the game at 60 fps
  arduboy.initRandomSeed();
  arduboy.audio.on();
  ATM.play(music);
}


void loop() {
  if (!(arduboy.nextFrame())) return;
  arduboy.pollButtons();
  arduboy.clear();
  ((FunctionPointer) pgm_read_word (&mainGameLoop[gameState]))();
  if (arduboy.justPressed(B_BUTTON)) ATM.play(music);
  if (arduboy.justPressed(A_BUTTON)) ATM.stop();
  arduboy.display();
}

