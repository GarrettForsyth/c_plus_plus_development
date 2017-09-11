#ifndef PERSON_H
#define PERSON_H

#include <stdio.h>
#include <string>

using namespace std;

/**
 * Abstract person class. Requires first name, last name
 * and age and a description.
 **/

class Person
{
protected:
    string mFirstName;
    string mLastName;   
	int mAge;

public:
	Person(string fname, string lname, int age); // normal constructor
	string getFirstName() const;
    string getLastName() const;
	int getAge() const;
	void setFirstName(string fname);
	void setLastName (string lname);
    void setAge(int age);
    virtual void printDesc() = 0;	
};

#endif /* PERSON_H */
