#include <iostream>
#include "window.h"
#include <string>

int main()
{
  Window *window = new Window();
  std::string command;
  do
  {
    std::cout << "Input command: " << std::endl;
    std::cin >> command;
    if ("close" == command)
      continue;
    else if ("move" == command)
    {
      std::cout << "Input offset (dx, dy): " << std::endl;
      int dx, dy;
      std::cin >> dx >> dy;
      window->move(dx, dy);
    }
    else if ("resize" == command)
    {
      std::cout << "Input new size (width, height): " << std::endl;
      int w, h;
      std::cin >> w >> h;
      window->resize(w, h);
    }
    else if (command == "display")
      window->display();
    else
      std::cout << "Invalid command" << std::endl;
  }while(command != "close");

  delete window;
  return 0;
}
