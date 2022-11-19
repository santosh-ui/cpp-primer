#include<iostream>
#include<string>
using std::string;
using std::cout;
int main(){
	string s1; // default initialization; s1 is the empty string
	string s2 = s1; // s2 is a copy of s1
	string s3 ("Hallo!"); // s3 is a copy of the string literal, 
			      // not including the null
	string s4 (10, 'c'); // s4 is cccccccccc
	string s5 = "value"; // equivalent to s5 ("value")
	string s6 (s5); // s6 is a copy of s5
	
	// s4 initialization is same as
	string temp (15, 's');
	string s7 = temp;

	
	cout << "s1: " << s1 << "\n" << "s2: " << s2
		<< "\n" << "s3: " << s3 << "\n" << 
		"s4: " << s4 << "\n" << "s5: " << s5 << "\n" <<
		"s6: "<< s6  << "\n" << "s7: " << s7 << std::endl;

	return 0;
}
