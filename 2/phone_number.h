#pragma once
#include <string>

class PhoneNumber
{
  char digits[12];
public:
  bool setDigits(std::string);
  std::string getDigits();
};