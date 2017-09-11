#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person{
private:
    string mID;	
	int mGPA;
	int mGradeLevel;
public:
    Student(string fname, string lname, int age, string id, int gpa, int gradeLevel);
    string getID() const;
	int getGPA() const;
	int getGradeLevel() const;
	void setID(string id);
	void setGPA(int gpa);
	void setGradeLevel(int gradeLevel);
	void printDesc();
};

#endif /* ifndef STUDENT_H */
