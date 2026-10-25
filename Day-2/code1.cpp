#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
// 	int a = 5;
	// store marks of 5 students
	
// 	int student1 = 90;
// 	int student2 = 78;
// 	int student3 = 50;
// 	int student4 = 60;
// 	int student5 = 100;
	
	// store marks of 100 students
	
	//declare an array 
	// int marks[5];  .size() is not available in this type of declaration!!
	array<int, 5> marks = {}; // 0....4 
	
	
// 	marks = {0, 0, 0, 0, 0}
// 	cout << marks[5];
	
	// Update a value in an array / vector 
// 	marks[0] = marks[0] + 5;
	
	// loop : iteration
	int n = marks.size();
// 	for(int i = 0; i < n; i++){
// 	    cin >> marks[i]; // i = 1, second input 
// 	   // marks[0] = 50;
// 	   // marks[1] = 30;
// 	}
	
// 	for(int i = 0; i < n; i++){
// 	    cout << marks[i] << " ";
// 	}
	
	// declaring a vector 
	vector<int> a(5); // size = 5
	for(int i = 0; i < a.size(); i++){
	    cin >> a[i];
	}
	
	// Insert any element x at position 2
	// It can be done using .insert() function
	
	a.insert(a.begin() + 2, 20);
	
	for(int i = 0; i < a.size(); i++){
	    cout << a[i] << " ";
	}
	
	
	// sum of array
// 	int sum = 0;
// 	// n = 5
// 	for(int i = 0; i  < n; i++){
// 	    sum = sum + a[i]; // 180 + a[4] // 180 + 80 
// 	    // sum = 260
// 	}
// 	cout << sum ;
	// 
	
	
	
// 	Array : Store multiple values of same data type!!
// in c++, the size of array is fixed!!! 


}
