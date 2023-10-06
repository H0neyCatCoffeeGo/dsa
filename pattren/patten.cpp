#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i =1; i <= sqrt(n); i++) {
    for (int j = 1; j<=n; j++) {
      if ((i+j)%4==0 or (i+j) == 6 or (i+j) == 10) {
        cout << "*" << " ";
      }
      else {
        cout << "-" << " ";
      }
    }
    cout << endl;
  }
}
