#include "../Stores/TicketStore.h"
#include <string>

TicketStore::TicketStore()
{
  this->ticket = {};
};

int TicketStore::GetSize()
{
  return this->ticket.size();
}

void TicketStore::Add(Ticket *Ticket)
{
  this->ticket.push_back(Ticket);
}

void TicketStore::Delete(size_t index)
{
  this->ticket.erase(this->ticket.begin() + index);
}

void TicketStore::DeleteAll()
{
  this->ticket.clear();
}

void TicketStore::DeleteById(std::string id)
{
  for (size_t index = 0; index < this->GetSize(); index++)
  {
    if (this->ticket[index]->GetId() == id)
    {
      this->Delete(index);
      break;
    }
  }
}

void TicketStore::DeleteByEventId(std::string eventId)
{
  for (size_t index = 0; index < this->GetSize(); index++)
  {
    if (this->ticket[index]->GetEventId() == eventId)
    {
      this->Delete(index);
      index--;
    }
  }
}

void TicketStore::DeleteByCustomerId(std::string customerId)
{
  for (size_t index = 0; index < this->GetSize(); index++)
  {
    if (this->ticket[index]->GetCustomerId() == customerId)
    {
      this->Delete(index);
      index--;
    }
  }
}

bool TicketStore::ExistsById(std::string id)
{
  for (size_t index = 0; index < this->GetSize(); index++)
  {
    if (this->ticket[index]->GetId() == id)
    {
      return true;
    }
  }

  return false;
}

Ticket *TicketStore::Get(size_t index)
{
  return this->ticket[index];
}

Ticket *TicketStore::FindById(std::string id)
{
  for (size_t index = 0; index < this->GetSize(); index++)
  {
    if (this->ticket[index]->GetId() == id)
    {
      return this->ticket[index];
    }
  }

  return nullptr;
}

std::vector<Ticket *> TicketStore::Filter(TicketStore::TicketStoreFilter filter)
{
  std::vector<Ticket *> found;

  for (size_t index = 0; index < this->GetSize(); index++)
  {
    bool row_match = filter.row.empty() ? true : false;
    bool place_match = filter.place.empty() ? true : false;
    bool event_match = filter.eventId.empty() ? true : false;
    bool customer_match = filter.customerId.empty() ? true : false;

    if (!row_match && this->ticket[index]->GetRow() == filter.row)
    {
      row_match = true;
    }

    if (!place_match && this->ticket[index]->GetPlace() == filter.place)
    {
      place_match = true;
    }

    if (!event_match && this->ticket[index]->GetEventId() == filter.eventId)
    {
      event_match = true;
    }

    if (!customer_match &&
        this->ticket[index]->GetCustomerId() == filter.customerId)
    {
      customer_match = true;
    }

    if (row_match && place_match && event_match && customer_match)
    {
      found.push_back(this->ticket[index]);
    }
  }

  return found;
}
