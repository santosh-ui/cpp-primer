#include<iostream>
int main(){
	// exercise 2.18
	int *p = nullptr; // p is a null pointer
	std::cout << "p = " << p << std::endl;
	int i = 13;
	p = &i;
	std::cout << "p = " << p << " i = " << i << 
		"\n*p = " << *p << std::endl;
	*p = 500;
	std::cout << "i = " << i << " *p = " << *p << std::endl;

	// exercise 2.19
	
	return 0;
}
