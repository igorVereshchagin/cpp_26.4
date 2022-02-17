#pragma once
#include "contact.h"
#include <vector>
#include <iostream>

class Phone
{
  std::vector<Contact> contacts;
public:
  void add();
  void call();
  void sms();
  static bool inputDestination(const std::vector<Contact> &contacts, Contact &dest)
  {
    std::cout << "Input destination:" << std::endl;
    std::string strDest;
    std::cin >> std::ws;
    std::getline(std::cin, strDest);
    bool foundDestination = true;
    if (!dest.set("", strDest))
    {
      foundDestination = false;
      for (std::vector<Contact>::const_iterator it = contacts.cbegin(); it != contacts.cend(); it++)
      {
        if (it->compareName(strDest))
        {
          dest = *it;
          foundDestination = true;
          break;
        }
      }
    }
    return foundDestination;
  }
};