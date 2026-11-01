#include <bits/stdc++.h>
using namespace std;

// 1. base case
// 2. recursive case

void generateSubsequences(int i, vector<int> a, vector<int>& cur){
    
    // base case
    if(i == a.size()){ // 2 == 2 -> yes
        cout << "{ ";
        for(int i = 0; i < cur.size(); i++){
            cout << cur[i] << " "; // {2}
        }
        cout << " }";
        cout << endl;
        return;
    }
    
    // recursive case
    cur.push_back(a[i]); // { } -> { a[1]} -> {2}
    generateSubsequences(i + 1, a, cur); // 2, a, {2}
    // i + 1 = 2, i =  1
    // {2}
    cur.pop_back(); // { }
    generateSubsequences(i + 1, a, cur); // 2,a,  { }
}


int main() {
	// your code goes here
	
	// a = { 1, 2 }
	// cur = {}
	vector<int> a = {1, 2};
	vector<int> cur;
	generateSubsequences(0 , a, cur);
}
