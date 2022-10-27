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
	/* 
	 * Key differences between pointers and references
	 * Pointers
	 * 1. are compound types that points to another types.
	 * 2. Like references, pointers are used for indirect access to other objects.
	 * 3. Unlike reference, a pointer is an object in its own right.
	 * 4. Pointers can be assigned and copied.
	 * 5. A Pointer can point to several different objects over its life time.
	 * 6. Unlike reference, a pointer need not be initialized at the time it is defined
	 * 7. Like other built-in types, pointers defined at block scope have undefined 
	 * value if they are not iniitialized.
	 * 8. A Pointer holds the address of another object
	 *
	 * Reference
	 * 1. defines an alternative name for an object.
	 * 2. A reference type "refers to" another type.
	 * 3. we define a reference type by writing a declarator of the form &d, 
	 * where d is the name being declared.
	 * 4. Ordinarily, when we initialize a variable, 
	 ** the value of the initializer is copied into the object we're creating.
	 ** when we define a reference, instead of copying the initializer's value, we bind
	 * reference to its initial object.
	 ** There is no way to rebind a reference to refer to a different object.
	 * Because, there is no way to rebind a reference.
	 * 5. *** References must be initialized.
	 * 6. References are not objects, they don't have addresses
	 * 7. Hence, we may not define a pointer to a reference.
	 *
	 * Note: A reference is not an object. Instead, a reference is just another name 
	 * for an already existing object.
	 */

	// exercise 2.20
	int ival = 42;
	int *p1 = &ival;
	*p1 = *p1 * *p1;
	std::cout << "*p1 = " << *p1 << std::endl;
	
	// In the above code, p1 is a pointer to ival which is dereferenced to change the 
	// value of ival to its square (ival * ival) 
	
	// exercise 2.21
	

	return 0;
}
