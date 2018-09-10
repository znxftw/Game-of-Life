# Conway's Game of Life
Description : Implementing [Conway's Game of Life](https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life) in C++ through terminal output

### Brief
Conway's Game of Life is a zero-player cellular automaton devised by John Horton Conway in 1970. The game has a few simple rules as follows :

_The universe of the Game of Life is an infinite, two-dimensional orthogonal grid of square cells, each of which is in one of two possible states, alive or dead, (or populated and unpopulated, respectively). Every cell interacts with its eight neighbours, which are the cells that are horizontally, vertically, or diagonally adjacent. At each step in time, the following transitions occur:_

- _Any live cell with fewer than two live neighbors dies, as if by under population._
- _Any live cell with two or three live neighbors lives on to the next generation._
- _Any live cell with more than three live neighbors dies, as if by overpopulation._
- _Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction._

_The initial pattern constitutes the seed of the system. The first generation is created by applying the above rules simultaneously to every cell in the seed; births and deaths occur simultaneously, and the discrete moment at which this happens is sometimes called a tick. Each generation is a pure function of the preceding one. The rules continue to be applied repeatedly to create further generations._
