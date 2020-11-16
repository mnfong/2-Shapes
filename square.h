// square.h
// mnfong
// Fong, Madison

#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
#include "grid.h"
#include "shape.h"

using namespace std;

class Square : public Shape
{
  // Stores the square's size and starting coordinate point
  private:
    int squareSize;
    int m_x;
    int m_y;

  // Functions that Square uses
  public:
    // Square constructor
    Square(int x, int y, int size);
    // "Draws" the square on the grid
    void draw(Grid &grid);
};

#endif
