#include "./User.h"
#include "../Elements/Ticket.h"
#include <iostream>
#include <ostream>
#include <string>

int uid = 0;

User::User(std::string name, std::string login, std::string password)
{
  uid++;
  this->id = "u" + std::to_string(uid);
  this->name = name;
  this->login = login;
  this->password = password;
  this->role = "Default user";
}

std::string User::GetId()
{
  return this->id;
}

std::string User::GetName()
{
  return this->name;
}

std::string User::GetRole()
{
  return this->role;
}

std::string User::GetLogin()
{
  return this->login;
}

void User::SetName(std::string newName)
{
  this->name = newName;
}

void User::SetLogin(std::string newLogin)
{
  this->login = newLogin;
}

void User::SetPassword(std::string newPassword)
{
  this->password = newPassword;
}

bool User::ComparePassword(std::string password)
{
  return this->password == password;
}

void User::PrintMenu(char *action)
{
  std::cout << "Menu not found." << std::endl;
  std::cout << "Your choice: ";
  std::cin >> *action;
}

void User::ActivateMenu(char *action)
{
  std::cout << "Action not found." << std::endl;
  std::cout << "Enter to continue..." << std::endl;
  std::cin.ignore(10, '\n');
  std::cin.get();
}
