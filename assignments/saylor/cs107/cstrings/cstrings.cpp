#include  <iostream>
#include  <stdio.h> 
#include  <string.h>
#include  <stdlib.h>
using namespace std;


int addTwoNumbers(int *, int*);
int factorial(int);
void swapChar(char*, char*);
void charPermu(char *, int, int);
int findStringLen(char *);
void swap(int*, int, int);
void selectionSort(int*);


#define MAXDATA 1024
#define MAX 200 // declares the maximum size of the string

typedef struct{
	double data[MAXDATA];
	int nrows;          
 	int ncols;
}Matrix;

void printmat(Matrix m);

int main(){
	void printString();
	void stringLength();
	void sepChar();
	void sepCharReverse();
	void countWords();
	void cmpStr();
	void countCharType();
	void copyStr();
	void vowelCount();
	void maxOcurringChar();
    void sortStringAsceding();
	void bubblesort();
	void substring();
	void pointerDecleration();
	void pointerDemo();
	void addressAndDereferenceDemo();
	void addWithPointers();
	void addCallByReference();
	void findMaxWithPointers();
	void printArray();
	void printPermutations();
	void maxByMemory();
	void mStrLen();
	void pCountVowel();
	void pSort();
	void pStructure();
	Matrix matrixmult(Matrix A, Matrix B);
	void matEx1();
	matEx1();
	return 0;
}
void printString(){
	char in[50];
	printf("Please input a string: ");
	fgets(in, sizeof in, stdin);
	printf("The string you entered was : %s", in);
}

void stringLength(){
	char in[50];
	printf("Please input a string: ");
	cin >> in;
	int i =0;
	while(true){
		if (in[i] == '\0') break;
		i++;
	}
	printf("Length of input string : %d", i);
}

void sepChar(){
	char str[100];
	printf("Please input a string: ");
	fgets(str, sizeof str, stdin);
	int l = 0;
	while(str[l] != '\0'){
		cout << str[l] << ' ';
		l++;
	}
}


void sepCharReverse(){
	char str[100];
	printf("Please input a string: ");
	fgets(str, sizeof str, stdin);
	int l=0;
	while(str[l] != '\0'){
		l++;
	}
	while(l >= 0){
		cout << str[l] << ' ';
		l--;
	}
}

// treats num spaces as num words..
void countWords(){
	char str[200];
	printf("Type a sentence : ");
	fgets(str, sizeof str, stdin);
	int x = 1;
	int l = 0;
	while (str[l] != '\0'){
		if ( str[l] == ' ') x++;
		l++;
	}
	printf("There are %d words in the sentence.", x);
}

void cmpStr(){
	bool isSame = true;
	char str1[200];
	char str2[200];
	printf("Enter a string: ");
	fgets(str1, sizeof str1, stdin);
	printf("Enter another string.");
	fgets(str2, sizeof str2, stdin);
	int l =0;
	if ( strlen(str1) != strlen(str2) ) {
		printf("These two string do not have the same length.");
		return;
	}
	
	while (str1[l] != '\0' && str2[l] != '\0'){
		if( str1[l] != str2[l]) isSame = false;	
		l++;
	}

	if(isSame){
		printf("These two strings are the same.");
	}
	else{
		printf("These two strings are not the same.");
	}
}

void countCharType(){
    char str[200];
    printf("Type a sentence : ");
    fgets(str, sizeof str, stdin);
    int alpha =0;
	int num=0;
	int spec= 0;
   	int l=0;
	while (str[l] != '\0'){
		if ( (int)str[l] >= 65 && (int)str[l] <= 90 )alpha++;
		else if ((int)str[l] >= 65 && (int)str[l] <= 122)alpha++;
		else if ((int)str[l] >= 49 && (int)str[l] <= 57)num++;	
		else spec++;
		l++;
	}
	printf("Number of Alphabets in the string is : %d \n" 
			"Number of Digits in the string is : %d \n" 
			"Number of Special characters in the string is : %d ",alpha, num, spec);
}


