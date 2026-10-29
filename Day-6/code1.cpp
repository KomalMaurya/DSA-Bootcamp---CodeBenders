#include <bits/stdc++.h>
#include <string> // string library in c++
using namespace std;

int main() {
	// your code goes here
	
    // How to initialise char ?
    // Syntax : char variable_name = 'value';
    char Letter = 'A';
    // cout << Letter;
    
    // How to initialise char array ?
    char arr[] = "CAT";
    // cout << arr[1]; // accessing the character at index 1
    
    // Traversal on character array
    for(int i = 0; i < 3; i++){
        // cout << arr[i] << " ";
    }
    
    // How to store string?
    string name = "Sanya";
    string name2 = "Kshama";
    // cout << name2[3];
    string surname = "Chadha";
    
    // display
    // cout << (name + " " + surname);
    
    // string student;
    // cin >> student; // Input 
    // cout << student;
    

    // use getline
    string student2;
    getline(cin, student2);
    // cout << student2;
    
    // String Traversal
    int n = student2.size();
    for(int i = 0; i < n; i++){
        cout << student2[i];
    }
    student2[0] = 'M'; // Update any character in a string
    cout << student2;
    
}
