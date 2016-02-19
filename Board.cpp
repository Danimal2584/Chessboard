#include "stdafx.h"
#include "Board.h"
#include <iostream>
#include <string>
using namespace std;

Board::Board()
{
	board = new unsigned int *[10];
	for (size_t i = 0; i < 10; ++i)
	{
		board[i] = new unsigned int[10];
	}
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if ((i == 0 && j == 0) || (i == 0 && j == 9) ||  //corners
				(i == 9 && j == 0) || (i == 9 && j == 9))
			{
				board[i][j] = 0;
			}
			else if (i == 0 && j>0 && j<9 || i == 9 && j>0 && j<9) //bottom and top rows
			{
				board[i][j] = j;
			}
			else if (j == 0 && i > 0 && i < 9 || j == 9 && i > 0 && i < 9) //first and last columns
			{
				board[i][j] = i;
			}
			else //rest
				board[i][j] = 0;
		}
	}
};

void Board::printBoard()
{
	string line = "";
	char x = 'A';

	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if (i == 0 && j>0 && j<9 || i == 9 && j>0 && j<9) //Changes first and last rows to characters to match board format
			{
				cout << x << " ";
				x++;
			}
		//	else if (board[i][j] == 0) //TODO: make every other square have an x to denote a black square
		//		cout << j;
			else if (j == 0 && i > 0 && i < 9 || j == 9 && i > 0 && i < 9) //first and last columns
			{
				cout << i << " ";

			}
			else //line += board[i][j] + " ";
				cout << "  ";
			
		}
		cout << endl << endl;
		x = 'A';
		line += "\n";
	}
	cout << line;
}


Board::~Board()
{
	for (size_t i = 0; i <10; ++i)
	{
		delete[] board[i];
	}
	delete[] board;

}