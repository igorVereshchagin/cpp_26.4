#pragma once
#include <string>

class PhoneNumber
{
  char digits[12];
public:
  bool set(const std::string &strDigits);
  std::string get();
};