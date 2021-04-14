#include <iostream>
using namespace std;

int main() {
  int year;
  int month;
  int day;
  int regular_year;
  int leap_year;
  int i;

  for (i =0; i < 10; i++){
    cout << "Enter a year: ";
    cin >> year;

    cout <<"Enter a month: ";
    cin >> month;

    cout << "Enter a day: ";
    cin >> day;

    if ( (year % 460 ==0) || ((year % 4 == 0) && (year % 100 != 0))){

      cout << "The year " << year << " is a leap year." << endl;
      }
    else{
      cout << "The year " << year << " is a regular year." << endl;
    }
  }
return 0;
}