#pragma once
#include <string>


class PhoneNumber
{
  std::string digits;
public:
  bool set(const std::string &strDigits);
  const std::string& get();
};