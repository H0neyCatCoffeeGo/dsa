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
  cin >>n;
  cout << Factorial(n) << endl;
}
