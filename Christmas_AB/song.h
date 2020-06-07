#ifndef SONG_H
#define SONG_H

#define Song const uint8_t PROGMEM

Song music[] = {                // total song in bytes = 432 + 45
  //                            // setup bytes 45
  0x15,                         // Number of tracks
  0x00, 0x00,                   // Address of track 0
  0x06, 0x00,                   // Address of track 1
  0x0A, 0x00,                   // Address of track 2
  0x0E, 0x00,                   // Address of track 3
  0x12, 0x00,                   // Address of track 4
  0x25, 0x00,                   // Address of track 5
  0x41, 0x00,                   // Address of track 6
  0x78, 0x00,                   // Address of track 7
  0xC9, 0x00,                   // Address of track 8
  0x00, 0x01,                   // Address of track 9
  0x31, 0x01,                   // Address of track 10
  0x3A, 0x01,                   // Address of track 11
  0x42, 0x01,                   // Address of track 12
  0x4C, 0x01,                   // Address of track 13
  0x55, 0x01,                   // Address of track 14
  0x6C, 0x01,                   // Address of track 15
  0x75, 0x01,                   // Address of track 16
  0x7E, 0x01,                   // Address of track 17
  0x89, 0x01,                   // Address of track 18
  0x9D, 0x01,                   // Address of track 19
  0xB0, 0x01,                   // Address of track 20

  0x00,                         // Channel 0 entry track (PULSE)
  0x01,                         // Channel 1 entry track (SQUARE)
  0x02,                         // Channel 2 entry track (TRIANGLE)
  0x03,                         // Channel 3 entry track (NOISE)

  //"Track 0"                   // ticks = 4096 / bytes = 6
  0x9D, 50,                     // SET song tempo: value = 50
  0xFD, 3, 14,                  // REPEAT: count = 4 / track = 14  (4 * 1024 ticks)
  0x9F,                         // FX: STOP CURRENT CHANNEL

  //"Track 1"                   // ticks = 4096 / bytes = 4
  0xFD, 3, 4,                   // REPEAT: count = 4 / track = 4  (4 * 1024 ticks)
  0x9F,                         // FX: STOP CURRENT CHANNEL

  //"Track 2"                   // ticks = 4096 / bytes = 4
  0xFD, 255, 10,                // REPEAT: count = 256 / track = 10  (256 * 16 ticks)
  0x9F,                         // FX: STOP CURRENT CHANNEL

  //"Track 3"                   // ticks = 4096 / bytes = 4
  0xFD, 255, 11,                // REPEAT: count = 256 / track = 11  (256 * 16 ticks)
  0x9F,                         // FX: STOP CURRENT CHANNEL

  //"Track 4"                   // ticks = 1024 / bytes = 25
  0xFD, 1, 5,                   // REPEAT: count = 2 / track = 5  (2 * 64 ticks)
  0xFC, 6,                      // GOTO: track = 6  (1 * 128 ticks)
  0xFC, 7,                      // GOTO: track = 7  (1 * 128 ticks)
  0xFC, 8,                      // GOTO: track = 8  (1 * 128 ticks)
  0xFD, 1, 5,                   // REPEAT: count = 2 / track = 5  (2 * 64 ticks)
  0xFC, 6,                      // GOTO: track = 6  (1 * 128 ticks)
  0xFC, 7,                      // GOTO: track = 7  (1 * 128 ticks)
  0xFC, 9,                      // GOTO: track = 9  (1 * 128 ticks)
  0xFE,                         // RETURN

  //"Track 5"                   // ticks = 64 / bytes = 28
  0x00 + 50,                    // NOTE ON: note = C#7
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x9F + 2,                     // DELAY: ticks = 2
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 11,                    // DELAY: ticks = 3 + 8

  0x00 + 50,                    // NOTE ON: note = C#7
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x9F + 2,                     // DELAY: ticks = 2
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 9,                     // DELAY: ticks = 1 + 8

  0x00 + 50,                    // NOTE ON: note = C#7
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x9F + 20,                    // DELAY: ticks = 20
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 11,                    // DELAY: ticks = 3 + 8

  0xFE,                         // RETURN

  //"Track 6"                   // ticks = 128 / bytes = 56
  0x00 + 50,                    // NOTE ON: note = C#7
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x9F + 10,                    // DELAY: ticks = 10
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 3,                     // DELAY: ticks = 1

  0x00 + 53,                    // NOTE ON: note = E7
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x9F + 2,                     // DELAY: ticks = 2
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 11,                    // DELAY: ticks = 3 + 8

  0x00 + 46,                    // NOTE ON: note = A6
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x9F + 20,                    // DELAY: ticks = 20
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 3,                     // DELAY: ticks = 1

  0x00 + 48,                    // NOTE ON: note = B6
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x9F + 2,                     // DELAY: ticks = 2
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 3,                     // DELAY: ticks = 3

  0x00 + 50,                    // NOTE ON: note = C#7
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x9F + 32,                    // DELAY: ticks = 32
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 3,                     // DELAY: ticks = 3

  0x00 + 50,                    // NOTE ON: note = C#7
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x9F + 2,                     // DELAY: ticks = 2
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 19,                    // DELAY: ticks = 3 + 16

  0xFE,                         // RETURN

  //"Track 7"                   // ticks = 128 / bytes = 80
  0x00 + 51,                    // NOTE ON: note = D7
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x9F + 2,                     // DELAY: ticks = 2
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 11,                    // DELAY: ticks = 3 + 8

  0x00 + 51,                    // NOTE ON: note = D7
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x9F + 2,                     // DELAY: ticks = 2
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 11,                    // DELAY: ticks = 3 + 8

  0x00 + 51,                    // NOTE ON: note = D7
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x9F + 16,                    // DELAY: ticks = 16
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 5,                     // DELAY: ticks = 1 + 4

  0x00 + 51,                    // NOTE ON: note = D7
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 5,                     // DELAY: ticks = 1 + 4

  0x00 + 51,                    // NOTE ON: note = D7
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x9F + 2,                     // DELAY: ticks = 2
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 11,                    // DELAY: ticks = 3 + 8

  0x00 + 50,                    // NOTE ON: note = C#7
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x9F + 2,                     // DELAY: ticks = 2
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 11,                    // DELAY: ticks = 3 + 8

  0x00 + 50,                    // NOTE ON: note = C#7
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x9F + 8,                     // DELAY: ticks = 8
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 5,                     // DELAY: ticks = 1 + 4

  0x00 + 50,                    // NOTE ON: note = C#7
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x9F + 2,                     // DELAY: ticks = 2
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 3,                     // DELAY: ticks = 3

  0x00 + 50,                    // NOTE ON: note = C#7
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x9F + 2,                     // DELAY: ticks = 2
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 3,                     // DELAY: ticks = 3

  0xFE,                         // RETURN

  //"Track 8"                   // ticks = 128 / bytes = 55
  0x00 + 50,                    // NOTE ON: note = C#7
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x9F + 4,                     // DELAY: ticks = 4
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 9,                     // DELAY: ticks = 1 + 8

  0x00 + 48,                    // NOTE ON: note = B6
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x9F + 2,                     // DELAY: ticks = 2
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 11,                    // DELAY: ticks = 3 + 8

  0x00 + 48,                    // NOTE ON: note = B6
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x9F + 4,                     // DELAY: ticks = 4
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 9,                     // DELAY: ticks = 1 + 8

  0x00 + 50,                    // NOTE ON: note = C#7
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x9F + 4,                     // DELAY: ticks = 4
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 9,                     // DELAY: ticks = 1 + 8

  0x00 + 48,                    // NOTE ON: note = B6
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x9F + 28,                    // DELAY: ticks = 28
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 1,                     // DELAY: ticks = 1

  0x00 + 53,                    // NOTE ON: note = E7
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x9F + 24,                    // DELAY: ticks = 24
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 5,                     // DELAY: ticks = 5

  0xFE,                         // RETURN


  //"Track 9"                   // ticks = 96 / bytes = 46
  0x00 + 53,                    // NOTE ON: note = E7
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x9F + 4,                     // DELAY: ticks = 4
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 9,                     // DELAY: ticks = 1 + 8

  0x00 + 53,                    // NOTE ON: note = E7
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x9F + 4,                     // DELAY: ticks = 4
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 9,                     // DELAY: ticks = 1 + 8

  0x00 + 51,                    // NOTE ON: note = D7
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x9F + 2,                     // DELAY: ticks = 2
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 11,                    // DELAY: ticks = 3 + 8

  0x00 + 48,                    // NOTE ON: note = B6
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x9F + 2,                     // DELAY: ticks = 2
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 11,                    // DELAY: ticks = 3 + 8

  0x00 + 46,                    // NOTE ON: note = A6
  0x40, 48,                     // FX: SET VOLUME: volume = 48
  0x9F + 22,                    // DELAY: ticks = 22
  0x41, -16,                    // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 3,                     // DELAY: ticks = 3
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 7,                     // DELAY: ticks = 3 + 4
  0x40, 0,                      // FX: SET VOLUME: volume = 0
  0x9F + 32,                    // DELAY: ticks = 32
  0xFE,                         // RETURN


  //"Track 10"                  // ticks = 16 / bytes = 9
  0x00 + 61,                    // NOTE ON: note = C#7
  0x40, 32,                     // FX: SET VOLUME: volume = 32
  0x41, -8,                     // FX: VOLUME SLIDE ON: steps = -8
  0x9F + 4,                     // DELAY: ticks = 4
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 12,                    // DELAY: ticks = 4 + 8
  0xFE,                         // RETURN

  //"Track 11"                  // ticks = 16 / bytes = 8
  0x40, 16,                     // FX: SET VOLUME: volume = 16
  0x41, -8,                     // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 2,                     // DELAY: ticks = 2
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 14,                    // DELAY: ticks = 14
  0xFE,                         // RETURN

  //"Track 12"                  // ticks = 32 / bytes = 10
  0x00 + 10,                    // NOTE ON: note = A4
  0x40, 32,                     // FX: SET VOLUME: volume = 32
  0x9F + 16,                    // DELAY: ticks = 16
  0x41, -4,                     // FX: VOLUME SLIDE ON: steps = -4
  0x9F + 8,                     // DELAY: ticks = 8
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 8,                     // DELAY: ticks = 8
  0xFE,                         // RETURN

  //"Track 13"                  // ticks = 16 / bytes = 9
  0x00 + 10,                    // NOTE ON: note = A4
  0x40, 32,                     // FX: SET VOLUME: volume = 32
  0x41, -4,                     // FX: VOLUME SLIDE ON: steps = -4
  0x9F + 8,                     // DELAY: ticks = 8
  0x43,                         // FX: VOLUME SLIDE OFF
  0x9F + 8,                     // DELAY: ticks = 8
  0xFE,                         // RETURN

  //"Track 14"                  // ticks = 1024 / bytes = 23
  0xFD, 1, 15,                  // REPEAT: count = 2 / track = 15  (2 * 64 ticks)
  0xFC, 16,                     // GOTO: track = 16  (64 ticks)
  0xFC, 15,                     // GOTO: track = 15  (64 ticks)
  0xFC, 17,                     // GOTO: track = 17  (128 ticks)
  0xFC, 18,                     // GOTO: track = 18  (128 ticks)

  0xFD, 1, 15,                  // REPEAT: count = 2 / track = 15  (2 * 64 ticks)
  0xFC, 16,                     // GOTO: track = 16  (64 ticks)
  0xFC, 15,                     // GOTO: track = 15  (64 ticks)
  0xFC, 17,                     // GOTO: track = 17  (128 ticks)
  0xFC, 19,                     // GOTO: track = 19  (128 ticks)

  0xFE,                         // RETURN

  //"Track 15"                  // ticks = 64 / bytes = 9
  0xFC, 12,                     // GOTO: track = 12  (32 ticks)
  0x4C, -5,                     // FX: SET TRANSPOSITION: notes = -5
  0xFC, 12,                     // GOTO: track = 12  (32 ticks)
  0x4C, 0,                      // FX: SET TRANSPOSITION: notes = 0
  0xFE,                         // RETURN

  //"Track 16"                  // ticks = 64 / bytes = 9
  0xFC, 12,                     // GOTO: track = 12  (32 ticks)
  0x4C, -7,                     // FX: SET TRANSPOSITION: notes = -7
  0xFC, 12,                     // GOTO: track = 12  (32 ticks)
  0x4C, 0,                      // FX: SET TRANSPOSITION: notes = 0
  0xFE,                         // RETURN

  //"Track 17"                  // ticks = 128 / bytes = 11
  0x4C, 5,                      // FX: SET TRANSPOSITION: notes = 5
  0xFD, 1, 12,                  // REPEAT: count = 2 / track = 12  (2 * 32 ticks)
  0x4C, 0,                      // FX: SET TRANSPOSITION: notes = 0
  0xFD, 1, 12,                  // REPEAT: count = 2 / track = 12  (2 * 32 ticks)
  0xFE,                         // RETURN

  //"Track 18"                  // ticks = 128 / bytes = 20
  0x4C, 2,                      // FX: SET TRANSPOSITION: notes = 2
  0xFD, 1, 12,                  // REPEAT: count = 2 / track = 12  (2 * 32 ticks)
  0x4C, -5,                     // FX: SET TRANSPOSITION: notes = -5
  0xFC, 12,                     // GOTO: track = 12  (32 ticks)
  0x4C, -3,                     // FX: SET TRANSPOSITION: notes = -3
  0xFC, 13,                     // GOTO: track = 13  (16 ticks)
  0x4C, -1,                     // FX: SET TRANSPOSITION: notes = -1
  0xFC, 13,                     // GOTO: track = 13  (16 ticks)
  0x4C, 0,                      // FX: SET TRANSPOSITION: notes = 0
  0xFE,                         // RETURN

  //"Track 19"                  // ticks = 128 / bytes = 19
  0x4C, -5,                     // FX: SET TRANSPOSITION: notes = -5
  0xFD, 1, 13,                  // REPEAT: count = 2 / track = 13  (2 * 16 ticks)
  0x4C, -3,                     // FX: SET TRANSPOSITION: notes = -3
  0xFC, 13,                     // GOTO: track = 13  (16 ticks)
  0x4C, -1,                     // FX: SET TRANSPOSITION: notes = -1
  0xFC, 13,                     // GOTO: track = 13  (16 ticks)
  0x4C, 0,                      // FX: SET TRANSPOSITION: notes = 0
  0xFC, 12,                     // GOTO: track = 12  (32 ticks)
  0x9F + 32,                    // DELAY: ticks = 32
  0xFE,                         // RETURN

  //"Track 20"                  // ticks = 128 / bytes = 19
  0x40, 0,                      // FX: SET VOLUME: volume = 0
  0xFE,                         // RETURN

};

#endif
