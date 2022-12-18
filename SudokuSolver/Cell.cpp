#include "Cell.h"
#include <vector>

Cell::Cell()
{
   answer = 0;
   //row = 0;
   //col = 0;
   
   // bitset starts out with all zeros.  No need to reset it in the constructor.
   //candidates.reset();
}

Cell::~Cell()
{
   // Do nothing.  You didn't allocate any memory.
}

void Cell::SetAnswer(int input)
{
   answer = input;
}