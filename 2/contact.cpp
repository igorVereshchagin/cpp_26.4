#include "contact.h"

bool Contact::set(const std::string &setName, const std::string &setNumber)
{
  if (!number.set(setNumber))
    return false;
  name = setName;
  return true;
}

void Contact::get(std::string &getName, std::string &getNumber)
{
  getName = name;
  getNumber = number.get();
}
