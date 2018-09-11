#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include "board.cpp"

using namespace std;

int main(){
	cout << "Grid Size (x * y) : " << endl;
	cin >> gridX >> gridY;
	cout << "Number of live cells : " << endl;
	cin >> n;
	cout << "X,Y values of live cells : " << endl;
	for(i = 0; i < n; ++i){
		cin >> tempX >> tempY;
		insertIntoGrid(tempX,tempY,gridX,gridY,grid);
	}
	cout << "Press any key to begin the Game of Life ..." << endl ;
	//getch();
	while(1){
		updateBoard(gridX,gridY,grid);
		sleep(1);
		system("cls");
		displayBoard(gridX,gridY,grid);
	}
	return 0;
}