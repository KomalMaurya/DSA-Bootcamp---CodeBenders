#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	vector<int> a = {5, 4, 3, 2, 1};
	int n = a.size();
	
	cout << "Array before sorting : ";
	for(int i = 0; i < n; i++){
	    cout << a[i] << " ";
	}
	cout << "\n";
	
	// Selection sort
	for(int i = 0; i < n - 1; i++){ // N - 1 times
	    int mn = i;
	    for(int j = i + 1; j < n; j++){ // N - i times
	        if(a[j] < a[mn]){
	            mn = j;
	        }
	    }
	    swap(a[mn], a[i]);
	}
// sort(a.begin(), a.end());  
	cout << "Array after sorting : ";
	for(int i = 0; i < n; i++){
	    cout << a[i] << " ";
	}
	
	// TC : O(N^2)
}
