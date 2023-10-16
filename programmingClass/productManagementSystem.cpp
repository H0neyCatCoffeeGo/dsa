#include <iostream>
#include <string>
using namespace std;

string name_array[100];
int quantity_array[100];
int price_array[100];
int maximum_entry=10;

void addProduct() {
  int id;
  string name;
  int quantity;
  int price;
  cout << "Enter id, name, quantity, price:" << "  " << endl;
  cin >> id >> name >> quantity >> price;
  if (id>maximum_entry) {
    maximum_entry=id;
  }
  name_array[id]=name;
  quantity_array[id]=quantity;
  price_array[id]=price;
}

void displayProduct(int maximum_entry){
  cout << "id" << "    " << "name" << "   " << "quantity" << "   " << "price" << "   " << endl; 
  for (int i=0; i<=maximum_entry; i++){
    cout << i << "\t" << name_array[i] << "\t" << quantity_array[i] << "\t" << price_array[i] << "\t" << endl;
  }
}

void editProduct() {
  int id;
  string name;
  int quantity;
  int price;
  cout << "Enter id :" << "  " << endl;
  cin >> id;
  if (id>maximum_entry) {
    maximum_entry=id;
  }

  cout << "Enter new name" << " ";
  cin >> name;
  name_array[id] = name;
  
  cout << "Enter new quantity" << " ";
  cin >> quantity;
  quantity_array[id] = quantity;

  cout << "Enter new price" << " ";
  cin >> price;
  quantity_array[id]=price;

  
}

void deleteProduct() {
  int id;
  cout << "Enter id :" << "  " << endl;
  cin >> id;
  if (id>maximum_entry) {
    maximum_entry=id;
  }
  name_array[id]=" ";
  price_array[id]=0;
  quantity_array[id]=0;
}

bool leave (string choice) {
  if (choice=="y" or choice=="yes") return false;
  else if (choice=="n" or choice=="no") return true;
  else {
    cout << "Invalid value" << endl;
    return true;
  }
}

bool menu() {
  int x;
  string choice;
  bool isRunning=true;
  cout << "Enter suitable options:" <<endl;
  cout << "\t" << "1 for adding new products." << endl;
  cout << "\t" << "2 for dispalying products." << endl;
  cout << "\t" << "3 for editing products." << endl; 
  cout << "\t" << "4 for deleting products." << endl;
  cout << "\t" << "5 for leaveing." << endl;
  cin >> x;
  
  switch (x) {
    case 1:
      addProduct();
      break;
    case 2:
      displayProduct(maximum_entry);
      break;
    case 3:
      editProduct();
      break;
    case 4:
      deleteProduct();
      break;
    case 5:
      string choice;
      cout << "Are you sure y(es)/n(o):" << " ";
      cin >> choice;
      isRunning = leave(choice);
  }
  return isRunning;
}

int main (int argc, char *argv[]) {
  bool isRunning = true;
  while (isRunning) {
    isRunning=menu(); 
  }
  return 0;
}
