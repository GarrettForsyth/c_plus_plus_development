#include <stdio.h>
#include "Professor.h"
#include "Student.h"

using namespace std;

int main(void){

	
	Person ** people = new Person*[5];
	people[0] = new Student("Garrett", "Forsyth", 25, "1234", 3, 200);
	people[1] = new Student("Bob", "Dog", 14, "1235", 4, 500);
	people[2] = new Student("Shadow", "Cat", 9, "12346", 2, 200);
	people[3] = new Student("Rufus", "Cat", 9, "12347", 3, 300);
	people[4] = new Professor("James", "Bond", 34, "Espionage");
	
	for(int i = 0; i < 5; i++){
		people[i]->printDesc();
		printf("\n");
	}

	return 0;
}
