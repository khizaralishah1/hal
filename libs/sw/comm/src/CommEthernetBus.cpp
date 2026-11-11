#include <iostream>

#include "CommEthernetBus.h"

bool CommEthernetBus::Send(const MessageType& msg) {
  std::cout << "This is ethernet send\r\n";
  return true;
}

bool CommEthernetBus::Receive(MessageType& msg) {
  std::cout << "This is ethernet receive\r\n";
  return true;
}