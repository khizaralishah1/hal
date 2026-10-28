#include <iostream>

#include "HwUartBus.h"

bool HwUartBus::Send(const MessageType& msg) {
  std::cout << "This is Uart send\r\n";
  return true;
}

bool HwUartBus::Receive(MessageType& msg) {
  std::cout << "This is Uart receive\r\n";
  return true;
}