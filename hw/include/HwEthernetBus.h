#ifndef HW_ETHERNET_BUS_H
#define HW_ETHERNET_BUS_H

#include "CommBus.h"

class HwEthernetBus : public CommBus {
 public:
  bool Send(const MessageType& msg) override;
  bool Receive(MessageType& msg) override;

 private:
};

#endif  // HW_ETHERNET_BUS_H