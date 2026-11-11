#ifndef COMM_CAN_BUS_H
#define COMM_CAN_BUS_H

#include "CommBus.h"

class CommCanBus : public CommBus {
 public:
  bool Send(const MessageType& msg) override;
  bool Receive(MessageType& msg) override;

 private:
};

#endif  // COMM_CAN_BUS_H