#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	// Count the number of vowels in a string
	// a , e, i, o ,u
	string s = "She is playing cricket!";
	int n = s.size();
	int count = 0;
	for(int i = 0; i < n; i++){
	    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
	        count++;
	    }
	}
// 	cout << count ;
	
	// Palindrome
	// "madam" -> reverse -> "madam"
	string m = "Komal";
	int i = 0;
	int j = m.size() - 1;
	int flag = 1; 
	while(i < j){
	    if(m[i] != m[j]){
	        flag = 0;
	        cout << "Not a Palindrome!!";
	        break;
	    }
	    i++;
	    j--;
	}
	
	if(flag == 1) cout << "It is a Palindrome!!";

}
