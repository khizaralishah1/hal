#include <iostream>

#include "HwCanBus.h"

bool HwCanBus::Send(const MessageType& msg) {
  std::cout << "This is Can send\r\n";
  return true;
}

bool HwCanBus::Receive(MessageType& msg) {
  std::cout << "This is Can receive\r\n";
  return true;
}