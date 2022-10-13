#include<iostream>
#include"Sales_item.h"
int main(){
	Sales_item total; // variable to hold data for the next transaction
	// read the first transaction and ensure that there are data to process
	if(std::cin >> total) { 
		Sales_item trans; // variable to hold the running sum
		// read and process the remaining transactions
		while(std::cin >> trans) {
			// if we're processing the same book
			if(trans.isbn() == total.isbn()) {
				total += trans; // update the running total
			} else {
				// else print results for the previous book
				std::cout << total << std::endl;
				total = trans; // total now refers to the next book
			}
		}
		std::cout << total << std::endl; // print the last transaction
		return 0; // indicate success
	} else {
		// No input! warn the user.
		std::cerr << "No Data found?!" << std::endl;
		return -1; // indicate failure
	}
}
