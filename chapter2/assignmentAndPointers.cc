#include<iostream>
int main(){
	int i = 43;
	int *pi = 0; // pi is initialised but addresses no object
//	std::cout << "pi = " << pi << "\n*pi = " << *pi << std::endl; 
//	// error: trying to access the value of a null pointer

	int *pi2 = &i; // pi2 initialized to hold the address of i
	std::cout << "pi2 = " << pi2 << "\n*pi2 = " << *pi2 << std::endl;

	int *pi3; // if pi3 is defined inside a block, pi3 is undefined
	std::cout << "pi3 = " << pi3 << std::endl;
	
	pi3 = pi2; // both pi3 and pi2 addresses the same object e.g., i
	std:: cout << "pi3 = " << pi3 << "\n*pi3 = " << *pi3 << std::endl;

	pi2 = 0; // now pi2 addresses no object
	std::cout << "pi2 = " << pi2 << "\npi3 = " << pi3 << std::endl;

	// Other pointer operations
	if(pi) std::cout << "pi is a null pointer and it points to nothing but " << pi << std::endl;
	if(pi3) std::cout << "pi3 is a valid pointer to int and its addresses i which is "
		"equal to " << *pi3 << " and its address in the memory is " << pi3 << std::endl;

	// void* pointers
	double obj = 3.14, *pd = &obj;
	void *pv = &obj;
	std::cout << "obj = " << obj << 
		"\n*pd = " << *pd << " and pd = " << pd << 
		/* "\n*pv = " << *pv << " and pv = " << pv << */ //error: "void*" is not a pointer-to-object type
		std::endl;
	pv = pd;
	std::cout << "pv = " << pv << " pd = " << pd << std::endl;
//	std::cout << "*pv = " << *pv << std::endl; 
//	same error: cannot access an object through a void* pointer
//	by using void* pointer we can only access and operate on memory
	
	return 0;
}
