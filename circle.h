// circle.h
// mnfong
// Fong, Madison

#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include "grid.h"
#include "shape.h"

using namespace std;

class Circle : public Shape
{
  // The x and y coordinates of the circle
  private:
    int m_x;
    int m_y;

  // Functions for the circle
  public:
    // Circle construtor
    Circle(int x, int y);
    // "Draws" the circle on the grid at specified point
    void draw(Grid &grid);
};

#endif
