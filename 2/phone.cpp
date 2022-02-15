#include "phone.h"
#include <string>
#include <iostream>

void Phone::add()
{
  std::string name;
  std::cout << "Input name: ";
  std::cin >> std::ws;
  std::getline(std::cin, name);
  bool goodNumber;
  bool retry = false;
  Contact addContact;
  do
  {
    std::string number;
    std::cout << "Input phone number: ";
    std::cin >> std::ws;
    std::getline(std::cin, number);
    goodNumber = addContact.set(name, number);
    if (!goodNumber)
    {
      char c;
      std::cout << "Invalid number, press 'y' to retry or any key to quit" << std::endl;
      std::cin >> c;
      retry = c == 'y';
    }
  }while(!goodNumber || retry);
  if (goodNumber)
    contacts.push_back(addContact);
}

void Phone::call()
{

}

void Phone::sms()
{

}
