#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	// Two - pointer : Pair sum in a sorted array
	
	vector<int> a = {1, 5, 6, 10, 23, 43};
	int n = a.size();
	
	int target = 2;
	
	int i = 0;
	int j = n - 1;
	int flag = 0;
	while(i < j){
	    int sum = a[i] + a[j];
	    
	    if(sum == target){
	        flag = 1;
	        cout << "Target found!!";
	        break;
	    }
	    if(sum > target){
	        j--;
	    }else if(sum < target){
	        i++;
	    }
	}
	if(flag == 0) cout << "Target not found!!";
	
	// TC : O(N) 
	
}
