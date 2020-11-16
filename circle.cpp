// circle.cpp
// mnfong
// Fong, Madison

#include <iostream>
#include "grid.h"
#include "shape.h"
#include "circle.h"

using namespace std;

// Collects the location where the circle should be located
Circle::Circle(int x, int y) : Shape(x, y)
{
  m_x = x;
  m_y = y;
}

// Adds each point to the grid starting at the specified location to form a circle
void Circle::draw(Grid &grid)
{
  for (int numOfRows = 1; numOfRows < 5; numOfRows++)
  {
    if (numOfRows == 1)
    {
      grid.set(m_x + 1, m_y, 'o');
      grid.set(m_x + 2, m_y, 'o');
    }
    else if (numOfRows == 4)
    {
      grid.set(m_x + 1, (m_y + numOfRows) - 1, 'o');
      grid.set(m_x + 2, (m_y + numOfRows) - 1, 'o');
    }
    else
    {
      grid.set(m_x, m_y + numOfRows - 1, 'o');
      grid.set(m_x + 3, m_y + numOfRows - 1, 'o');
    }
  }
}
