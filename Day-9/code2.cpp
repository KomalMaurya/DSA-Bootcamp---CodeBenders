#include <bits/stdc++.h>
using namespace std;

// Base case
// recursive case

void generateCoins(int i, int n, string coin){ // 3, 3, "HTH"
    
    // base case
    if(i == n){ // 3 == 3 -> yes
        cout << coin << "\n"; // HTT
        return;
    }
    // recursive case
    generateCoins(i + 1, n ,coin + "H"); // Head choice -> 3, 3, "HT" 
    // i + 1 = 3, i = 2
    // "HT"
    generateCoins(i + 1, n ,coin + "T"); // Tails -> 3, 3, "HTT"
}


int main() {
	// your code goes here
	// ""
	int n;
	cin >> n;
	generateCoins(0, n , ""); // call
	
}
