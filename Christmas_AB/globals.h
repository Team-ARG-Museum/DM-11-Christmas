#ifndef GLOBALS_H
#define GLOBALS_H

#include <Arduino.h>
#include <Arduboy2.h>
#include <ATMlib.h>
#include "bitmaps.h"
#include "font.h"

//define menu states (on main menu)
#define STATE_INTRO               0
#define STATE_SETUP               1
#define STATE_DEMO                2

#define DEMO_FASE_TO_START_WITH   0
#define INTRO_FASE_TO_START_WITH  0

#define MAX_HEIGHT                56

Arduboy2Base arduboy;
Sprites sprites;
ATMsynth ATM;

byte gameState = STATE_INTRO;   // start the game with the TEAM a.r.g. logo
byte globalCounter = 0;
long int frameNumber = 0;
unsigned char rowStart[16];
unsigned char snowRow[MAX_HEIGHT];

#endif
