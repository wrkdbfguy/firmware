#pragma once

#include "Arduino.h" 
#define WIRING 1

#define arraySize(x) (sizeof(x)/sizeof(x[0]))

#define PRINTF_PROGMEM "%S"             // on arduino, use the special format symbol

typedef uint16_t tcduration_t;

typedef uint32_t ticks_millis_t;
typedef uint32_t ticks_micros_t;
typedef uint16_t ticks_seconds_t;
typedef uint8_t ticks_seconds_tiny_t;
