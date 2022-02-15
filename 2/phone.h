#pragma once
#include "contact.h"
#include <vector>

class Phone
{
  std::vector<Contact> contacts;
public:
  void add();
  void call();
  void sms();
};