void copyStr(){
    char str[200];
    printf("Enter a string to be copied: ");
    fgets(str, sizeof str, stdin);
    char copy[200];
	int i = 0;
    while( str[i] !=  '\0'){ 
		copy[i] = str[i];
		i++;
	}	
	copy[i] = '\0';

	printf("The first string is: %s\n", str);
	printf("The second string is: %s\n", copy);
	printf("The number of characters copied is: %d\n", i);
}


void vowelCount(){
	int numVowel = 0;
	int numCons = 0;
	char str[200];
	char vowels[12]={'a','e','i','o','u','y','A','E','I','O','U','Y'};
	printf("Enter some sentence, yo: ");
	fgets(str, sizeof str, stdin);
	int l = 0;
	while(str[l] != '\0'){
		if (((int)str[l] >= 65 && (int)str[l] <= 90) || 
	    ((int)str[l] >= 65 && (int)str[l] <= 122))
		    for( int i = 0; i <(int) sizeof vowels; i++){
                 if(str[l] == vowels[i]){
					 numVowel++;
				     break;
				 }
			     if ( i == sizeof vowels - 1) numCons++;
			}
		l++;
	}
	printf("The total number of vowels in the string is %d\n", numVowel);
	printf("The total number of consonances in the string is %d\n", numCons);

}


void maxOcurringChar(){
	char str[MAX];
	printf("Please enter a string: ");
	fgets(str, sizeof str, stdin);
	int freq[256]={0};
	int l = 0;

	while(str[l] != '\0'){
		int ch = str[l];
	    freq[ch]= freq[ch] +1;		
		l++;
	}

	char hiFreqChar = ' '; // make space default.. (probably not best)
	int hiFreq = 0;
	for( int i=0; i < (int) ((sizeof freq)/(sizeof freq[0])); i++){
		if ( freq[i] > hiFreq ){
			hiFreq= freq[i];
			hiFreqChar= i;
		}
	}
	printf(" The highest frequency of character '%c'", hiFreqChar);

	
	printf(" It appears %d times.", hiFreq);
}

void sortStringAsceding(){
    // takes rudimentary approach and just convert to ascii and sort	

	char str[MAX];
	printf("Please enter a string: ");
	fgets(str, sizeof str, stdin);
	int freq[256]={0};
	int l = 0;

	while(str[l] != '\0'){
		int ch = str[l];
    	freq[ch]= freq[ch] +1;		
		l++;
	}

	for( int i=0; i < (int) ((sizeof freq)/(sizeof freq[0])); i++){
		for ( int j=0; j < freq[i]; j++){
			cout << (char) i;
		}
	}
}

void bubblesort(){
	char str[MAX];
	printf("Enter string: ");
	fgets(str, sizeof str, stdin);
	int temp;
	int n =0;
	while (str[n] != '\0'){
		n++;
	}
	for (int i = 0; i < n-1; i++){
		for(int j = 0;j  < n-1; j++){
             if(str[j] > str[j+1]){
				 temp = str[j];
				 str[j]= str[j+1];
				 str[j+1] = temp;
			 } 
		}
	} 
	for (int i = 0; i < n; i++){
		cout << str[i];
	}
}

void substring(){
	char str[200];
	int start, end;
	printf("Enter a string: ");
	fgets(str, sizeof str, stdin);
	printf("Enter position to start extraction: ");
    scanf("%d", &start);
    printf("Enter extraction end: ");
    scanf("%d", &end);

	if( start < 0 || end > (int)(sizeof str/sizeof str[0])){
		printf("Invalid bounds on substring");
		return;
	}	

    char sub[end-start+1];	
	int l = 0;
	while(str[l] != '\0'){
		if ( l >= start && l <= end){
			sub[l-start] = str[l];
		}
		l++;
	}
    sub[end]='\0';
	printf("The substring extracted was %s\n", sub);
}

void pointerDecleration(){
    int m = 42;
	int *pm = &m;

	printf("pm stores the address of m. pm = %p\n", pm);
	printf("*pm dereferences the point pm, and is the value of m. *pm = %d\n",*pm);
	printf("&m is the address of m. &m = %p\n", &m);
	printf("&pm stores the address of pm. pm = %p\n", &pm);
}

