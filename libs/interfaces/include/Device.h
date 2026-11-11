#ifndef CHIP_H
#define CHIP_H

#include <string>

#include "CommBus.h"

class Device {
 public:
  Device(uint32_t id_, std::string name_, CommBus& comm_bus_)
      : id(id_), name(name_), comm_bus(comm_bus_) {}

  void Talk() {
    MessageType comm_msg;
    comm_bus.Send(comm_msg);
    comm_bus.Receive(comm_msg);
  }

  uint32_t Id() {
    return id;
  }

 private:
  CommBus& comm_bus;  // can, spi, ethernet, uart
  std::string name;
  uint32_t id;
};

#endif  // CHIP_H