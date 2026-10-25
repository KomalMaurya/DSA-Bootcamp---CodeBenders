#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	
	
	// Reverse an array 
	vector<int> a = {50, 20, 10, 40};
	
	
	// initialise  
	int i = 0; 
	int j = a.size() - 1;
	
	//
	while(i < j){
	    swap(a[i], a[j]); // 50 will swap with 40 here when i = 0 & j = n - 1
	    // 20 will swap with 10 here when i = 1 & j = 2
	    i++; // i = 1 , i++ --->>>>> i = 2
	    j--; // j = 2, j-- ---->>>> j = 1  
	}
	
	for(int i = 0; i < a.size(); i++){
	    cout << a[i] << " ";
	}
	
}
