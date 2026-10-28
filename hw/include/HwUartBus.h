#ifndef HW_UART_BUS_H
#define HW_UART_BUS_H

#include "CommBus.h"

class HwUartBus : public CommBus {
 public:
  bool Send(const MessageType& msg) override;
  bool Receive(MessageType& msg) override;

 private:
};

#endif  // HW_UART_BUS_H