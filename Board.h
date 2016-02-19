#pragma once
#include "stdafx.h"
#include <string>
class Board
{
	
private:
	unsigned int **board;
public:
	Board();
	void printBoard();
	~Board();
	
};

