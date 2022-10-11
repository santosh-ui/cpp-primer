#include<iostream>
#include "Sales_item.h"
int main(){
	Sales_item book1, book2;
	std::cin >> book1 >> book2; // read a pair of transactions
	std:: cout << book1 + book2 << std::endl; // print their sum
	return 0;
}
