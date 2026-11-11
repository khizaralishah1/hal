#ifndef CLOCK_SIM_H
#define CLOCK_SIM_H

#include "Clock.h"

class ClockSim : public Clock {
 public:
  uint32_t GetCurrentTimeMs() override;

 private:
};

#endif  // CLOCK_SIM_H