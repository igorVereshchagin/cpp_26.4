#include <iostream>
#include "phone.h"
#include <string>

int main()
{
  Phone *phone = new Phone();
  std::string command;
  do
  {
    std::cout << "Input command: " << std::endl;
    std::cin >> command;
    if ("exit" == command)
      continue;
    else if ("add" == command)
      phone->add();
    else if ("call" == command)
      phone->call();
    else if ("sms" == command)
      phone->sms();
  }while(command != "exit");
  delete phone;
  return 0;
}
