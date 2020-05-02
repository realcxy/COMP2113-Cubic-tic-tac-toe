#include <iostream>
#include "checkMove.cpp"
using namespace std;

int move (int*** board,int SIZE,int order){
  int x,y,z;
  //Player1 moves
  if (order==1){
    cout<<"Player1's turn:"<<endl;
    cout<<"Level: ";
    cin>>x;
    cout<<"Row: ";
    cin>>y;
    cout<<"Column: ";
    cin>>z;
    //Transfer player input to fit the program
    x--;
    y--;
    z--;
    if (checkMove(board,SIZE,x,y,z)){
      //Apply the legal move
      board[x][y][z]=1;
      order=2;
    }else{
      //Ask for a new move until it is legal
      while (!checkMove(board,SIZE,x,y,z)){
        cout<<"Invalid move!"<<endl;
        cout<<"Level: ";
        cin>>x;
        cout<<"Row: ";
        cin>>y;
        cout<<"Column: ";
        cin>>z;
        x--;
        y--;
        z--;
      }
      board[x][y][z]=1;
      order=2;
    }
    //Player2 moves
  }else if (order==2){
    cout<<"Player2's turn:"<<endl;
    cout<<"Level: ";
    cin>>x;
    cout<<"Row: ";
    cin>>y;
    cout<<"Column: ";
    cin>>z;
    x--;
    y--;
    z--;
    if (checkMove(board,SIZE,x,y,z)){
      board[x][y][z]=2;
      order=1;
    }else{
      while (!checkMove(board,SIZE,x,y,z)){
        cout<<"Invalid move!"<<endl;
        cout<<"Level: ";
        cin>>x;
        cout<<"Row: ";
        cin>>y;
        cout<<"Column: ";
        cin>>z;
        x--;
        y--;
        z--;
      }
      board[x][y][z]=2;
      order=1;
    }
  }
  //Update the next player to move
  return order;
}
