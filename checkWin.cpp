#include <iostream>
using namespace std;

char checkWin(char*** board, int SIZE)
{
  for(int k=0;k<SIZE;k++)//decide in every level k, whether column i is the same
  {
    int j=0;
    for(;j<SIZE;j++)
  	{
      int i=0, count=0;
      for(;i<SIZE;i++)
      {
        if (board[0][j][k]==board[i][j][k]&&board[0][j][k]!='0')
          count++;
        if (count == SIZE)
          return board[0][j][k];
      }
  	}
  }

  for(int k=0;k<SIZE;k++)//decide in every level k, whether row j is the same
  {
    int i=0;
    for(;i<SIZE;i++)
  	{
      int j=0, count=0;
      for(;j<SIZE;j++)
      {
        if (board[i][0][k]==board[i][j][k]&&board[i][0][k]!='0')
          count++;
        if (count == SIZE)
          return board[i][0][k];
      }
  	}
  }
  for(int i=0;i<SIZE;i++)//decide in every level i, whether row j is the same
  {
    int j=0;
    for(;j<SIZE;j++)
  	{
      int k=0, count=0;
      for(;k<SIZE;k++)
      {
        if (board[i][j][0]==board[i][j][k]&&board[i][j][0]!='0')
          count++;
        if (count == SIZE)
          return board[i][j][0];
      }
  	}
  }

  for(int k=0;k<SIZE;k++)//diagonal plane case1.1
  {
    int i=0,count=0;
    for(;i<SIZE;i++)
    {
      if(board[0][0][k]==board[i][i][k]&&board[0][0][k]!='0')
        count++;
      if (count == SIZE)
        return board[0][0][k];
    }
  }

  for(int k=0;k<SIZE;k++)//diagonal plane case1.2
  {
    int count=0;
    for(int i=SIZE-1;i>=0;i--)
    {
      if(board[0][0][k]==board[i][SIZE-1-i][k]&&board[0][0][k]!='0')
        count++;
      if (count == SIZE)
        return board[0][0][k];
    }
  }

  for(int i=0;i<SIZE;i++)//diagonal plane case2.1
  {
    int k=0,count=0;
    for(;k<SIZE;k++)
    {
      if(board[i][0][0]==board[i][k][k]&&board[i][0][0]!='0')
        count++;
      if (count == SIZE)
        return board[i][0][0];
    }
  }

  for(int i=0;i<SIZE;i++)//diagonal plane case2.2
  {
    int count=0;
    for(int k=SIZE-1;k>=0;k--)
    {
      if(board[i][0][0]==board[i][SIZE-1-k][k]&&board[i][0][0]!='0')
        count++;
      if (count == SIZE)
        return board[i][0][0];
    }
  }

  for(int j=0;j<SIZE;j++)//diagonal plane case3.1
  {
    int i=0,count=0;
    for(;i<SIZE;i++)
    {
      if(board[0][j][0]==board[i][j][i]&&board[0][j][0]!='0')
        count++;
      if (count == SIZE)
        return board[0][j][0];
    }
  }

  for(int j=0;j<SIZE;j++)//diagonal plane case3.2
  {
    int count=0;
    for(int i=SIZE-1;i>=0;i--)
    {
      if(board[0][j][0]==board[i][j][SIZE-1-i]&&board[0][j][0]!='0')
        count++;
      if (count == SIZE)
        return board[0][j][0];
    }
  }

  int count=0;
  for(int i=0;i<SIZE;i++) //cross diagonal case1
  {
    if(board[0][SIZE-1][0]==board[i][SIZE-1-i][i]&&board[0][SIZE-1][0]!='0')
      count++;
    if (count == SIZE)
      return board[0][SIZE-1][0];
  }

  count=0;
  for(int i=SIZE-1;i>=0;i--) //cross diagonal case2
  {
    if(board[SIZE-1][SIZE-1][0]==board[i][i][SIZE-1-i]&&board[SIZE-1][SIZE-1][0]!='0')
      count++;
    if (count == SIZE)
      return board[SIZE-1][SIZE-1][0];
  }

  count=0;
  for(int i=0;i<SIZE;i++) //cross diagonal case3
  {
    if(board[0][0][0]==board[i][i][i]&&board[0][0][0]!='0')
      count++;
    if (count == SIZE)
      return board[0][0][0];
  }

  count=0;
  for(int i=0;i<SIZE;i++) //cross diagonal case4
  {
    if(board[0][SIZE-1][SIZE-1]==board[i][SIZE-1-i][SIZE-1-i]&&board[0][SIZE-1][SIZE-1]!='0')
      count++;
    if (count == SIZE)
      return board[0][SIZE-1][SIZE-1];
  }

  return '0';
}
