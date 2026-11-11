#include <iostream>

#include "HwSpiBus.h"

bool HwSpiBus::Send(const MessageType& msg) {
  std::cout << "This is SPI send\r\n";
  return true;
}

bool HwSpiBus::Receive(MessageType& msg) {
  std::cout << "This is SPI receive\r\n";
  return true;
}