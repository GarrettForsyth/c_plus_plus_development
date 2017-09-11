#include "Person.h"
#include <stdio.h>
#include <stdexcept>

using namespace std;

Person::Person(string fname, string lname, int age){
    this->mFirstName = fname; // same as Person::mFirstName =
	mLastName = lname; // preferable way is to prefix member variables with m
    if(age >= 0 && age <= 120) mAge = age;
    else throw invalid_argument("Age is not in reasonable range"); 

}

string Person::getFirstName() const{return mFirstName;}
string Person::getLastName() const{return mLastName;}
int Person::getAge() const{return mAge;}
void Person::setFirstName(string fname){mFirstName = fname;}
void Person::setLastName(string lname){mLastName = lname;}
void Person::setAge(int age){
	if(age >= 0 && age <= 120) mAge = age;
	else throw invalid_argument("Age is not in reasonable range"); 
}
