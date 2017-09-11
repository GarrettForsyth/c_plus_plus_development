#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>


using namespace std;

void hello(){
	cout << "Hello World!\n";
}

int main()
{
	hello();
	cout << "Enter the radius of the sphere: \n";
	
	double radius;

	cin >> radius;
	
	cout << "The radius of a sphere with radius " << radius
		 << " is " << (4*M_PI*(pow(radius,3)))/3;
	
	return 0;
	
}




