#include "Professor.h"
#include <stdio.h>

using namespace std;

Professor::Professor(string fname, string lname, int age, string expertise)
	: Person(fname, lname, age){
	mExpertise = expertise;	
}

string Professor::getExpertise() const{return mExpertise;}
void Professor::setExpertise(string expertise){mExpertise = expertise;}
void Professor::printDesc(){
	printf("%s %s is %d years old and a professor of %s",
			getFirstName().c_str(), getLastName().c_str(), getAge(),
		   	getExpertise().c_str());
}

