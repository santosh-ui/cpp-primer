#include<iostream>
#include"Sales_item.h"
int main(){
	Sales_item book1;
	// read ISBN, number of copies sold and sales price
	std::cin >> book1;
	// write ISBN, number of copies sold, total revenue and average price
	std::cout << book1 << std::endl;
	return 0;
}
