#include <iostream>

#include "CommBusSim.h"

bool CommBusSim::Send(const MessageType& msg) {
  std::cout << "This is comm bus sim send\r\n";
  return true;
}

bool CommBusSim::Receive(MessageType& msg) {
  std::cout << "This is comm bus sim receive\r\n";
  return true;
}