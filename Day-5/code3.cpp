#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	// Transpose of a 2D  array 
	
	int n = 3;
	int m = 4;
	vector<vector<int>> a(n, vector<int>(m)); // row size = n , col size = m
	
	for(int i = 0; i < n; i++){ // row ke liye chal rha hai
	    for(int j = 0; j < m; j++){ // col ke liye chal rha hai
	        cin >> a[i][j];
	    }
	}
	
	// row converts to column ---> row = n -> after transpose -> row = m
	// column converts to row ---> col = m -> after transpose -> col = n
	
	// 4 3 1
	// 2 2 5
	// 3 1 6
	// 1 5 7
	
	for(int i = 0; i < m; i++){
	    for(int j = 0; j < n; j++){
	        cout << a[j][i] << " ";
	    }
	    cout << "\n";
	}
	
}
