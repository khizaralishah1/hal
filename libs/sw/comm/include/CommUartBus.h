#ifndef COMM_UART_BUS_H
#define COMM_UART_BUS_H

#include "CommBus.h"

class CommUartBus : public CommBus {
 public:
  bool Send(const MessageType& msg) override;
  bool Receive(MessageType& msg) override;

 private:
};

#endif  // COMM_UART_BUS_H