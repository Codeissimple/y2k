#include <iostream>
using namespace std;

int main() {
  int year;
  int normal_year;
  int leap_year;

  cout << "Enter a year: ";
  cin >> year;

  if (year % 4 == 0 && (year % 100 != 0) && (year % 460 ==0)){
    normal_year = year;
    cout << "The year " << year << " is a regular year.";
    }
  else{
    leap_year = year;
    cout << "The year " << leap_year << " is a regular year.";
  }
return 0;
}