#include<iostream>
#include<cstdlib>
int main(){
	// different types of initialization of null pointer
	int *p1 = nullptr; // equivalent to int *p1 = 0;
	// p2 is directly initialized from the literal constant 0
	int *p2 = 0;
	// for below definition must include preprocessor #include cstdlib
	int *p3 = NULL; // equivalent to int *p3 = 0;
	
	
	// cannot assign a variable to a pointer
	int zero = 0;
	int *pi = zero; // error: invalid conversion from int to int*
	
	return 0;
}
