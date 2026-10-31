#include <bits/stdc++.h>
using namespace std;


// definition of class / Custom data Structure
class Student{
    public:
        string name;
        int age;
           
        void Student_name(){
            cout << name;
        }
    Student(string s, int a){
        name = s;
        age = a;
    }
        
};

int main() {
	// your code goes here
	
	// Define an object
	Student s1("Divya", 18);
	
// 	Student s2;
	
// 	s2.name = "Dakshita";
// 	s2.age = 17;
	
	s1.Student_name();
// 	s2.Student_name();
	
}
