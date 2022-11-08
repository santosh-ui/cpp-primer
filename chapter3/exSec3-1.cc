#include<iostream>
#include "Sales_item.h"
using std::cin;
using std::cout;
using std::endl;
using std::cerr;
int main(){
	// exercise 3.1
	// Rewrite the exercise from 1.4.1 and 2.6.2 with appropriate 
	// using declaration

	// 1.4.1	
	int sum = 0, val = 1;
	while(val <=10){
		sum += val;
		++val;
	}
	
	cout << "The sum of 1 to 10 inclusive is " << sum << endl;

	// 2.6.2
	/* 
	 * Use your Sales_data class to rewrite the exercises in 
	 * §1.5.1 (p. 22), § 1.5.2 (p. 24), and § 1.6 (p. 25). 
	 * For now, you should define your Sales_data class in the 
	 * same file as your main function
	 */
//	Sales_item book;
	// read ISBN, number of copies sold, sales price
//	cin >> book;
	// write ISBN, number of copies sold, total revenue, and average price
//	cout << book << endl;
	
	Sales_item item1, item2;
	cin >> item1 >> item2; // read a pair of transactions
//	cout << item1 + item2 << endl; // print their sum

	// first check that item1 and item2 represent the same book
	if (item1.isbn() == item2.isbn()) {
		cout << item1 + item2 << endl;
		return 0; // indicate success
	} else {
		cerr << "Data must refer to same ISBN" << endl;
		return -1; // indicate failure
	}

	return 0;
}
