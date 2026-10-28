#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	// [[4, 2, ,3, 1],
	// [3, 2, 1, 5],
	// [1, 5, 6, 7]]
	
// 	int [] arr
	// array<int, size> name ;
	// int name[n][m];
	
// 	vector<int> a(n);
	int n = 3;
	int m = 4;
	vector<vector<int>> a(n, vector<int>(m)); // row size = n , col size = m
	
	for(int i = 0; i < n; i++){ // row ke liye chal rha hai
	    for(int j = 0; j < m; j++){ // col ke liye chal rha hai
	        cin >> a[i][j];
	    }
	}
	
// 	for(int i = 0; i < n; i++){ // row ke liye chal rha hai
// 	    for(int j = 0; j < m; j++){
// 	       // cout << a[i][j] << " ";
// 	    }
// 	    cout << "\n";
// 	}
	
	// Row Sum in a 2-D array
	
	// Fix row index (i) and vary j (col index)
	
	// 10 11 19
	
	for(int i = 0; i < n; i++){
	    // i = 2
	    int sum = 0;
	    for(int j = 0; j < m; j++){
	        sum += a[i][j];
	    }
	   // cout << sum << " ";
	}
	
	
	
	
	// Column Sum in a 2 - D array 
	
	// 8 9 10 13
	
	for(int j = 0; j < m; j++){
	    
	    int sum = 0;
	    for(int i = 0; i < n; i++){
	        sum += a[i][j];
	    }
	   // cout << sum << " ";
	}
	
	
	// Diagonal Sum in a 2-D array
	int sum = 0;
	for(int i = 0; i < n; i++){
	    for(int j = 0; j < m; j++){
	        if(i == j){
	            // diagonal element
	            sum += a[i][j];
	        }
	    }
	}
	cout << sum ;
	
	
	// Sum of array :
// 	for(int i = 0; i < n; i++){ // O(n) -> Linear TC
// 	    sum += a[i];
// 	}
}
