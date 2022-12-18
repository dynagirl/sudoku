#pragma once

#include <bitset>

class Cell
{
public:
   Cell();
   ~Cell();
   void SetAnswer(int input);

protected:
   //int col; // This cell's column in the sudoku puzzle.  Zero means the cell has not been initialized.  After init, it will be 1 through 9.
   //int row; // This cell's row in the sudoku puzzle.  Zero means the cell has not been initialized.  After init, it will be 1 through 9.

   int answer;
   std::bitset<9> candidates[9];

};

