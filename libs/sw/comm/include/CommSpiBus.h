#ifndef COMM_SPI_BUS_H
#define COMM_SPI_BUS_H

#include "CommBus.h"

class CommSpiBus : public CommBus {
 public:
  bool Send(const MessageType& msg) override;
  bool Receive(MessageType& msg) override;

 private:
};

#endif  // COMM_SPI_BUS_H