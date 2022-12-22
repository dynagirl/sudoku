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