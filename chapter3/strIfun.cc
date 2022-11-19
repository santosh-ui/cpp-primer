/*
 * c++ program to demonstrate the working of
 * getline(), push_back() and pop_back()
 */

#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

// Driver code
int main() {
	// Declaring and initializing string
	string str = "";

	// Taking string input using getline()
	getline(cin, str);

	// Displaying string
	cout << "The initial string is: " << str << endl;

	// Inserting a character
	str.push_back('j');

	// Displaying string
	cout << "The string after push_back operation is: " << str << endl;

	// Deleting a character
	str.pop_back();

	// Displaying string
	cout << "The string after pop_back operation is: " << str << endl;

	return 0;
}
