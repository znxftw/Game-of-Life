#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include "defines.cpp"

using namespace std;

int main(){
	cout << "Grid Size (x * y) : ") << endl;
	cin >> gridX >> gridY;
	cout << "Number of live cells : " << endl;
	cin >> n;
	cout << "X,Y values of live cells : " << endl;
	for(i = 0; i < n; ++i){
		cin >> tempX >> tempY;
		insertIntoGrid(tempX,tempY,grid);
	}
	cout << "Press any key to begin the Game of Life ..." << endl ;
	getch();
	while(1){
		updateBoard(grid);
		sleep(1000)
		clrscr();
		displayBoard(grid);
	}
	return 0;
}