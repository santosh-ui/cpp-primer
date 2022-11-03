#include<iostream>
int main(){
	// By implication, the variable that uses auto as its type-specifier must 
	// have an initializer
	int val1 = 4;
	double val2 = 3.14;
	auto item = val1 + val2; // item is initialized to the result of val1+val2

	std::cout << item << std::endl;	

//	auto i = 0, *p = &i; // ok: i is int and p is a pointer to int
//	auto sz = 0, pi = 3.14; // error: inconsistent types for sz and pi

	int i = 0, &r = i;
	auto a = r; // a is an int (r is an alias for i, which has type int)

	const int ci = i, &cr = ci;
	auto b = ci; // b is an int (top-level const in ci is dropped)
	auto c = cr; // c is an int (cr is an alias for ci whose const is 
		     // top-level)
	auto d = &i; // *** d is an int* (& of an int object is int*)
	auto e = &ci; // *** e is const int* (& of a const object is 
		      // low-level const)

	// If we want the deduced type to have top-level const, we must say so 
	// explicitly
	const auto f = ci; 
	
	// specify a reference of the auto-deduced type. Normal initialization 
	// rules still apply
	auto &g = ci; // g is a const int& that is bound to ci
//	auto &h = 52; // error: we can't bind a plain reference to a literal
	const auto &j = 25; // ok: we can bind a const reference to a literal
	
	// several variables in a statement
	auto k = ci, &l = i; // k is an int; l is an int&
	auto &m = ci, *p = &ci; // m is a const int&; p is a pointer to  const int
	// error: type deduced from i is int; type deduced from ci is const int
//	auto &n = i, *p2 = &ci; // inconsistent deduction for the auto int and the
				// const int

	a = 42; // ok: a is an int
	b = 42; // ok: b is an int
	c = 42; // ok: c is an int
//	d = 42; // error: d is an int* and can't point to a literal
//	e = 42; // error: e is a const int* and can't point to a literal
//	g = 42; // error: g is a const int& and can't assign a literal to a 
		// reference


	return 0;
}
