#include <iostream>
#include <string>
using namespace std;

string array[10][4];

void addProduct() {
  int id=0;
  string name="null";
  string quantity="null"; 
  string price="null";
  array[id][0] = to_string(id);
  array[id][1] = name;
}

void displayProduct(){

}

void editProduct() {

}

void deleteProduct() {

}

int menu() {
  int x;
  cout << "Enter suitable options:" <<endl;
  cout << "\t" << "1 for adding new products." << endl;
  cout << "\t" << "2 for dispalying products." << endl;
  cout << "\t" << "1 for editing products." << endl; 
  cout << "\t" << "1 for deleting products." << endl;
  cin >> x;
  switch (x) {
    case 1:
      addProduct();
    case 2:
      displayProduct();
    case 3:
      editProduct();
    case 4:
      deleteProduct();
  }
}

int main (int argc, char *argv[]) {
  menu(); 
  return 0;
}
