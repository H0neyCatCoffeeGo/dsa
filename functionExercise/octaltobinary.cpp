#include <cmath>
#include <iostream>
using namespace std;

int octtodeci (long long n)
{
  int rem = 0, i = 0, octal = 0;
  while (n!=0)
  {
    rem = n % 10;
    octal += rem * pow(8, i);
    n /= 10;
    i++;
  }
  return octal;
}

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

int main()
{
  long long n;
  cin >> n;
  cout << octtodeci(n) << endl;
}
