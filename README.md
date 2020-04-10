# COMP2113-GP
Hello, this is the COMP2113 group project of Group241.

Group member:

-Chen Xiangyue 3035719052

-Dong Qian 3035532820

Game description:

-This is a 3-dimensional gobang game. The width of the new board (e.g. 3x3x3, 4x4x4) is determined by the user. 

-Then, the two competing players who take turns to place their pieces, 'x' and 'o' respectively. 

-The first player to establish a width-long line with his pieces wins. The line can be in any of the three dimensions, either flat or diagonal. If no player can establish a line when the board the full of pieces, they end up even. 

Coding requirements: 

1. Generation of random game sets or events

-After the two players enter their names, a random generator assigns one of them to hold 'x' (first to move) and the other to hold 'o' (second to move). 

2. Data structures for storing game status

-Use a three-dimensional array to store the current pieces on the board, whose size (width of board) is of the player's request. For every space in the array, integer 0, 1 and 2 means no piece, 'x' and 'o' respectively. 

3. Dynamic memory management

-Firstly, check whethter the player move is legal.

-If player moves successfully, renew the board.

-If player fails to move, ask for a new turn.

4. File input/output (e.g. for loading/saving game status)

-

5. Program codes in multiple files

-main.cpp: Initiate the game; 

-printboard.cpp: Display the board in the beginning;

-checklegal.cpp: Check if the player's move is legal; 

-updateboard.cpp: Display the updated board after each move;

-checkwin.cpp: Check win/lose/even status after each move; 

### instructions on multiple file coding : https://www.learncpp.com/cpp-tutorial/programs-with-multiple-code-files/ ###

6. Proper indentation and naming styles

-Clear naming of each variable and each line of code should be well-indented  to make a better visibility of the page.

7. In-code documentation

-Some necessary documentations will be placed beside each line of code. Not only to give developers the necessary control to maintain the system but also to make the code understandable.
