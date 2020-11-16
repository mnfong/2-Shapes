// grid.h
// mnfong
// Fong, Madison

#ifndef GRID_H
#define GRID_H

#include <iostream>

using namespace std;

// Creates the grid
class Grid
{
  
  // Variables to create the grid: how many columns, rows, and an array
  // to hold the data that is inside the grid
  private:
    static const int COLS = 60;
    static const int ROWS = 24;
    char m_grid[COLS][ROWS];

  // Functions to construct the grid, change values inside the grid, and
  // print out the grid and the values inside of it
  public:
    Grid();
    void set(int posC, int posR, char value);
    void print();
};

#endif
