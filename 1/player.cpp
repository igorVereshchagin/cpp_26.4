#include "player.h"
#include "cstdlib"
#include <iostream>
#include <iomanip>

void Player::init()
{
  tracks[0].setName("Track #1");
  tracks[0].setDateOfCreation( {0, 30, 12, 3, 2, 100});
  tracks[0].setLength(100);
  tracks[1].setName("Track #2");
  tracks[1].setDateOfCreation({12, 15, 11, 28, 6, 98});
  tracks[1].setLength(123);
  tracks[2].setName("Track #3");
  tracks[2].setDateOfCreation({46, 56, 18, 15, 4, 99});
  tracks[2].setLength(147);
}
void Player::play()
{
  if (nullptr != current)
  {
    std::cout << "Track " << current->getName() << " is playing" << std::endl;
    paused = false;
  }
  else
  {
    std::cout << "Input a name of track:" << std::endl;
    std::cin >> std::ws;
    std::string name;
    std::getline(std::cin, name);
    for (int i = 0; i < TRACK_COUNT; i++)
    {
      if (tracks[i].getName() == name)
      {
        play(&tracks[i]);
        break;
      }
    }
    if (nullptr == current)
      std::cout << "There is no track " << name << std::endl;
  }
}

void Player::pause()
{
  if (nullptr != current)
  {
    if (paused)
    {
      std::cout << "Track " << current->getName() << " playing" << std::endl;
      paused = false;
    }
    else
    {
      std::cout << "Track " << current->getName() << " paused" << std::endl;
      paused = true;
    }
  }
  else
    std::cout << "There is no any track playing" << std::endl;
}

void Player::next()
{
  play(&tracks[std::rand() % TRACK_COUNT]);
}

void Player::stop()
{
  if (nullptr != current)
  {
    std::cout << "Player stopped" << std::endl;
    current = nullptr;
    paused = false;
  }
  else
    std::cout << "There is no any track playing" << std::endl;
}

void Player::play(Track *track)
{
  current = track;
  paused = false;
  std::cout << "Playing " << current->getName() << ". Created at "
   << std::put_time(&current->getDateOfCreation(), "%d.%m.%Y %H:%M:%S")
   << ". Length: " << current->getLength() << std::endl;
}