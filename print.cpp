#include <iostream>
using namespace std;

void printBoard(char ***board, int SIZE){
  for (int i=0;i<SIZE;i++){
    cout<<"Level "<<i+1<<'	';
  }
  cout<<endl;
  for (int j=0;j<SIZE;j++){
    for (int i=0;i<SIZE;i++){
      for (int k=0;k<SIZE;k++){
        cout<<board[i][j][k]<<' ';
      }
      cout<<'	';
    }
    cout<<endl;
  }
}
