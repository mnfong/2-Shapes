// triangle.cpp
// mnfong
// Fong, Madison

#include <iostream>
#include "grid.h"
#include "shape.h"
#include "triangle.h"

using namespace std;

// Triangle constructor
Triangle::Triangle(int x, int y) : Shape(x, y)
{
  m_x = x;
  m_y = y;
}

// "Draws" the triangle on the grid at the specified point
void Triangle::draw(Grid &grid)
{
  for (int numOfRows = 1; numOfRows < 4; numOfRows++)
  {
    if (numOfRows == 1)
    {
      grid.set(m_x + 2, m_y + numOfRows - 1, '+');
    }
    else if (numOfRows == 2)
    {
      grid.set(m_x + 1, m_y + numOfRows - 1, '+');
      grid.set(m_x + 3, m_y + numOfRows - 1, '+');
    }
    else if (numOfRows == 3)
    {
      for (int posC = 1; posC < 6; posC++)
      {
        grid.set(m_x + posC - 1, m_y + numOfRows - 1, '+');
      }
    }
  }
}
