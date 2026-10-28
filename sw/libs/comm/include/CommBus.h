#ifndef COMM_BUS_H
#define COMM_BUS_H

#include <cstdint>  // uint

class MessageType {
 public:
 private:
  uint16_t id;
};

class CommBus {
 public:
  virtual ~CommBus() = default;
  virtual bool Send(const MessageType& msg) = 0;
  virtual bool Receive(MessageType& msg) = 0;
};

#endif  // COMM_BUS_H
