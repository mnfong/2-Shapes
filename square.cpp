// square.cpp
// mnfong
// Fong, Madison

#include <iostream>
#include "grid.h"
#include "shape.h"
#include "square.h"

using namespace std;

// Square constructor, stores a point and the square's size
Square::Square(int x, int y, int size) : Shape(x, y)
{
  m_x = x;
  m_y = y;
  squareSize = size;
}

// "Draws" the square on the grid with the specified size
void Square::draw(Grid &grid)
{
  int count = 1;
  for (int posR = m_y; posR < m_y + squareSize; posR++)
  {
    if ((count == 1) || (count == squareSize))
    {
      for (int posC = m_x; posC < m_x + squareSize; posC++)
      {
        grid.set(posC, posR, '*');
      }
    }
    else
    {
      grid.set(m_x, posR, '*');
      grid.set(m_x + squareSize - 1, posR, '*');
    }
    count++;
  }
}
