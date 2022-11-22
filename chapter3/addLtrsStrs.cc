#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(){
	string s1 = "hello", s2 = "world"; // no punctuation in s1 or s2
	string s3 = s1 + ", " + s2 + "\n";
	cout << s3 << endl;

	string s4 = s1 + ", "; // ok: adding a string and a literal
//	string s5 = "hello" + ", "; // error: no string operand
	string s6 = s1 + ", " + "world"; // ok: each + has a string operand
					 // equivalent to 
					 // s6 = (s1 + ", ") + "world";
//	string s7 = "hello" + ", " + s2; // error: can't add string literals
	
	cout << s4 << endl;
	cout << s6 << endl;
	return 0;
}
