#pragma once
#include <string>
#include <ctime>

class Track
{
  std::string name;
  std::tm dateOfCreation;
  int length;
public:
  const std::string& getName() {return name;};
  const std::tm& getDateOfCreation() {return dateOfCreation;};
  const int getLength() {return length;};
  void setName(const std::string& newName) {name = newName;};
  void setDateOfCreation(const std::tm& date) {dateOfCreation = date;};
  void setLength(int newLength) {length = newLength;};
};