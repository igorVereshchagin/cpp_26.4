//
// Created by Igor on 21.02.2022.
//

#include "Screen.h"
#include <iostream>

void Screen::display()
{
  int top, left, width, height;
  window->get(left, top, width, height);
  for (int y = 0; y < this->height; y++)
  {
    if ((y < top) || (y >= (top + height)))
      for (int x = 0; x < this->width; x++)
        std::cout << '0';
    else
    {
      for (int x = 0; x < left; x++)
        std::cout << '0';
      for (int x = left; x < this->width && x < (left + width); x++)
        std::cout << '1';
      for (int x = left + width; x < this->width; x++)
        std::cout << '0';
    }
    std::cout << std::endl;
  }

}
