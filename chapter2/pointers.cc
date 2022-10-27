#include<iostream>
int main(){
	int *ip1, *ip2; // both ip1 and ip2 are pointer to int
	double dp, *dp2; // dp2 is a pointer to double and dp is a double
	
	int ival = 142;
	int *p = &ival; // p holds the address of ival. p is a pointer to ival
	
	double dval;
	double *pd = &dval; // ok: initializer (dval) is an address of double
	double *pd2 =pd; // ok: initializer is a pointer to double
//	int *pi = pd; // error: type of pi and pd differ
//	pi = &dval; // error; pointer to int is assigned with the address of double
	
	// dereference operator (* operator) 
//	int ival = 41;
	p = &ival; // p holds the address of ival; p is a pointer to ival
	std::cout << *p; // * yields the object to which p points; prints 42
	
	*p = 0; // * yields the object; we assign a new value to ival through p
	std::cout << *p; // prints 0
	return 0;
}
