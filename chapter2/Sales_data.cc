#include<iostream>
#include<string>
#include "Sales_data.h"
/* 
 * struct Sales_data{
 * '/'* ...*'/'
 * } accum, trans, *salesptr;
 */

// equivalent, but better way to define the objects
// struct Sales_data{}
// error: expected semicolon after struct definition
// struct Sales_data{};
// Sales_data accum, trans, *salesptr;
int main(){
	Sales_data data1, data2;
	double price = 0; // price per book, used to calculate total revenue
	// code to read into data1 and data2
	std::cout << "Enter bookno, units sold and price of data1:" << std::endl;
	std::cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold * price;
	std::cout << "Total revenue for data1 " << data1.bookNo << " is " << data1.revenue << std::endl;
	std::cout << "Enter bookno, units sold and price of data2:" << std::endl;
	std::cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;
	std::cout << "Total revenue for data2 " << data2.bookNo << " is " << data2.revenue << std::endl;
	// code to check whether data1 and data2 have the same ISBN
	// and if so print the sum of data1 and data2
	if(data1.bookNo == data2.bookNo){
		unsigned totalUnitsSold = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;
		// print: ISBN, total sold, total revenue and average price per book
		std::cout << "ISBN: " << data1.bookNo << " total sold: " << totalUnitsSold
			<< "\ntotal revenue: " << totalRevenue << std::endl;
		if(totalUnitsSold != 0)
			std::cout << "Average price per book: " << totalRevenue/totalUnitsSold 
				<< std::endl;
		else
			std::cout << "No Sales!" << std::endl;
		return 0; // inidicate success
	} else { // transactions weren't for the same ISBN
		std::cerr << "Data must refer the same ISBN!" << std::endl;
		return -1; // indicate failure
	}
}

