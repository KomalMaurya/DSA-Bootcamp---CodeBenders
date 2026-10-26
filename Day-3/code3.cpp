#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	vector<int> a = {2, 4, 7, 8, 9, 11, 12, 20};
	int target = 20;
	int n = a.size();
	
	// Perform Binary Search on the array!! 
	int low = 0;
	int high = n - 1;
	
	int flag = 0;
	
	while(low <= high){
	    // find out mid position
	    int mid = (low + high) / 2;
	    if(a[mid] == target){
	        flag = 1;
	        cout << "Target found!!!";
	        break;
	    }else{
	        if(a[mid] < target){ //.  target lies in right segment
	            low = mid + 1 ;
	        }else{ //.                target lies in left segment
	            high = mid - 1;
	        }
	    }
	}
	if(flag == 0) cout << "Target not found!!";
}
