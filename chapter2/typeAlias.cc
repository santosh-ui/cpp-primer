#include<iostream>
#include "Sales_item.h"
int main(){
	// traditional way of using an alias
	typedef double wages; // wages is a synonym for double

	typedef wages base, *p; // base is a synonym for double, p for double*
	// wages, base, *p are just type aliases rather than variables

	// the new standard c++11 introduced a second way to define a type alias

	using SI = Sales_item; // SI is a synonym for sales_item

	wages hourly, weekly; // same as double hourly, weekly;

	SI item; // same as Sales_item item;

	// pointers, const and type aliases

	typedef char *pstring; // pstring is an alias for the type char*
	const pstring cstr = 0; // cstr is a constant pointer to char
				// not a pointer to const char
	const pstring *ps; // ps is a pointer to a constant pointer to char

//	const char *cstr = 0; // wrong interpretation
			      // this rewrite cstr as a pointer to const char
			      // rather than as a const pointer to char

		
	
	return 0;
}
