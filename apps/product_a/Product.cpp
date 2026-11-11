#include <iostream>
#include <string>

#include "HwCanBus.h"
#include "HwSpiBus.h"
#include "HwUartBus.h"
#include "HwEthernetBus.h"

#include "Device.h"

int main() {
  HwCanBus hw_can_bus;
  HwSpiBus hw_spi_bus;
  HwUartBus hw_uart_bus;
  HwUartBus hw_uart_bus_log;
  HwEthernetBus hw_ethernet_bus;

  Device device_a(1, "A", hw_can_bus);  // let device id 0 be the master
  Device device_b(2, "B", hw_spi_bus);
  Device device_c(3, "C", hw_uart_bus);
  Device device_d(4, "D", hw_ethernet_bus);

  device_a.Talk();
  device_b.Talk();
  device_c.Talk();
  device_d.Talk();

  hw_uart_bus_log.Send();

  return EXIT_SUCCESS;
}