#ifndef PROFESSOR_H
#define PROFESSOR_H 

#include "Person.h"

class Professor : public Person{
private:
	string mExpertise;
public:
	Professor(string fname, string lname, int age, string expertise);
    string getExpertise() const;
    void setExpertise(string expertise);	
	void printDesc();
};
#endif /* ifndef PROFESSOR_H */
