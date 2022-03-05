#include "window.h"
#include <iostream>

void Window::move(const int &dx, const int &dy, const int &max_x, const int &max_y)
{
  left += dx;
  if (left < 0)
    left = 0;
  else if (left >= max_x)
    left = max_x - 1;
  top += dy;
  if (top < 0)
    top = 0;
  else if (top >= max_y)
    top = max_y - 1;
  std::cout << "Window position: (" << left << ", " << top << ")" << std::endl;
}

void Window::resize(const int &newWidth, const int &newHeight)
{
  width = newWidth;
  if (width < 1)
    width = 1;
  height = newHeight;
  if (height < 1)
    height = 1;
  std::cout << "Window size: (" << width << ", " << height << ")" << std::endl;
}
