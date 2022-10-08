/* 
 * We can use an if to write a program to count how many consecutive 
 * times each distinct value appears in the input 
 */

#include<iostream>
int main() {
	// currVal is the number we're counting; we'll read new values into val
	int currVal = 0, val = 0;
	// Read first number and ensure that we have data to process
	if (std::cin >> currVal) {
		int cnt = 1; // store the count for the current value we're processing
		while (std::cin >> val) { // Read the remaining numbers
			if(val == currVal) { // if the values are same
				cnt++; // increment count
			} else { // otherwise print the count for the previous value
				std::cout << currVal << " occurs " << cnt << " times " << std::endl;
				currVal = val; // remember the new value
				cnt = 1; // reset the count
			}
		} // while loop ends here
		  // remember to print the last value in the file
		std::cout << currVal << " occurs " << cnt << " times " << std::endl;
	} // outer most if statement end here
	return 0;
}
