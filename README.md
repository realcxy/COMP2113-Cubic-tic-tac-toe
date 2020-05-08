# COMP2113-GP 

# Project topic: Cubic tic-tac-toe

Hello, this is the COMP2113 group project proposal of Group 241.

Group members:

-Chen Xiangyue 3035719052

-Dong Qian 3035532820

Game description:

-This is a 3-dimensional tic-tac-toe game. The user inputs '1' to start a new game and '0' to exit before each round. 

-In every new game, two players input their names and the width of the new board (e.g. 3x3x3, 4x4x4). 

-Then, the two players who take turns to place their pieces, '1' and '2' respectively. 

-The first player to establish a width-long line with their pieces wins. The line can be in any of the three dimensions, either flat or diagonal. If no player can establish a line when the board the full of pieces, they end up even. 

Coding requirements: 

1. Generation of random game sets or events

-After the two players enter their names, a random generator assigns one of them to make the first move (game.cpp). 

2. Data structures for storing game status

-Use a dynamic three-dimensional array to store the current pieces on the board, whose size (width of board) is of the player's request. For every space in the array, integer 0, 1 and 2 means no piece, 1st player and 2nd player respectively. 

3. Dynamic memory management

-The board is a dynamic 3D array passed by reference to all the other functions, updated with every move, and deleted after the game. 

4. File input/output (e.g. for loading/saving game status)

-Sample game inputs are made into files, but as a relatively short game, it cannot be paused in the middle. 

5. Program codes in multiple files

-MAIN.cpp: Initiate the game; 

-game.cpp: Initialize the new board and propose player moves; 

-move.cpp: update the board after a legal move is made; 

-checkMove.cpp: Check if the player's move is legal; 

-print.cpp: Display the updated board after each move;

-checkWin.cpp: Check win/lose status after each move; 

-checkDraw.cpp: Check if the player break even after each move. 

6. Proper indentation and naming styles

-Clear naming of each file, indentation checked.

7. In-code documentation

-Some necessary documentations are placed beside segments of code, not only to give developers the necessary control to maintain the system but also to make the code understandable for guest readers. 
