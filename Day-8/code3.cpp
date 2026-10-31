#include <bits/stdc++.h>
using namespace std;


int fact(int N){
    // base case
    if(N == 0) return 1;
    
    // recursive case
    return  N * fact(N - 1);
}

int main() {
	// your code goes here
	
	// Problem : Factorial of N 
	int ans = fact(4); // -> 4 * 3 * 2 * 1
	cout << ans;
}
