#include "defines.h"
#include <iostream>

using namespace std;

void insertIntoGrid(int X, int Y, int gridX, int gridY, int grid[MAX][MAX]){
	if(X < gridX && Y < gridY && X >= 0 && Y >= 0)
		grid[X][Y] = 1;
}

void updateBoard(int gridX, int gridY, int grid[MAX][MAX]){
	int newGrid[MAX][MAX] = {0};
	for(int i = 0; i < gridX; ++i)
		for(int j = 0; j < gridY; ++j){
			int neighbours = 0;
			neighbours +=  grid[i+1][j+1] + grid[i+1][j] + grid[i][j+1];
			if( i != 0 )
			{
				neighbours +=  grid[i-1][j] + grid[i-1][j+1];
				if( j != 0 )
					neighbours += grid[i-1][j-1];
			}
			if( j != 0 )
				neighbours += grid[i+1][j-1] + grid[i][j-1];
			if( grid[i][j] == 1 && (neighbours < 2 || neighbours > 3) )
				newGrid[i][j] = 0;
			else if( (grid[i][j] == 0 && neighbours == 3) || (grid[i][j] == 1 && (neighbours == 2 || neighbours == 3)))
				newGrid[i][j] = 1;
			else
				newGrid[i][j] = 0;
		}
	
	for(int i = 0; i < gridX; ++i)
		for(int j = 0; j < gridY; ++j)
			grid[i][j] = newGrid[i][j];
}

void displayBoard(int gridX, int gridY, int grid[MAX][MAX]){
	for(int i = 0; i < gridX; ++i)
	{
		for(int j = 0; j < gridY; ++j){
			if(grid[i][j] == 0)
				cout << " " ;
			else if(grid[i][j] == 1)
				cout << "X" ;
			else
				cout << "FUCK, BUG";
		}
		cout << endl;
	}
}