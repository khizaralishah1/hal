#include <iostream>

#include "CommCanBus.h"

bool CommCanBus::Send(const MessageType& msg) {
  std::cout << "This is Can send\r\n";
  return true;
}

bool CommCanBus::Receive(MessageType& msg) {
  std::cout << "This is Can receive\r\n";
  return true;
}