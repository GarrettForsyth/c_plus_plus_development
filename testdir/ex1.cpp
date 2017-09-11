#include <iostream>
using namespace std;

int main(){
	int a,b;
	int ans;
	void add(int a, int b, int &ans); // prototype function 

	cout << "Please enter two numbers : \n";
	cin >> a >> b;
	add(a,b,ans);
	cout << "The sum is " << ans; 
}

int add(int a, int b){

	return a + b;
}

void add(int a, int b, int &ans){

	ans= a+b;	
}
