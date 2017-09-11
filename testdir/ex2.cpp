#include <iostream>
using namespace std;

int main(){
	
	unsigned fib(unsigned n);	
	
	cout << "Enter a number : ";
	int input;
	cin >> input;
	for( int i = 0; i < input; ++i ){
		cout << "fib(" << i << ") is : " << fib(i) << endl;
		
	}
	
}

unsigned fib(unsigned n){

	if ( n < 2 ) return n;
	return (fib(n - 2) + fib(n - 1));
}	











