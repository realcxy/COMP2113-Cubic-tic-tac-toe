#include <iostream>
#include <cstdlib>
#include <cmath>
#include "print.cpp"
#include "move.cpp"
using namespace std;

int main(){
  int SIZE;
  //Clearify player identity
  string name1,name2;
  cout<<"Please enter the first player's name: ";
  cin>>name1;
  cout<<"Please enter the second player's name: ";
  cin>>name2;
  //Decide board size
  cout<<"Board size (minimum size = 3):";
  cin>>SIZE;
  while (SIZE<3){
    cout<<"Invalid size!"<<endl;
    cout<<"Board size (minimum size = 3):";
    cin>>SIZE;
  }
  //Randomly decide first move
  int order=rand()%2+1;
  if (order==1){
    cout<<name1<<" goes first."<<endl;
  }else if (order==2){
    cout<<name2<<" goes first."<<endl;
  }

  //dynamically allocate memory of board
  int *** board=new int**[SIZE];
  for (int i=0;i<SIZE;i++){
    board[i]=new int* [SIZE];
    for (int j=0;j<SIZE;j++){
      board[i][j]=new int[SIZE];
    }
  }
  printBoard(board,SIZE);

  for (int i=0;i<pow(SIZE,3);i++){
    order=move(board,SIZE,order);
    printBoard(board,SIZE);
    //checkWin();//To be filled
  }

  //deallocate memory
  delete[] board;
  return 0;
}