void pointerDemo(){
	int m = 29;
    int *p_m = &m;

	printf("Address of m = %p\n", &m);
	printf("Value of m = %d\n\n", m);
	printf("p_m is assigned with the address of m.\n");
	printf("Address of pointer p_m = %p\n", p_m);
	printf("Content of pointer p_m is *p_m = %d\n", *p_m);

	m = 34;
	printf("m is assigned to 34 now.\n");
	printf("Address of pointer p_m = %p\n", p_m);
	printf("Content of pointer p_m = %d\n", *p_m);
}

void addressAndDereferenceDemo(){
	printf("Using & Operator\n");
	printf("------------------------------\n");
	int m = 300;
	double fx = 300;
	char cht = 'z';
	int *pm = &m;
	double *pfx= &fx;
	char *pcht = &cht;
	printf("address of m = %p\n", &m);
	printf("address of fx = %p\n", &fx);
	printf("address of cht = %p\n", &cht);
    printf("\nUsing & and * Operators :\n");
	printf("------------------------------\n");
	printf("value at address of m = %d\n", *&m);
	printf("value at address of fx = %f\n", *&fx);
	printf("value at address of cht = %c\n", *&cht);
	printf("Using only pointer variable:\n");
	printf("------------------------------\n");
	printf("address of m = %p\n", pm);
	printf("address of fx = %p\n", pfx);
	printf("address of cht = %p\n", pcht);
	printf("Using only pointer operator :\n");
	printf("------------------------------\n");
	printf("value at address of m = %d\n", *pm);
	printf("value at address of fx = %f\n", *pfx);
	printf("value at address of cht = %c\n", *pcht);
}

void addWithPointers(){
	int a, b, *pa, *pb, sum;

	printf("Input first number : ");
	scanf("%d", &a);
	printf("Input the second number : ");
	scanf("%d", &b);

	pa = &a;
	pb = &b;

	sum = *pa + *pb;

	printf("The sum of these numbers is %d", sum);
}

void addCallByReference(){
	int a, b, *pa, *pb, sum;
   
	printf("Input first number : ");
	scanf("%d", &a);
	printf("Input the second number : ");
	scanf("%d", &b);
	pa = &a;
	pb = &b;
	sum = addTwoNumbers(pa, pb);
	printf("The sum of these numbers is %d", sum);
}

int addTwoNumbers(int *i1, int *i2){
	int sum;
	sum = *i1 + *i2;
	return sum;
}

void findMaxWithPointers(){
	int a, b, *pa, *pb;
    printf("Input first number : ");
    scanf("%d", &a);
    printf("Input the second number : ");
    scanf("%d", &b);
    pa = &a;
    pb = &b;
    if(*pa > *pb){
		printf("The max number is %d", *pa);
	}
    else{
        printf("The max number is %d", *pb);
	}	
}

void printArray(){
    int arr[5];
	// the below could be more compact in loop format
	printf("Input five (5) int elements to put into an array: \n");
	printf("Element one (1) :");
	scanf("%d", &arr[0]); //recall that arr[0] is a pointer via decay
	printf("Element two (2) :");
	scanf("%d", &arr[1]);
	printf("Element three (3) :");
	scanf("%d", &arr[2]);
	printf("Element four (4) :");
	scanf("%d", &arr[3]);
	printf("Element five (5) :");
	scanf("%d", &arr[4]);

    for(int i =0; i < (int)(sizeof arr/ sizeof arr[0]); i++){
		printf(" element - %d : %d\n", i, arr[i]);
	}
}

void printPermutations(){
	char str[MAX];
	printf("Please enter a (short) string: ");
	fgets(str, sizeof str, stdin);
	int n = strlen(str) - 1;
	// num of permutations is n factorial
	cout << "There are " << factorial(n) << " permutations.\n";
	charPermu(str, 0, n-1);
}

int factorial(int n){
   	if (n <= 1) return n;
	return n*factorial(n-1);
}

void swapChar(char *ch1, char *ch2){
	char temp;
	temp = *ch1;
	*ch1 = *ch2;
	*ch2 = temp;
}

