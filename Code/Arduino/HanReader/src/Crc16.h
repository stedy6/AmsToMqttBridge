#ifndef _CRC16_h
#define _CRC16_h

#define ARDUINO_H
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include "Arduino.h"

class Crc16Class
{
  public:
    Crc16Class();
    unsigned short ComputeChecksum(byte *data, int start, int length);
  protected:
  private:
    const unsigned short polynomial = 0x8408;
    unsigned short table[256];
};

#endif


