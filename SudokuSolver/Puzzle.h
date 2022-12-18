#pragma once

#include <string>
#include <fstream>
#include <vector>
#include "Cell.h"

class Puzzle
{
public:
   Puzzle();
   ~Puzzle();
   bool Read_From_File(std::string filename);

protected:
   //typedef std::vector<Cells> columns;
   //std::vector<columns> row;

   Cell P[9][9];
};
