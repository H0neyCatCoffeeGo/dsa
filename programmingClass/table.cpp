#include <iostream>
#include <string>
using namespace std;

int main (int argc, char *argv[]) {
  string data[5][2];

  for (int i = 0; i<=4; i++)
  {
    for (int j = 0; j<=1; j++)
    {
      cin >> data[i][j];
    }
  }

  for (int i = 0; i<=4; i++)
  {
    cout << i+1 << "\t";
    for (int j=0; j<=1; j++)
    {
      cout << data[i][j] << "\t";
    }
    cout << endl;
  }
}
