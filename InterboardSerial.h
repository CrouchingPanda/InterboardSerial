#ifndef INTERBOARD_SERIAL_H
#define INTERBOARD_SERIAL_H

#include <stdint.h>

constexpr uint16_t SERIAL_BAUD_RATE = 9600;

struct __attribute__((packed)) DTO {
  float primaryThermistorTemperatureFahrenheit;
  float secondaryThermistorTemperatureFahrenheit;
};

#endif // !INTERBOARD_SERIAL_H
