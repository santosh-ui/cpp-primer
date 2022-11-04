#include<iostream>
int f(){return 0;}
int main(){
//	double x = 3.14;
//	decltype(f()) sum = x; // sum has whatever type f returns
//	std::cout << sum << std::endl;

	// decltype returns the type of that variable, including top-level const 
	// and references
	const int ci = 0, &cj = ci;
	decltype(ci) x = 0; // x has type const int
	decltype(cj) y = x; // y has type const int& and is bound to x
//	decltype(cj) z; // error: z is a reference and must be initialized
	
	// decltype of an expression can be a reference type
	int i = 52, *p = &i, &r = i;
	std::cout << "*p = " << *p << " p = " << p << std::endl;
	decltype(r+0) b; // addition yields an int; b is an (uninitialized) int
//	decltype(*p) c; // error: c is int& and must be initialized
			// c is declared as reference but not initialized
	decltype(p) c;
	std::cout << c << std::endl;

	return 0;
}
