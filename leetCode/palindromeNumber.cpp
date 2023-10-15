#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

bool isPalindrome(int x) {
  int temp = x;
  long int remainder;
  int i = 1;
  int sum = 0;
  while (temp>0) {
    temp /=10;
    i *=10;
  }
  i/=10;
  temp = x;
  while (temp>0) {
    remainder=temp%10;
    remainder =remainder*i;
    sum +=remainder;
    i/=10;
    temp/=10;
  }
  cout << sum <<endl;
  if (sum==x) {
    return true;
  }
  else {
    return false;
  }
}

int main (int argc, char *argv[]) {
  int x;
  cin >> x;
  if (isPalindrome(x)) {
    cout << "GOOD" <<endl;
  }
  else {
    cout << "BAD" <<endl;
  }
  return 0;
}
