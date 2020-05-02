#include <iostream>
using namespace std;

bool checkMove(int*** board,int SIZE,int x,int y,int z){
  if (x<0 || x>=SIZE){
    return false;
  }
  if (y<0 || y>=SIZE){
    return false;
  }
  if (z<0 || z>=SIZE){
    return false;
  }
  if (board[x][y][z]!=0){
    return false;
  }
  return true;
}
