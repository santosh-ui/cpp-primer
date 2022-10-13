#include<iostream>
#include"Sales_item.h"
int main(){
	Sales_item book1, book2;
	std::cin >> book1 >> book2;
	// first check book1 and book2 represent the same book
	if(book1.isbn() == book2.isbn()) {
		std::cout << book1 + book2 << std::endl;
		return 0; // indicate success
	}
	else {
		std::cerr << "Data must refer to the same ISBN" << std::endl;
		return -1; // indicate failure
	}
}
