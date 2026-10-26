#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	// Peform linear search 
	int target = 20;
	vector<int> a = {30, 50, 80 , 20, 60 , 70}; 
	
	int n = a.size();
	int flag = 0;
	// n = 7
	for(int i = 0; i < n; i++){
	    // i = 0
	    if(a[i] == target){  // a[0] = 30.  ... 30 == 20 no. .
	        flag = 1;
	        cout << "Target found!!";
	        break;
	    }
	}
	
	if(flag == 0) cout << "Target not found!!";
}
