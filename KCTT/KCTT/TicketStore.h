#pragma once
#include "./Ticket.h"
#include <vector>

class TicketStore {
public:
  static std::vector<Ticket> tickets;
};