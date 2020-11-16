// shape.h
// mnfong
// Fong, Madison

#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include "grid.h"

using namespace std;

class Shape
{
  public:
    // Stores a coordinate on the grid
    int m_x;
    int m_y;
    // Default Shape constructor
    Shape(int x, int y);
    // Virtual draw function that gets overriden in children classes
    virtual void draw(Grid &gird) = 0;
};

#endif
