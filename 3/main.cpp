#include <iostream>
//#include "window.h"
#include "Screen.h"
#include <string>

int main()
{
  Screen *screen = new Screen();
  screen->setWindow(new Window());
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
      screen->moveWindow(dx, dy);
    }
    else if ("resize" == command)
    {
      std::cout << "Input new size (width, height): " << std::endl;
      int w, h;
      std::cin >> w >> h;
      screen->resizeWindow(w, h);
    }
    else if (command == "display")
      screen->display();
    else
      std::cout << "Invalid command" << std::endl;
  }while(command != "close");

  screen->deleteWindow();
  delete screen;
  return 0;
}
