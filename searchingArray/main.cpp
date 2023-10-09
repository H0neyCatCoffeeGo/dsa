#include <cstdlib>
#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  int n;
  int key;
  int arr[n];

  for (int i = 0; i<=n-1; i++)
  {
    cin >> arr[i];
  }
  for (int i = 1; i<=n; i++)
  {
    cout << arr[i];
  }

  cout << endl;
  cin >> key;

  for (int i = 1; i<=n; i++)
  {
    if (arr[i-1] == key)
    {
      cout << i << endl;
    }
    else 
    {
      cout << "Match not found" <<endl;     
    }
  }
  return 0;
}
