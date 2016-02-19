// Chess.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Board.h"

using namespace std;

int main()
{
	Board b;
	b.printBoard();
   
	int v ;
	cin >> v;
	cout<<v<<endl;
    system("PAUSE");
	return 0;
}

