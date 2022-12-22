#pragma once

#include <bitset>
#include <iostream>

class Cell
{
public:
   Cell();
   ~Cell();
   void SetAnswer(int input); 
   int GetAnswer(void);
   void Display123(int start, int count);
   //ostream& operator << (ostream& os, custom_type& t);
   //ostream& operator << (ostream& os);
   //friend ostream& operator << (ostream& out, const Complex& c);
   //std::ostream& operator << (std::ostream& out, const Cell& c);
   //std::ostream& operator << (std::ostream& out);

protected:
   //int col; // This cell's column in the sudoku puzzle.  Zero means the cell has not been initialized.  After init, it will be 1 through 9.
   //int row; // This cell's row in the sudoku puzzle.  Zero means the cell has not been initialized.  After init, it will be 1 through 9.

   int answer;
   std::bitset<10> choices;

};


// ostream overloads
std::ostream& operator << (std::ostream& out, Cell& c);

