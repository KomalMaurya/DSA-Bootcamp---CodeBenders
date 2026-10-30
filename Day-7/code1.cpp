#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	
	stack<int> st; // define a stack
 	// st.pop(); --> Runtime error
 	// cout << st.top(); --> Runtime error
 	
 	if(!st.empty()){
 	    // pop 
 	    // top
 	}

	
	
	// Add elements in this stack
	// push -> add element from top
	st.push(10);
	st.push(20);
	st.push(30);
	
	// vale of Top element in stack
	// cout << st.top(); // 30
	
	// Remove top element from stack
	st.pop(); // removed 30 from stack
	
	// cout << st.top();
	
	// to get the size of stack
 	// cout << st.size();
	
	// whether my stack is Empty or not
	cout << st.empty() ; // 0 -> false 
	

}
