#include <iostream>

int main (int argc, char *argv[]) {
  int a=10;
  int &b=a;
  std::cout<<&b;
  return 0;
}
