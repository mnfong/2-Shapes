// triangle.h
// mnfong
// Fong, Madison

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include "grid.h"
#include "shape.h"

using namespace std;

class Triangle : public Shape
{
  // Stores a point on the grid to draw the triangle
  private:
    int m_x;
    int m_y;

  // Functions that triangle uses
  public:
    // Triangle constructor
    Triangle(int x, int y);
    // "Draws" the triangle on the grid at stored point
    void draw(Grid &grid);
};

#endif
