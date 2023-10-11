#include <iostream>
#include <curses.h>
#include <string>
using namespace std;

int board[3][3];


string Display_Board(int a, int b)
{
  if (board[a][b]==1)
  {
    return "o";
  }
  else if (board[a][b]==2) 
  {
    return "x";      
  }
  else 
  {
    return ".";      
  }
}

void Update()
{
  for (int i = 0; i<=2; i++)
  {
    cout << "   ";
    for (int j = 0; j<=2; j++)
    {
      cout << Display_Board(i, j);
      if (j!=2){
        cout << "    " << "|" << "    ";
      }
    }
    cout << endl;
    if (i!=2)
    {
    cout << "   " << ".....+.........+....." << endl;
    }  
  }
}

bool IsWin()
{
  bool a = false;
  for (int i=0; i<=2; i++)
  {
    if (board[i][0]==board[i][1]==board[i][2] && board[i][0]==board[i][1]==board[i][2]!=0)
    {
      return true;
      cout << board[i][0]<<board[i][1]<<board[i][2];
    }
    else if (board[0][i]==board[1][i]==board[2][i] && board[0][i]==board[1][i]==board[2][i]!=0)
    {
      return true;
      cout << board[0][i] << board[1][i] << board[2][i];
    }
    else {
      return false;
    }
  }
  return false;
}

int main (int argc, char *argv[]) 
{
  int n = 0;

  while (!IsWin())
  {
    int a, b;
    cout << "Enter position of x: ";
    cin >> a >> b;
    if (board[a][b]!=1&board[a][b]!=2)
    {
    board[a][b] = 2;
    }
    Update();   
    if (IsWin())
    {
      cout << "x has won";
    }

    cout << "Enter position of o: ";
    cin >> a >> b;
    if (board[a][b]!=1&board[a][b]!=2)
    {
    board[a][b] = 1;
    }
    Update();
    if (IsWin())
    {
      cout << "o has won";
    }  
}

  return 0;
}



