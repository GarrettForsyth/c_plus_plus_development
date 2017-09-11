#ifndef DATE_H
#define DATE_H

#include <string>
using namespace std;

class Date {
  private:
    string month;
    int day;
    int year;
    
  public:
    string getMonth();
    void setMonth(string month);
    int getDay();
    void setDay(int day);
    int getYear();
    void setYear(int year); 

    Date();
    Date(string month, int day, int year);

    void printDate();
    bool sameMonth(Date date);
};



#endif /* ifndef DATE_H */
