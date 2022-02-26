#include "phone_number.h"

#define PHONE_STRING_SIZE     12

const std::string& PhoneNumber::get()
{
  return digits;
}

bool PhoneNumber::set(const std::string &strDigits)
{
  if (strDigits.size() != PHONE_STRING_SIZE || strDigits[0] != '+' || strDigits[1] != '7')
    return false;
  for (int i = 2; i < PHONE_STRING_SIZE; i++)
    if (strDigits[i] < '0' || strDigits[i] > '9')
      return false;
  digits = strDigits;
  return true;
}

