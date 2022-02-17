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
  }while(!goodNumber && retry);
  if (goodNumber)
    contacts.push_back(addContact);
}

void Phone::call()
{
  Contact destination;
  if (inputDestination(contacts, destination))
  {
    std::string name;
    std::string number;
    destination.get(name, number);
    std::cout << "Calling " << name << " " << number << std::endl;
  }
  else
  {
    std::cout << "Destination not found" << std::endl;
  }
}

void Phone::sms()
{
  Contact destination;
  if (inputDestination(contacts, destination))
  {
    std::string name;
    std::string number;
    destination.get(name, number);
    std::string smsText;
    std::cout << "Input message:" << std::endl;
    std::cin >> std::ws;
    std::getline(std::cin, smsText);
    std::cout << "Messaging to " << name << " " << number << std::endl << "Text: " << smsText << std::endl;
  }
  else
  {
    std::cout << "Destination not found" << std::endl;
  }

}
