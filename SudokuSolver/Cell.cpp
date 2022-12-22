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
   if (input > 0)
      choices.set(input);
   else
      for (int i=1; i <= 9; i++)
      {
         choices.set(i);
      };
}

int Cell::GetAnswer(void)
{
    return answer;
}

void Cell::Display123(int start, int count)
{
   //return choices.to_string();
   //std::cout << choices[1] << choices[2] << choices[3];
   if (answer > 0)
   {
      //std::cout << answer;
      for (int i = start; i <= start + count - 1; i++)
      {
         if (choices.test(i))
            std::cout << i;
         //std::cout << choices[i];
         else
            std::cout << " ";
      }
   }
   else
   {
      for (int i = start; i <= start + count - 1; i++)
      {
         if (choices.test(i))
            std::cout << i;
         //std::cout << choices[i];
         else
            std::cout << ".";
      }
   }
}

//std::ostream& operator << (std::ostream& out, const Cell& c)
std::ostream& operator << (std::ostream& out, Cell& c)
{
   out << c.GetAnswer();
   //out << c.choices[1] << c.choices[2] << c.choices[3];
   return out;
}
