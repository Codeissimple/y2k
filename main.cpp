#include <iostream>
using namespace std;

bool is_a_leap_year(long year) {
bool return_value = false;
  if ( (year % 400 ==0) || ((year % 4 == 0) && (year % 100 != 0))){
      return_value = true;
      }
  else{
      return_value = false;
    }
}

bool is_month_valid(long month){
bool return_value = false;
  if (month >= 1 && month <= 12){
    return_value = true;
  }
  else{
    return_value = false;
  }
}


long query_for_integer(string prompt) {
long answer = 0;

  cout << prompt;
  cin >> answer;

  return 0;
}


int main() {
long day = 0;
long month = 0;
long year = 0;

  year =  query_for_integer("Enter a year: ");
  month = query_for_integer("Enter a month: ");
  day = query_for_integer("Enter a day: ");
  if (is_a_leap_year(year)){
    cout << "Year is a leap year\n";
  }
  else{
    cout << "Year is not a leap year\n";
  }


  if (is_month_valid(month)){
    cout << "Month okay.\n";
  }
  else{
    cout << "Month not okay.\n";
  }


  return 0;
}