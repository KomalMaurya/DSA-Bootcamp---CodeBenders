#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    
    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

void PreOrder(Node* root){ // 5
    // Node -> Left -> right
    
    // Base case : recursion
    if(root == NULL) return;
    
    cout << root->data << " ";
    
    PreOrder(root->left); // NULL 
    PreOrder(root->right); // NULL
    
    // 1  2 4  5 3 
}

void InOrder(Node* root){
    // Left -> Node -> right
    
    if(root == NULL) return;
    
    InOrder(root->left); // left
    cout << root->data << " "; // node
    InOrder(root->right); // right
    
}

void PostOrder(Node* root){
    // Left -> right -> Node
    
    if(root == NULL) return;
    
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
    
}

int main() {
	// your code goes here
	Node* root = new Node(1);
	Node* a = new Node(2);
	Node* b = new Node(3);
	Node* c = new Node(4);
	Node* d = new Node(5);
	
	root->left = a;
	root->right = b;
	a->left = c;
	a->right = d;
	
	PreOrder(root); // 1
}
