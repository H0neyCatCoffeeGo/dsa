#include <iostream>
#include <utility>
using namespace std;

void swap(int a, int b) {
  a,b=b,a;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
}

int main (int argc, char *argv[]) {
  int a,b;
  cout << "a=" << "\t";
  cin >> a;
  cout << "b=" << "\t";
  cin >> b;
  swap(a, b);
  return 0;
}

