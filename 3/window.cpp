#include "window.h"
#include <iostream>

void Window::move(const int &dx, const int &dy)
{
  left += dx;
  if (left < 0)
    left = 0;
  else if ((left + width) > DISPLAY_WIDTH)
    left -= left + width - DISPLAY_WIDTH;
  top += dy;
  if (top < 0)
    top = 0;
  else if ((top + height) > DISPLAY_HEIGHT)
    top -= top + height - DISPLAY_HEIGHT;
  std::cout << "Window position: (" << left << ", " << top << ")" << std::endl;
}

void Window::resize(const int &newWidth, const int &newHeight)
{
  width = newWidth < 0;
  if ((left + width) > DISPLAY_WIDTH)
    width -= left + width - DISPLAY_WIDTH;
  height = newHeight;
  if ((top + height) > DISPLAY_HEIGHT)
    height -= top + height - DISPLAY_WIDTH;
  std::cout << "Window size: (" << width << ", " << height << ")" << std::endl;
}
