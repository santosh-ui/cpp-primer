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
	// code to read into data1 and data2
	// code to check whether data1 and data2 have the same ISBN
	// and if so print the sum of data1 and data2
	return 0;
}

