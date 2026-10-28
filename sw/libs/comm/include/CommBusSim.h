#ifndef COMM_BUS_SIM_H
#define COMM_BUS_SIM_H

#include "CommBus.h"

class CommBusSim : public CommBus {
 public:
  bool Send(const MessageType& msg) override;
  bool Receive(MessageType& msg) override;

 private:
};

#endif  // COMM_BUS_SIM_H