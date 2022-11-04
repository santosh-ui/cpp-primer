#include<iostream>
/* 
 * struct Sales_data{
 * '/'* ...*'/'
 * } accum, trans, *salesptr;
 */

// equivalent, but better way to define the objects
// struct Sales_data{}
// error: expected semicolon after struct definition
struct Sales_data{};
Sales_data accum, trans, *salesptr;
int main(){
	return 0;
}

