// point.cpp
// mnfong
// Fong, Madison

#include <iostream>
#include "grid.h"
#include "shape.h"
#include "point.h"

using namespace std;

// Creates a point at the specified point with designated value
Point::Point(int x, int y, char value) : Shape(x, y)
{
  m_x = x;
  m_y = y;
  insertedValue = value;
}

// Adds the new point to the grid at specified location with value
void Point::draw(Grid &grid)
{
  grid.set(m_x, m_y, insertedValue);
}
