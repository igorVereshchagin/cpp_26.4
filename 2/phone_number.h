#pragma once
#include <string>

#define PHONE_STRING_SIZE     12

class PhoneNumber
{
  char digits[PHONE_STRING_SIZE + 1];
public:
  bool set(const std::string &strDigits);
  std::string get();
};