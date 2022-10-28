#include<iostream>
int main() {
	// We can make a variable unchangeable by defining the variable’s type as
	// const and the const variable must be initialized
	const int bufSize = 512; // input buffer size
//	bufSize = 1024; // error: attempt to write to const object

//	const int i = get_size(); // ok: initialized at run time
	const int j = 50; // ok: initialized at compile time
//	const int k; // error: k is uninitialized
	
	int i1 = 51;
	const int ci = i1; // ok: the value of i is copied into ci
	int j1 = ci; // ok: the value of ci is copied into j
	
	// Reference to const
	const int ci1 = 24;
	const int &r = ci1; // ok: both reference and underlying object are const
//	r = 42; // error: r is a reference to a const
//	int &r2 = ci; // error: non const reference to a const object
	
	// Initialization and References to const
	int i2 = 100;
	const int &r1 = i2; // we can bind a const int& to a plain int object
	const int &r2 = r1; // ok: r1 is a reference to const
	const int &r3 = r1 * 2; // ok: r3 is a reference to const
//	int &r4 = r1 * 2; // error: r4 is a plain, non const reference
	
	// Example
	double dval = 3.14;
	const int &ri = dval;
	std::cout << ri << " " << &ri << std::endl;

	/*
	 * compiler converts above example to
	 * const int temp = dval; // create a temporary const int from the double
	 * const int &ri = temp; // bind ri to that temporary variable
	 */

	return 0;
}
