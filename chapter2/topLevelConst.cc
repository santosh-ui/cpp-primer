#include<iostream>
int main() {
//	int i = -1, &r = 0;
	// error: can't bind non const lvalue reference of type "int&" (&r) 
	// to a rvalue reference of type "int" (0)
	
//	const int i2 = 5;
//	int *const p2 = &i2;
//			|
//			const int*
	// invalid conversion from "const int*" to "int*" [-fpermissive]
	
//	int i2 = 5;
//	const int *const p3 = &i2;
	// ok: const int* (p3) pointer points to const int i2
	
//	const int i = -1;
	// ok: const int reference can bind to const int (0)
	
//	const int *p1 = &i2;
	// ok: in this case pointer p1 is of type "const int", 
	// but it is not a (*const pointer) and 
	// it does not matter if the variable i2 is "const int" or "int"
	
//	const int &const r2;
	// error: "const" qualifiers cannot be applied to "const int&"
	// error: r2 declared as reference but not initialized
	
//	const int i2 = i, &r = i;
	// ok: r is a reference of type "const int" refering to "const int"
	// varialble
	
	int i = 0;
	int *const p1 = &i; // we can't change the value of p1; const is top-level
	
	const int ci = 42; // we can't change ci; const is top-level

	const int *p2 = &ci; // we can change p2; const is low-level

	const int *const p3 = p2; // right-most const is top-level, 
				  // left-most is not

//	const int &r = ci; // const in reference type is always low-level

	i = ci; // ok: copying the value of ci; top-level const in ci is ignored

	p2 = p3; // ok: pointed-to type matches; top-level const in p3 is ignored

//	int *p = p3; // error: p2 has a low-level const but p doesn't
		     // Invalid conversion from "const int" to "int"
	
	p2 = p3; // ok: p2 has the same low-level const qualification as p3

	p2 = &i; // ok: we can convert int* to const int*

//	int &r = ci; // error: can't bind an ordinary int& to a const int object

	const int &r2 = i; // ok: can bind "const int&" to a plain int
	
//	r2 = 500; // error: assignment of read-only reference

	return 0;	
}
