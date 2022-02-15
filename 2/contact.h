#pragma once
#include "phone_number.h"
#include <string>

class Contact
{
  PhoneNumber number;
  std::string name;
public:
  bool set(const std::string &setName, const std::string &setNumber);
  void get(std::string &getName, std::string &getNumber);
};