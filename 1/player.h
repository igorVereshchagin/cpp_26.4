#pragma once
#include "track.h"

#define TRACK_COUNT      3

class Player
{
  Track tracks[TRACK_COUNT];
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