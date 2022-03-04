//
// Created by Igor on 21.02.2022.
//
#pragma once
#include "window.h"

class Screen
{
  int width = 80;
  int height = 50;
  Window *window = nullptr;
public:
  void setWindow(Window *inWindow)
  {
    window = inWindow;
  }
  void moveWindow(int dx, int dy)
  {
    window->move(dx, dy);
  }
  void resizeWindow(int width, int height)
  {
    window->resize(width, height);
  }
  void deleteWindow()
  {
    delete window;
    window = nullptr;
  }
  void display();
};


