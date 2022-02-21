#pragma once
#include "track.h"
#include <vector>

class Player
{
  std::vector<Track*> tracks;
  Track *current = nullptr;
  bool paused = false;
  void play(Track *track);
public:
  void init();
  void play();
  void pause();
  void next();
  void stop();
};