#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	
	// Problem : Perform right rotation on this array & k = 2
	vector<int> a = {4, 2, 3, 1, 5};
	int k = 3;
	
	// Result : [1, 5, 4, 2, 3]
	
	// Operation - 1 : reverse the array
	// i = 0.       j = n - 1 
	int n = a.size();
	int i = 0;
	int j = n - 1;
	
	while(i < j){
	    swap(a[i] , a[j]);
	    i++;
	    j--;
	}
	
	for(int i = 0; i < n; i++){
	    cout << a[i] << " ";
	}
	cout << "\n";
	
	// Operation - 2 : Reversing the first segment
	// i = 0.         j = k - 1
	i = 0;
	j = k - 1;
	while(i < j){
	    swap(a[i] , a[j]);
	    i++;
	    j--;
	}
	
	for(int i = 0; i < n; i++){
	    cout << a[i] << " ";
	}
	cout << "\n";
	
	// Operation - 3 : Reversing the second segment
	// i = k.         j = n - 1
	
	i = k;
	j = n - 1;
	while(i < j){
	    swap(a[i] , a[j]);
	    i++;
	    j--;
	}
	for(int i = 0; i < n; i++){
	    cout << a[i] << " ";
	}
	cout << "\n";
	
	
}
