#include <bits/stdc++.h>
using namespace std;


int sumArray(vector<int> a, int n){ // a, 2
    
    // Base 
    if(n == 0) return a[0];
    
    // Recursive case
    return a[n] + sumArray(a, n - 1);
}


int main() {
	// your code goes here
	
	// Problem : sum of elements in the array using recursion
	vector<int> a = {3,2,1,4,5};
	
	int sum = sumArray(a, 4);
	cout << sum;
	
}


// Factorial -> fact(5) -> 5 * 4 * 3 * 2 * 1 = 120 = 5!
