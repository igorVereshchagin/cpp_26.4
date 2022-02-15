#pragma once
#include "contacts.h"
#include <vector>

class Phone
{
  std::vector<Contacts> contacts;
public:
  void add();
  void call();
  void sms();
};