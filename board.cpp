#include "defines.h"
#include <iostream>

using namespace std;

void insertIntoGrid(int X, int Y, int gridX, int gridY, int grid[MAX][MAX]){
	if(X < gridX && Y < gridY && X >= 0 && Y >= 0)
		grid[X][Y] = 1;
}

void updateBoard(int gridX, int gridY, int grid[MAX][MAX]){

	for(int i = 0; i < gridX; ++i)
	{
		for(int j = 0; j < gridY; ++j){
			int neighbours = 0;
			if( grid[i+1][j+1] == 1 )
				neighbours++;
			if( grid[i+1][j] == 1 )
				neighbours++;
			if( grid[i][j+1] == 1)
				neighbours++;
			if( i != 0 )
			{
				if( grid[i-1][j] == 1)
					neighbours++;
				if( grid[i-1][j+1] == 1)
					neighbours++;
				if( j != 0 )
					if( grid[i-1][j-1] == 1)
						neighbours++;
			}
			if( j!= 0 ){
				if( grid[i][j-1] == 1)
					neighbours++;
				if( grid[i+1][j-1] == 1 )
					neighbours++;
			}
		}
	}
}

void displayBoard(int gridX, int gridY, int grid[MAX][MAX]){
	for(int i = 0; i < gridX; ++i)
	{
		for(int j = 0; j < gridY; ++j){
			if(grid[i][j] == 0)
				cout << " " ;
			else	
				cout << "X" ;
		}
		cout << endl;
	}
}