#ifndef COMM_ETHERNET_BUS_H
#define COMM_ETHERNET_BUS_H

#include "CommBus.h"

class CommEthernetBus : public CommBus {
 public:
  bool Send(const MessageType& msg) override;
  bool Receive(MessageType& msg) override;

 private:
};

#endif  // COMM_ETHERNET_BUS_H