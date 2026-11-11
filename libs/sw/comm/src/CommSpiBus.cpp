#include <iostream>

#include "CommSpiBus.h"

bool CommSpiBus::Send(const MessageType& msg) {
  std::cout << "This is SPI send\r\n";
  return true;
}

bool CommSpiBus::Receive(MessageType& msg) {
  std::cout << "This is SPI receive\r\n";
  return true;
}