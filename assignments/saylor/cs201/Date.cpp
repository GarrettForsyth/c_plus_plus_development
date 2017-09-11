#include "Date.h"
#include "assert.h"
#include "stdio.h"

using namespace std;


// default constructor with default values
Date::Date(){
  month = "Jan";
  day   = 1;
  year  = 2000;
}

Date::Date(string month, int day, int year){
  setMonth(month);
  setDay(day);
  setYear(year);  
}

string Date::getMonth() {return month;}
int    Date::getDay()   {return day;}
int    Date::getYear()  {return year;}

// neglects input checks
void Date::setMonth(string month){
  this->month = month;
}

void Date::setDay(int day){
  assert (day > 0 && day < 32);
  this->day = day;
}

void Date::setYear(int year){
  assert (year > 0);
  this->year = year;
}

void Date::printDate(){
  printf("%s %d %d", 
      getMonth().c_str(), 
      getDay(), 
      getYear());  
}

bool Date::sameMonth(Date date){
  return this->getMonth() == date.getMonth();
} 
