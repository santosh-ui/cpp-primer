#include<iostream>
int main(){
	const double pi = 3.14; // pi is a const; its value may not be changed
//	double *ptr = &pi; // error: ptr is a plain pointer
	const double *cptr = &pi; // ok: cptr may point to a double that's constant
//	*cptr = 42; // error: cannot assign to *cptr
	
	double dval = 3.14; // dval is a double; its value can be changed
	cptr = &dval; // ok: but can't change dval through cptr
	
	// const Pointers
	int errNum = 0;
	int *const curErr = &errNum; // curErr will always point to errNum
	const double *const pip = &pi; // pip is a const pointer to a const object
	
//	*pip = 2.72; // error: pip is a pointer to const
	// if the object to which curErr points (i.e., errNum) is nonzero
	if (*curErr) {
		// errorHandler();
		*curErr = 0; // ok: reset the value of the object to which curErr
			     // is bound
	}

	return 0;
}
