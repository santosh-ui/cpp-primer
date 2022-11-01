#include<iostream>
int main(){
//	const int max_files = 200; 
	// max_files is a constant expression which is initialized from a literal
	//
//	const int limit = max_files + 1; 
	// limit is a constant expression which is initialized from a constant 
	// expression
	
//	int staff_size = 27;
	// staff_size is not a constant expression as it is not const int
	
//	const int sz = get_size(); // error: get_size() is not initialized in this
				   // scope
	// sz is not a constant expression because the value of its initializer is
	// not known until run-time
	
	/*
	 *  Alternative way to declare constant expression was introduced in c++ 11
	 *  that asks the compiler to verify that a variable is a constant 
	 *  expression by declaring the variable in a "constexpr" declaration
	 */

	constexpr int mf = 20;
	// 20 is a constant expression
	
	constexpr int limit = mf + 1;
	// mf + 1 is a constant expression

//	constexpr int sz = size(); // error: size is not declared in this scope
	// ok only if size is a constexpr function

	const int *p = nullptr; // p is a pointer to a const int

	constexpr int *q = nullptr; // q is a const pointer to int that is null
	// "constexpr" imposes a top-level const on the objects it defines
	
	int j = 0;
	constexpr int i = 52; // the type of i is cost int
	
//	constexpr const int *p1 = &i;
	// p1 is a constant pointer to the const int i
//	constexpr int *p2 = &j;
	// p2 is a constant pointer to the int j
	
	// exercise 2.32 from section 2.4.4

//	int null = 0, *p3 = null;
	/*
	 * the above statement is illegal *p3 is "int*" pointer object 
	 * "int*" pointer cannot be converted to int object
	 * it is legal to use "int&" in this statement as "int&" is just an alias
	 *  for "int"
	 */

	return 0;
}
