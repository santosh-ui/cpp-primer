#include<iostream>
int main(){
	// Exercise 2.36
	int a = 3, b = 5;
	decltype(a) c = a; // c is an int and initialized to the value of a
//	decltype((b)) d = a; // d is an int& and bound to a
//	++c; // c = c+1; -> 3+1 = 4
//	++d; // d is a reference bound to a
	     // a+1 = 3+1 = 4 = d
//	std::cout << "c = " << c << " d = " << d << std::endl;

	// Exercise 2.37
	std::cout << "(a = b) = " << (a = b) << std::endl;
	decltype(a = b) d = a; // d is an int
			       // b value is assigned to a
			       // a is an int. so, decltype returns an int
			       // now a = b = 5
			       // so, d = 5
	std::cout << "d = " << d << std::endl;

	// Exercise 2.38
	// The differences in type deduction between decltype and auto.

	return 0;
}
