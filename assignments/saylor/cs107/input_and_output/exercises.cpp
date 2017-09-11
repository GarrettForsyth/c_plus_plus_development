#include <stdio.h>
#include <cstring>
#include <ctype.h>
#include <iostream>

using namespace std;

void printUpperCase();
void stringToUpperCase(char *);
void reverseString(char *);
void printAllCapsReversed();
void swapChar(char *, int, int);

int main(){
	char str1[50];

	FILE *fp;

	fp = fopen("test_file.txt", "r");
	if (fp == NULL){
		return -1;
	} 
	else{
		while(!feof(fp)){
            fgets(str1, 50, fp);
			reverseString(str1);
			stringToUpperCase(str1);
			printf("%s\n", str1);
		}
	}
	fclose(fp);
}

void stringToUpperCase(char * array){
	int i = 0;
    while( *(array + i) != '\0'){
		*(array + i) = toupper(*(array + i)); 
		i++;
	}	
}

void reverseString(char * input){
	for(int i = 0; i < (int)(strlen(input)/2); i++){
		swapChar(input, i, (int)(strlen(input)-1-i));
	}
}

void swapChar(char * text, int j, int k){
    char temp = *(text + j);
	*(text +j) = *(text + k);
	*(text + k) = temp;

}
