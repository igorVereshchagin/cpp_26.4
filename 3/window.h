#pragma once

#define DISPLAY_WIDTH   80
#define DISPLAY_HEIGHT  50

class Window
{
  int top = 10;
  int left = 10;
  int width = 30;
  int height = 30;
public:
  void move(const int &dx, const int &dy, const int &max_x, const int &max_y);
  void resize(const int &width, const int &height);
  void get(int &outLeft, int &outTop, int &outWidth, int &outHeight)
  {
    outLeft = left;
    outTop = top;
    outWidth = width;
    outHeight = height;
  }
};