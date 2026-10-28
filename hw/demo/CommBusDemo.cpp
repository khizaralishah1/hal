#include <iostream>
#include <string>

#include "HwCanBus.h"
#include "HwSpiBus.h"
#include "HwUartBus.h"

class Chip {
 public:
  Chip(std::string name_, CommBus& comm_bus_) : name(name_), comm_bus(comm_bus_) {}

  void Talk() {
    std::cout << "[Chip::Talk]: " << name << "...\r\n";
    MessageType msg;
    comm_bus.Send(msg);
    comm_bus.Receive(msg);
  }

 private:
  CommBus& comm_bus;
  std::string name;
};

int main() {
  HwCanBus hw_can_bus;
  HwSpiBus hw_spi_bus;
  HwUartBus hw_uart_bus;

  Chip chip_a("A", hw_can_bus);
  Chip chip_b("B", hw_spi_bus);
  Chip chip_c("C", hw_uart_bus);

  chip_a.Talk();
  chip_b.Talk();
  chip_c.Talk();

  return EXIT_SUCCESS;
}