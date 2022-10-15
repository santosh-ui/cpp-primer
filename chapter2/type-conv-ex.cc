#include<iostream>
int main(){
	/* 
	 * int i = -42;
	 * unsigned u = 10;
	 * std::cout << i + i << std::endl;
	 * std::cout << i + u << std::endl;
	 */

	// make sure that the unsigned subtraction is not a negative number
	/* unsigned u = 32, v = 10;
	 * std::cout << u + v << std::endl;
	 * std::cout << u - v << std::endl;
	 * std::cout << v - u << std::endl;
	 */

	// never use an unsigned in a for loop; our loop will never terminate
	// as the value of the variable never be negative
	// see pg: 66
	
	/* 
	 * unsigned u = 11; // start the loop one past the first element we want to print
	 * while (u > 0) {
	 * 	u--; // decrement first. so, that the last iteration will print 0
	 * 	std::cout << u << std::endl;
	 * }
	 */

	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;
	std::cout << u - u2 << std::endl;

	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;

	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;

	return 0;
}
