#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	// Reverse a string
	string s = "Komal";
	int i = 0;
	int j = s.size() - 1;
	
	while(i < j){
	    swap(s[i], s[j]);
	    i++;
	    j--;
	}
// 	cout << s;
	string s1 = "Akshita";
	// compare 2 strings if they are equal or not
	// x == y --> compare values
// 	if(s1 == s){
// 	    cout << "Both are same\n";
// 	}else{
// 	    cout << "Different";
// 	}
	
	string ans = "Both are same";
	string word = "Komal";
	// 
	if(ans.find(word) != -1){
	    cout << "word was found!";
	}else{
	    cout << "word was not found!";
	}
	
}
