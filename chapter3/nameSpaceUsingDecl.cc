#include<iostream>
// using declaration; when we use the name cin, cout and endl, we get the one from
// the namespace std
using std::cin;
// using std::cout;
// using std::endl;
int main(){
	int i;
	cin >> i; // ok: cin is a synonym for std::cin
	cout << i; // error: no using declaration; we must use the full name
	std::cout << i; // ok: explicitly use cout from the namespace std
	return 0;
}
