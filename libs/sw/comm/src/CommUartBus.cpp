#include <iostream>

#include "CommUartBus.h"

bool CommUartBus::Send(const MessageType& msg) {
  std::cout << "This is Uart send\r\n";
  return true;
}

bool CommUartBus::Receive(MessageType& msg) {
  std::cout << "This is Uart receive\r\n";
  return true;
}