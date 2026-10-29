#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	// Operations on String
	
	// Append / Join
	// + 
	string s = "hello";
	cout << s << "\n";
	s += " Dakshita";
	cout << s << "\n";
	
	// Add at end 
	s.push_back('!');
	cout << s << "\n";
	
	// End 
	// pop_back -> remove it from back
	s.pop_back();
	cout << s << "\n";
	
	string student = "Divya Verma";
	// substring -> subset of string
	// fun : name.substr(index from where you want to begin, length);
	// Verm
	cout << student.substr(6, 4);
	
}
