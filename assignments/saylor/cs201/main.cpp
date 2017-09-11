#include "Date.h"
#include <iostream>
#include "stdio.h"

using namespace std;

int main(){

  Date d1 = Date();
  cout << "\n\n Month: " << d1.getMonth() <<
          " Day: "   << d1.getDay() <<
          " Year: "  << d1.getYear() << "\n\n";

  string month;
  int day;
  int year;
  cout << "Please enter a month :";
  cin >> month;
  cout << "Please enter a day: ";
  cin >> day;
  cout << "Please enter a year: ";
  cin >> year;

  cout << "\n\n";
  d1.setMonth(month);
  d1.setDay(day);
  d1.setYear(year);

  cout << "\n\n";
  d1.printDate();
  cout << "\n\n";
  
  Date d2 = Date();
  cout << "Please enter a month :";
  cin >> month;
  cout << "Please enter a day: ";
  cin >> day;
  cout << "Please enter a year: ";
  cin >> year;

  d2.setMonth(month);
  d2.setDay(day);
  d2.setYear(year);
  
  d2.printDate();

  cout << "\n";

  if(d1.sameMonth(d2)){
    cout << "These dates are of the same month.";
  }
  else{
    cout <<  "These dates are of different months.";
  }

  cout << "\n";
  return 0;

}

