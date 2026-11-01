#include <bits/stdc++.h>
using namespace std;


// merge sort 


void merge(vector<int>&a, int l, int mid, int r){
    vector<int> temp;
    int i = l;
    // [l,..... mid] [mid + 1, ....r]
    int j = mid + 1;
    
    while(i <= mid && j <= r){
        if(a[i] <= a[j]){
            temp.push_back(a[i]);
            i++;
        }else{
            temp.push_back(a[j]);
            j++;
        }
    }
    
    while(i <= mid){
        temp.push_back(a[i]);
        i++;
    }
    while(j <= r){
        temp.push_back(a[j]);
        j++;
    }
    
    // 
    for(int i = l; i <= r; i++){
        a[i] = temp[i - l];
        // temp.size = 2
        // a = 4
    }
}


void mergeSort(vector<int>&a, int l, int r){
    // base case
    
    if(l >= r) return;
    
    // recursive case
    // divide
    int mid = (l + r) / 2;
    mergeSort(a, l, mid);
    mergeSort(a, mid + 1, r);
    
    
    // [2] , [1], [6], [4]
    merge(a, l, mid, r);
}

int main() {
	// your code goes here
	
	// {}
	vector<int> a= {8 , 3  ,6 , 2 , 7 , 1 , 5 , 4};
	int n = 8;
	mergeSort(a, 0, n - 1);
	for(int i = 0; i < n; i++){
	    cout << a[i] << " ";
	}
}
