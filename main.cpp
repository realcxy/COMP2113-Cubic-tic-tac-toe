#include <iostream>
#include <cstdlib>
#include <cmath>
#include "print.cpp"
#include "move.cpp"
#include "checkWin.cpp"
#include "checkDraw.cpp"
using namespace std;

int main(){
  int SIZE,draw=0;
  char winner='0';
  //Clearify player identity
  string name1,name2;
  cout<<"Please enter the first player's name (hold '1'): ";
  cin>>name1;
  cout<<"Please enter the second player's name (hold '2'): ";
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
  char *** board=new char**[SIZE];
  for (int i=0;i<SIZE;i++){
    board[i]=new char* [SIZE];
    for (int j=0;j<SIZE;j++){
      board[i][j]=new char[SIZE];
    }
  }
  for (int i=0;i<SIZE;i++){
    for (int j=0;j<SIZE;j++){
      for (int k=0;k<SIZE;k++){
        board[i][j][k]='0';
      }
    }
  }
  printBoard(board,SIZE);

  //Propose player moves
  while (winner=='0' && draw==0){
    order=move(board,SIZE,order,name1,name2);
    printBoard(board,SIZE);
    winner=checkWin(board,SIZE);
    if (winner=='1'){
      cout<<name1<<" wins!"<<endl;
    }else if (winner=='2'){
      cout<<name2<<" wins!"<<endl;
    }else{
      draw=checkDraw(board,SIZE);
      if (draw==1){
        cout<<"Draw!"<<endl;
      }
    }
  }

  //deallocate memory
  delete[] board;
  return 0;
}
