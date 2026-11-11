#ifndef HW_SPI_BUS_H
#define HW_SPI_BUS_H

#include "CommBus.h"

class HwSpiBus : public CommBus {
 public:
  bool Send(const MessageType& msg) override;
  bool Receive(MessageType& msg) override;

 private:
};

#endif  // HW_SPI_BUS_H