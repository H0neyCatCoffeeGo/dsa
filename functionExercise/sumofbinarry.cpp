#include <cmath>
#include <iostream>
using namespace std;


int bintodeci(long long n)
{
  int rem = 0, i = 0, deci = 0;
  while (n != 0) 
  {
    rem = n % 10;
    n /= 10;
    deci += rem * pow(2, i);
    i++;
  }
  return deci;
}

int decitobin(long long n)
{
  int rem = 0, bin = 0;
  while (n != 0) 
  {
    rem = n%10;
    bin = rem % 2;
    cout << bin;
  }
  cout << endl;
}

int main()
{
  long long n, m;
  cin >> n >> m;
  n = bintodeci(n);
  m = bintodeci(m);
  int sum = n + m;
  cout << sum << endl;
}
