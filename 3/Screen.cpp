//
// Created by Igor on 21.02.2022.
//

#include "Screen.h"
#include <iostream>

void Screen::display()
{
  int top, left, width, height;
  window->get(left, top, width, height);
  std::cout << top << " " << left << " " << width << " " << height << " " << this->width << " " << this->height << std::endl;
  for (int y = 0; y < this->height; y++)
  {
    if ((y < top) || (y >= (top + height)))
      for (int x = 0; x < this->width; x++)
        std::cout << '0';
    else
    {
      for (int x = 0; x < left; x++)
        std::cout << '0';
      for (int x = 0; x < width; x++)
        std::cout << '1';
      for (int x = 0; x < (this->width - (left + width)); x++)
        std::cout << '0';
    }
    std::cout << std::endl;
  }

}
