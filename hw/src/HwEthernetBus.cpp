#include <iostream>

#include "HwEthernetBus.h"

bool HwEthernetBus::Send(const MessageType& msg) {
  std::cout << "This is ethernet send\r\n";
  return true;
}

bool HwEthernetBus::Receive(MessageType& msg) {
  std::cout << "This is ethernet receive\r\n";
  return true;
}