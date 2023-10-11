#include <iostream>
using namespace std;

int board[3][3];

void Draw()
{
  for (int i = 0; i<=2; i++) {
    for (int j = 0; j<=2; j++) {
      if (board[i][j]==1) cout << "x\t";
      else if (board[i][j]==2) cout << "o\t";
      else cout << ".\t";
    }
    cout << endl;
  }
}

bool isWin() {
  for (int i=0; i<=2; i++) {

    //check all rows
    if (board[0][i]==1 and board[1][i]==1 and board[2][i]==1) return true;
    if (board[0][i]==2 and board[1][i]==2 and board[1][i]==2) return true;

    //check all columns
    if (board[i][0]==1 and board[i][1]==1 and board[i][2]==1) return true;
    if (board[i][0]==2 and board[i][1]==2 and board[i][2]==2) return true;

  }
    return false;
}

int main (int argc, char *argv[]) {

  int i = 1;
  int a, b;

  while (!isWin()) {
    cin >> a >> b; 
    if (board[a][b]!=1 && board[a][b]!=2) {
      if (i%2==0) board[a][b]=1;
      if (i%2!=0) board[a][b]=2;
      i++;
    }
    else {
      i--; 
    }
    Draw();
  }

  if (i%2==0) cout << "o has won" << endl;
  if (i%2!=0) cout << "x has won" << endl;

  return 0;
}
