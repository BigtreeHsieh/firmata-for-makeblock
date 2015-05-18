///@file Makeblock.h head file of Makeblock Library V2.1.0625
///Define the interface of Makeblock Library

//#include <inttypes.h>

#ifndef Mbot_h
#define Mbot_h

#include <Arduino.h>
#include <avr/interrupt.h>
#include <avr/io.h>
#ifndef F_CPU
#define  F_CPU 16000000UL
#endif
#include <util/delay.h>
#include <stdint.h>
#include <stdlib.h>




#define MeBaseBoard     1
#define MakeblockOrion  2
#define mBot            3


#define DEFALUT_LED_NUMBER 2


///@brief Class for MeBoard
class MeBoard
{
public:
    MeBoard(uint8_t boards);
};



#endif