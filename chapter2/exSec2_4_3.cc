#include<iostream>
int main() {
	int i = 0;
	const int v2 = 0;
	int v1 = v2; // const int v2 is copied into int v1 location
		     // v1 is a different object and does not point to v2
	
	int *p1 = &v1, &r1 = v1;
	// plain int *p1, &r1 pointing to plain int v1

	const int *p2 = &v2, *const p3 = &i, &r2 = v2;
	// ok: const int *p2 pointing to const int v2
	// ok: top-level and low-level p3 pointing to plain int i
	// but p3 cannot be used to change i
	// ok: low-level const int &r2 pointing to top-level const int v2

	r1 = v2; // ok: plain int &r1 reference to top-level const int v2

//	p1 = p2; // error: invalid conversion from "const int*" to "int*"
		 // plain int *p1 pointing to top-level const int v2 through
		 // low-level const int *p2

	p2 = p1; // ok: low-level const int* p2 pointing to plain int v1
		 // through plain int* p1

//	p1 = p3; // error: invalid conversion from "const int*" to "int*"

	p2 = p3; // ok: same low-level const int* p2 and p3

	std::cout << "&v1 " << &v1 << " &v2 " << &v2 << std::endl;
	return 0;
}
