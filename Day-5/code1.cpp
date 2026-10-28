#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	
	// Insertion Sort
	vector<int> a = {5,3,4,1,2};
	int n = a.size();
	
	for(int i = 1; i < n; i++){ // n times
	    int key = a[i];
	   // j = i - 1;
	   int j = i - 1;
	   while(j >= 0 && a[j] > key){ // n times
	       a[j + 1] = a[j];
	       j--;
	   }
	   a[j + 1] = key;
	}
	
	for(int i = 0; i < n; i++){
	    cout << a[i] << " ";
	}
	
	// TC : O(N^2)
}
