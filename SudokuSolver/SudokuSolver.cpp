// SudokuSolver.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include <string>
#include "Puzzle.h"

int main()
{
   std::string s;

   std::cout << "Hello World!\n";
   std::cout << "Input your suduko puzzle numbers with no spaces or commas.  Put zero for unknown values.  Hit enter after inputting each row.\n\n";
   //std::cin >> s;
   
   //std::ifstream file("SudokuTest1.txt");
   //std::vector<int> columns;
   //std::vector<columns> rows;

   Puzzle TestPuzzle;
   TestPuzzle.Read_From_File("SudokuTest1.txt");
   TestPuzzle.Display_Choices();
   TestPuzzle.Display_Choices2();
   //std::cin >> s;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file




//sscanf(fioe, "%d %d %d %d %d %d %d %d %d \n", val00, val01, val02....)
//sscanf(file, "%d %d %d %d %d %d %d %d %d \n", val10, val11, val121....)

//fstream f;
//f >> val00 << val01 << val02....