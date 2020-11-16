// grid.cpp
// mnfong
// Fong, Madison

#include <iostream>
#include <fstream>
#include "grid.h"

using namespace std;

// Default constructor for the grid. Each value in the grid is initally a
// space
Grid::Grid()
{
  for (int posC = 0; posC < COLS; ++posC)
  {
    for (int posR = 0; posR < ROWS; ++posR)
    {
      m_grid[posC][posR] = ' ';
    }
  }
}

// Changes the value of a location in the grid to a user specified value
void Grid::set(int posC, int posR, char value)
{
  if ((posR >= ROWS) || (posR < 0))
    return;
  if ((posC > COLS) || (posC < 0 ))
    return;
  m_grid[posC][posR] = value;
  return;
}

// Prints out the grid and the values inside of it
void Grid::print()
{
  for (int posR = 0; posR < ROWS; ++posR)
  {
    for (int posC = 0; posC < COLS; ++posC)
    {
      cout << m_grid[posC][posR];
    }
    cout << '\n';
  }
  return;
}
