#include<iostream>
int main(){
	const int i = 42;
	auto j = i; // j is an int
	const auto &k = i; // k is a const int reference
	auto *p = &i; // p is a pointer to const int
	const auto j2 = i, &k2 = i; // j2 is a const int obj
				    // k2 is a const reference to const int
//	std::cout << typeid(k).name() << std::endl;

	return 0;
}
