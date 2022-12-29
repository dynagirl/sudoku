#pragma once

#include <string>
#include <fstream>
#include <vector>
#include "Cell.h"
#include <queue>

class Puzzle
{
public:
   Puzzle();
   ~Puzzle();
   bool Read_From_File(std::string filename);
   bool Display_Answer(void);
   bool Display_Choices(void);
   bool Display_Choices2(void);
   void EliminateChoices(void);
   

protected:
   //typedef std::vector<Cells> columns;
   //std::vector<columns> row;

   Cell P[9][9];
   typedef std::pair<int, int> cellLocation;
   std::queue<cellLocation> Q;
};

