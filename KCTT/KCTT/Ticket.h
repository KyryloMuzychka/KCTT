#pragma once

#include <string>
#include "Customer.h"
#include "Event.h"

class Ticket
{
private:
	std::string id;
	std::string Event;
	std::string Customer;
public:
	Ticket(std::string row, std::string place, bool isBooked);
	void getCustomer();
	void setCustomer();
	void getEvent();
	void setEvent();
	void getId();
};