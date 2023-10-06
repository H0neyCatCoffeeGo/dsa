#include <cmath>
#include <iostream>
using namespace std;

bool isRight(int x, int y, int z) 
{
  if ( (pow(x, 2)) == (pow(y, 2) + pow(z, 2)) )
  {
    return true;
  }
  return false;
}

int main()
{
  int side[3];
  int a=0, b=0;
  for (int i = 0; i<=2; i++)
  {
    cin >> side[i];
  }
  for (int i = 0; i<=2; i++)
  {
    for (int j=0; j<=i; j++)
    {
      a = side[i];
      if (side[i]>side[j])
      {
        int temp = side[j];
        side[j] = side[i];
        side[i] = temp;
      }
    }
  }
  cout << side[0] << side[1] << side[2] << endl;
  if (isRight(side[0], side[1], side[2]))
  {
    cout << "is a right angle triangle" << endl;
  }
  else 
  { 
    cout << "is not right angle triangle" << endl;
  }
}
