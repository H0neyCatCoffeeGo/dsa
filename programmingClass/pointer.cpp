#include <iostream>
using namespace std;

void lifo (int array[10]) {
  int *arrayptr;
  arrayptr = &array[9];
  for (int i=0; i<=10; i++){
    cout << *arrayptr <<endl;
    --arrayptr;
  }
}

int main () {

  int array[10];

  cout << "Enter 10 intergers:" <<endl;

  for(int i=0; i<=9; i++) {
    cin >> array[i];
  }

  cout << endl;

  lifo(array);

  return 0;
}
