#include <iostream>
using namespace std;

static int checkDraw(char*** board, int SIZE)
{
	int i = 0;
	int j = 0;
  int k = 0;

	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
      for (k = 0; k < SIZE; k++)
      {
			   if (board[i][j][k] == '0')
         {
           return 0;
         }
       }
		}
	}
	return 1;
}
