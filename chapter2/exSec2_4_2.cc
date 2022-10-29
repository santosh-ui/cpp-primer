#include<iostream>
int main() {
//	int i, *const cp; // error: Uninitialized const cp
	
//	int *p1, *const p2; // error: Uninitialized const p2
	
//	const int ic;
//      const int &r = ic; // error: Uninitialized const int ic
	
//	const int *const p3; // error: Uninitialized const p3

	const int *p; // ok: non const pointer *p need not be initialized
	
//	i = ic; // illegal: can't assign ic to i after declaration

//	p1 =  p3; // illegal: p3 is uninitialized at definition

//	p1 = &ic; // illegal: ic is uninitialized in declaration

//	p3 = &ic; // illegal: assignment of read-only variable p3 

//	p2 = p1; // illegal: assignment of read-only variable p2

//	ic = *p3; // illegal: assignment of read-only variable ic

	return 0;
}
