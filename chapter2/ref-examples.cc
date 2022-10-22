#include<iostream>
int main(){
	int ival = 1.10; // double value is converted to int (1.10 -> 1)
	int ref = 5;
	int &refVal = ref; // refVal refers to (is another name for) ival
//	int &refVal2; // error: a reference must be initialized
	refVal = 2; // assign 2 to the object to which refVal refers i.e., to ival
	int ii = refVal; // same as ii = ival;
	int &refVal3 = refVal; 
	// &refVal3 is bound to the object to which &refVal is bound i.e., to ival
	// initializes i from the value in the object to which refVal is bound
	int i = refVal;
	std::cout << ival << "; " << "&refVal is " 
		<< &refVal << "; refVal value is " << refVal << "; ii value is:" 
		<< ii << std::endl;
	std::cout << "&refVal3 is " << &refVal3 
		<< " and its value is " << refVal3 
		<< " i value is " << i << std::endl;
	//we can define multiple references in a single definition
	i = 1024;
	int i2 = 2048; // both i and i2 are ints
//	int &r = i, r2 = i2; // r is a reference bound to i; r2 is an int
	int i3 = 1024, &ri = i3; // i3 is an int; ri is a reference bound to i3
	int &r3 = i3, &r4 = i2; 
	// r3 and r4 are references bound to i3, i2 respectively
//	int &refVal4 = 10; // error: initializer must be an object
	double dval = 3.14;
//	int &refVal5 = dval; // error: initializer must be an int object
//	int &rval1 = 1.01;
	// error: can't bind non-const lvalue ref of type to a value of type double
	int &rval2 = ival; // rval2 refers to ival
//	int &rval3; // error: declared as reference but not initialized
	int i1 = 0, &r1 = i1; double d = 0, &r2 = d;
	// all the below statements are correct and no compilation errors
	r2 = 3.14; // as r2 refers to d, d is assigned a value 3.14
	std::cout << "r2 and d values are r2 = " << r2 << " and d = " << d 
		<< std::endl;
	r2 = r1;
	// as r2 refers to d and r1 refers to i1 which has value 0, r2 = d = 0
	std::cout << "r2 and d values are r2 = " << r2 << " and d = " << d 
		<< std::endl;
	i1 = r2;
	r1 = d;
	std::cout << r1 << r2 << i1 << d << std::endl;
	return 0;
}
