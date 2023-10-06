#include <iostream>
using namespace std;

int Factorial(int n) 
{
  int m = 1;
  for (int i=2; i<=n; i++)
  {
    m*=i;
  }
  return m;
}

int main()
{
  int n;
  cin >> n;
  for (int i=1; i<=n; i++)
  {
    for (int j=1; j<=i; j++)
    {
      int nCr = Factorial(j)/((Factorial(j-i)*Factorial(i)));
      cout << nCr;
    }
    cout << endl;
  }
}
