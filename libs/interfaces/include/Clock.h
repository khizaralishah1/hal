#ifndef CLOCK_H
#define CLOCK_H

#include <stdint.h>

class Clock {
 public:
  virtual uint32_t GetCurrentTimeMs() = 0;

 private:
};

#endif  // CLOCK_H