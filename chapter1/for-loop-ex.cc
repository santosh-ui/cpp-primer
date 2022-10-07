// Reading an unknown number of inputs
#include<iostream>
int main() {
	int sum = 0, value = 0; // declare and initialize the variables
	while(std::cin >> value){ // Reads in the values entered by the user 
				  // seperated by spaces or a new line 
				  // until the end of file is encountered
		sum += value; // equivalent to sum = sum + value;
	}
	std::cout << "The sum is:" << sum << std::endl; // output the sum
	return 0;
}