void charPermu(char *cht, int start, int end){
	int i;

	if ( start == end){
		printf("%s ", cht);
	}
	else{
		// loops through all combinations of switching
		// (cht + start) with all other letters)
		for(i = start; i <= end; i++){
			swapChar( (cht + start), (cht+i));
			charPermu(cht, start+1, end);
			swapChar( (cht + start), (cht +i));
		}
	}
}

void maxByMemory(){
	
	int i,n;
	float *element;

	printf("\n\n Pointer : Find the largest element using Dynamic Memory Allocation:\n");
	printf("------------------------------------------------------------------------\n");
	printf( " Input total number of elements(1 to 100) : ");
	scanf("%d", &n);
	// returns a pointer to memory allocated using the arguments of
	// n - number of elements and the type of element (n * sizeof type);
    element = (float*)calloc(n, sizeof(float));
	if ( element == NULL){
		printf(" No memory is allocated.");
		return;
	}
	printf("\n");
	for(i = 0; i < n; ++i){
		printf(" Number %d ", i+1);
		scanf("%f", element+i);
	}
	for( i=1; i<n; ++i){
		if(*element <*(element+i)){
			*element=*(element+i);
		}
	}
    printf(" The largest element is : %.2f \n\n", *element);

}

void mStrLen(){

	char str[200];
	printf("\n\n Please enter a string: ");
    fgets(str, sizeof(str), stdin);
	int l = findStringLen(str);
	printf("The length of the string is %d\n\n", l-1);
}

int findStringLen(char *ch){
	int count = 0;
	while (*ch !='\0'){
		count++;
		ch++;
	}
	return count;
}

void pCountVowel(){
	char str[MAX];
	int count = 0;
	printf("\n\n Enter a string : ");
    fgets(str, sizeof(str), stdin);
    char vowels[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
    for ( int i = 0; *(str + i) != '\0'; i++){
		*(str + i) = tolower( *(str + i));
		for (int j = 0; *( vowels +j) != '\0'; j++){
            if ( *(str + i) == *(vowels + j)){
				count++;
				break;
			}
		}
	}
    printf("\n\n %d vowels were found.", count);

}

void pSort(){
    printf("\n\n Input the number of elements to store in the array : ");
	int n;
	scanf("%d", &n);
	int *arr;
    arr = (int*)(calloc(n, sizeof(int)));	
	for ( int i = 0; i < n; ++i){
         printf(" Enter element %d : ", i);
		 scanf("%d", arr + i);
	}
	selectionSort(arr);
	printf("the sorted array is :\n" );
	for( int i = 0; *(arr + i) != '\0'; i++){
		cout << *(arr + i) << " ";
	}
}

// inefficient and simple sorting algo.
void selectionSort(int *data){
   
   for (int i = 0; *(data +i) != '\0'; i++){
       int min = *(data + i);
	   for (int j = i+1; *(data + j) != '\0'; j++){
		   cout << "comparing " << *(data + j) << " to min " << min << "\n";
            if( *(data + j) < min){
				min = *(data +j);
	            swap(data, i, j);
			}
	   }
   } 
}

void swap(int* arr, int i1, int i2){
	int temp = *(arr + i1);
    *(arr + i1) = *(arr +i2);
    *(arr + i2) = temp;	
}

struct EmpAddress{
	char ename[20];
	char stName[20];
	int pincode;
};
EmpAddress employee={"John Alter", "Court Street \n", 6541234}, *pt=&employee;


void pStructure(){
    printf(" %s from %s \n\n", pt->ename, (*pt).stName);
}

void matEx1(){
	Matrix A = {{1.2, 2.3,
	             3.4, 4.5,
	             5.6, 6.7},
		        3,
				2};
    Matrix B = {{5.5, 6.6, 7.7,
	             1.2, 2.1, 3.3},
	            2,
	            3};
	printmat(A);
	cout << "\n\n";
	printmat(B);
}

void printmat(Matrix m){
	for( int r = 0; r < m.nrows; r++){
		for( int c =0; c < m.ncols; c++){
			cout << m.data[(m.ncols)*r+c] << "\t"; 
		}
		cout << "\n";
	}
}





