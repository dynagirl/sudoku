#include "Puzzle.h"
#include <iostream>

Puzzle::Puzzle()
{

}

Puzzle::~Puzzle()
{

}

bool Puzzle::Read_From_File(std::string filename)
{
   int input;
   std::string dummy;

   std::ifstream inStream(filename);
   for (int row = 0; row <= 8; row++)
   {
      for (int col = 0; col <= 8; col++)
      {
         inStream >> input;
         P[row][col].SetAnswer(input);
         if (input > 0)
         {
            //cellLocation cLoc(row, col);
            //Q.push(cLoc);
         }
      }
      std::getline(inStream,dummy);
   }
   return true;
}

bool Puzzle::Display_Answer(void)
{
   for (int row = 0; row <= 8; row++)
   {
      for (int col = 0; col <= 8; col++)
      {
         std::cout << P[row][col].GetAnswer();
      }
      std::cout << std::endl;
   }
   std::cout << std::endl;

   return true;
}

bool Puzzle::Display_Choices(void)
{
   for (int row = 0; row <= 8; row++)
   {
      for (int col = 0; col <= 8; col++)
      {
         // operator << (std::ostream, Cell);
         std::cout << P[row][col];
      }
      std::cout << std::endl;
   }
   std::cout << std::endl;

   return true;
}

bool Puzzle::Display_Choices2(void)
{
   for (int row = 0; row <= 8; row++)
   {
      //std::cout << "|----------|----------|----------|----------|----------|----------|----------|----------|----------|" << std::endl;
      std::cout << "|---|---|---|---|---|---|---|---|---|" << std::endl;
      for (int col = 0; col <= 8; col++)
      {
         // operator << (std::ostream, Cell);
         std::cout << "|";
         //std::cout << 
         P[row][col].Display123(1,3);
      }
      std::cout << "|" << std::endl;
      for (int col = 0; col <= 8; col++)
      {
         // operator << (std::ostream, Cell);
         std::cout << "|";
         //std::cout << 
         P[row][col].Display123(4, 3);
      }
      std::cout << "|" << std::endl;
      for (int col = 0; col <= 8; col++)
      {
         // operator << (std::ostream, Cell);
         std::cout << "|";
         //std::cout << 
         P[row][col].Display123(7, 3);
      }
      std::cout << "|" << std::endl;
   }
   //std::cout << "|----------|----------|----------|----------|----------|----------|----------|----------|----------|" << std::endl;
   std::cout << "|---|---|---|---|---|---|---|---|---|" << std::endl;

   return true;
}

void Puzzle::EliminateChoices(void)
{
   //cellLocation cLoc;
   int row = 0;
   int col = 0;
   int ChoiceToEliminate = P[row][col].GetAnswer();

   //while (Q.empty() != true)
   {
      //Q.pop(cLoc);
      //row = cLoc.first();
      //col = cLoc.second();

      // Eliminte in same row by looping across the columns.
      for (int c = 0; c <= 8; c++)
      {
         P[row][c].Eliminate(ChoiceToEliminate);
      }
      // Eliminte in same col by looping across the rows.
      for (int r = 0; r <= 8; r++)
      {
         P[r][col].Eliminate(ChoiceToEliminate);
      }
      // Eliminte in same area.
      int rStart = 0;
      if (row <= 2)
         rStart = 0;
      else if (row >= 6)
         rStart = 6;
      else
         rStart = 3;

      int cStart = 0;
      if (col <= 2)
         cStart = 0;
      else if (col >= 6)
         cStart = 6;
      else
         cStart = 3;
      //int rStart = mod(row, 3) * 3;
      //int cStart = mod(col, 3) * 3;
      for (int r = rStart; r <= rStart+2; r++)
      {
         for (int c = cStart; c <= cStart + 2; c++)
         {
            P[r][c].Eliminate(ChoiceToEliminate);
         }
      }
   }
}
