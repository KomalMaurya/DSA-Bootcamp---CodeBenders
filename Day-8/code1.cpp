#include <bits/stdc++.h>
using namespace std;

// Recusion : a function which call itself
// which divides larger problem into smaller
// base condition 

// (n - 2) <- (n - 1)   <-   n 

void func(int n){  // func(0)

    // base case
    if(n == 0) return; // 0 == 0 --> yes
    
    // recursive case
    func(n - 1);  // func(5-1); --> func(4) // input becomes smaller or simpler
    cout << n << " ";
}

int main() {
	// your code goes here
	
	
	// Problem : Print 1 to N numbers using recursion
	int N; 
	cin >> N; // 5
	func(5);
}
