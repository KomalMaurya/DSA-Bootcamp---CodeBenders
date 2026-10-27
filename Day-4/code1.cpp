#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	// Brute force : Pair sum in a sorted array 
	vector<int> a = {1, 5, 6, 10, 23, 43};
	int target = 15;
	
	int n = a.size();
	int flag = 0;
	// n = 6 
	
	for(int i = 0; i < n; i++){  // (N times)
	   // i = 1
	   for(int j = i + 1; j < n; j++){ // (N - i) times
	       // i + 1 (initialisation)
	       // j = i + 1 = 1 + 1 =  2
	       // j = 3
	       int sum = a[i] + a[j]; // i = 1, j = 3 ----> a[1] = 5, a[3] = 10
	       // sum = 15
	       if(sum == target){ //.   15 == 15 no
	           flag = 1;
	           cout << "Target found!!!";
	           break;
	       }
	   }
	}
	if(flag == 0) cout << "Target not found!!!";
	
	
	// Code TC : O(N^2) 
}
