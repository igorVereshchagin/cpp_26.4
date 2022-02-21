#include "player.h"
#include "cstdlib"
#include <iostream>
#include <iomanip>

void Player::init()
{
  Track *newTrack = new Track;
  newTrack->setName("Track #1");
  newTrack->setDateOfCreation( {0, 30, 12, 3, 2, 100});
  newTrack->setLength(100);
  tracks.push_back(newTrack);
  newTrack = new Track;
  newTrack->setName("Track #2");
  newTrack->setDateOfCreation({12, 15, 11, 28, 6, 98});
  newTrack->setLength(123);
  tracks.push_back(newTrack);
  newTrack = new Track;
  newTrack->setName("Track #3");
  newTrack->setDateOfCreation({46, 56, 18, 15, 4, 99});
  newTrack->setLength(147);
  tracks.push_back(newTrack);
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
    for (int i = 0; i < tracks.size(); i++)
    {
      if (tracks[i]->getName() == name)
      {
        play(tracks[i]);
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
  play(tracks[std::rand() % tracks.size()]);
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