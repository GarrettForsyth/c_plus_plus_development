#include "Student.h"
#include <stdio.h>

using namespace std;

Student::Student(string fname, string lname, int age, string id, int gpa, int gradeLevel)
	: Person(fname, lname, age){
	mID = id;
	mGPA = gpa;
	mGradeLevel = gradeLevel;
}

string Student::getID() const{return mID;}
int Student::getGPA() const{return mGPA;}
int Student::getGradeLevel() const{return mGradeLevel;}
void Student::setID(string id){mID = id;}
void Student::setGPA(int gpa){mGPA = gpa;}
void Student::setGradeLevel(int gradeLevel){mGradeLevel = gradeLevel;}
void Student::printDesc(){
	printf("ID=%s belongs to student %s %s in grade %d. %s is %d years old and has a GPA=%d",
			getID().c_str(), getFirstName().c_str(), getLastName().c_str(),
		   	getGradeLevel(), getFirstName().c_str(), getAge(), getGPA());
}
