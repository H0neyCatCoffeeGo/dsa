#include <iostream>
using namespace std;

int main () 
{
  int month;
  cout << "Enter month's number: ";
  cin >> month;
  int max_date;
  if (month == 9 || month == 4 || month == 5 || month == 11)
  {
    max_date = 30;
  }
  else if (month == 2) 
  {
    max_date = 28;
  }
  else 
  {
    max_date = 31;
  }
  int calender[max_date];
  for (int i = 0; i<= max_date-1; i++)
  {
    calender[i] = i+1;
  }
  for (int i = 0; i<= max_date-1; i++)
  {
      cout << calender[i] << "\t";
  }
  cout << endl;
  return 0;
} 
