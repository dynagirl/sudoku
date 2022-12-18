#include "Puzzle.h"

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
      }
      std::getline(inStream,dummy);
   }
   return true;
}