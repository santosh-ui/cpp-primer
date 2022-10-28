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
	
	const int i = -1;
	// ok: const int reference can bind to const int (0)
	
//	const int *p1 = &i2;
	// ok: in this case pointer p1 is of type "const int", 
	// but it is not a (*const pointer) and 
	// it does not matter if the variable i2 is "const int" or "int"
	
//	const int &const r2;
	// error: "const" qualifiers cannot be applied to "const int&"
	// error: r2 declared as reference but not initialized
	
	const int i2 = i, &r = i;
	// ok: r is a reference of type "const int" refering to "const int"
	// varialble
	

	
	return 0;	
}
