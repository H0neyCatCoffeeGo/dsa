#include <cstdlib>
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

int Takemove()
{
  bool isValid = false;
  int a = rand() % 2;
  int b = rand() % 2;
  while (!isValid) {
    if (board[a][b]!=1 and board[a][b]!=2) {
      board[a][b] = 2;
      isValid=true;
      Draw();
    }
  }
  return 0;
}

bool isWin() {

  //checking diagnals
  if ((board[0][0]==1 and board[1][1]==1 and board[2][2]==1)or(board[0][0]==2 and board[1][1]==2 and board[2][2]==2)) {
    return true;
  }
  if ((board[0][2]==1 and board[1][1]==1 and board[2][0]==1)or(board[0][2]==2 and board[1][1]==2 and board[2][0]==2)) {
    return true;
  }

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

    if (i%2!=0) {
      Takemove();
      i++;
    }

    cin >> a >> b; 
    if (board[a][b]!=1 && board[a][b]!=2) {
      if (i%2==0) board[a][b]=1;
      i++;
    }
    else {
      i--; 
    }
    if (i==10) break;
    Draw();
  }

  if (i%2==0 && i!=10) cout << "o has won" << endl;
  if (i%2!=0 && i!=10) cout << "x has won" << endl;
  if (i==10) cout << "match was a tie" << endl;

  return 0;
}
