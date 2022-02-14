#include <iostream>
#include "player.h"
#include <string>

int main()
{
  Player *player = new Player();
  player->init();
  std::string command;
  do
  {
    std::cout << "Input command: " << std::endl;
    std::cin >> command;
    if (command == "exit")
      continue;
    else if (command == "play")
      player->play();
    else if (command == "stop")
      player->stop();
    else if (command == "pause")
      player->pause();
    else if (command == "next")
      player->next();
    else
      std::cout << "Invalid command" << std::endl;
  }while(command != "exit");
  delete player;
  return 0;
}
