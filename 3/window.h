#pragma once

#define DISPLAY_WIDTH   80
#define DISPLAY_HEIGHT  50

class Window
{
  int top = 0;
  int left = 0;
  int width = 1;
  int height = 1;
public:
  void move(const int &dx, const int &dy);
  void resize(const int &width, const int &height);
  void display();
};