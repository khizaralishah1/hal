#ifndef HW_CAN_BUS_H
#define HW_CAN_BUS_H

#include "CommBus.h"

class HwCanBus : public CommBus {
 public:
  bool Send(const MessageType& msg) override;
  bool Receive(MessageType& msg) override;

 private:
};

#endif  // HW_CAN_BUS_H