#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(){
	string str = "Hello";
	string phrase = "Hello!, World";
	string slang = "Hiya!";
	cout << "str < phrase = " << (str < phrase) << endl;
	cout << "str < slang = " << (str < slang) << endl;
	cout << "slang > str & slang > phrase = " << (slang > str && slang > phrase)
		<< endl;

	string str1(10, 'c'), str2;
	// str1 is cccccccccc; str2 is an empty string
	str1 = str2; // assignment: replace contents of str1 with a copy of str2
		     // both str1 and str2 are now the empty strings
	
	// Adding two strings
	string s1 = "hello, ", s2 = "world\n";
	string s3 = s1 + s2; // s3 is hello, world\n
	s1 += s2; // equivalent to s1 = s1 + s2
	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
	cout << "s3 = " << s3 << endl;
	return 0;
}
