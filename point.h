// point.h
// mnfong
// Fong, Madison

#ifndef POINT_H
#define POINT_H

#include <iostream>
#include "grid.h"
#include "shape.h"

using namespace std;

class Point : public Shape
{
  // Stores the coordinate to add the point and the value that should be
  // added
  private:
    int m_x;
    int m_y;
    char insertedValue;

  // Functions that the Point uses
  public:
    // Point constructor
    Point(int x, int y, char value);
    // "Draws" the point on the grid
    void draw(Grid &grid);
};

#endif
