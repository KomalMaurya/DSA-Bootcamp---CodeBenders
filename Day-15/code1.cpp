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

void LevelOrder(Node* root){ // 1
    if(root == NULL) return;
    
    queue<Node*> q;
    q.push(root); // 1 
    // [ ]
    
    while(!q.empty()){
        Node* cur = q.front(); // 5
        q.pop();
        
        cout << cur->data << " "; // 5
        
        if(cur->left) q.push(cur->left);
        if(cur->right) q.push(cur->right);
    }
    
    // Traversal : 1 2 3 4 5
}

// Height of a Tree : number of nodes on the longest path from rooot to a leaf.
int height(Node* root){ // NULL
    
    // Base case
    if(root == NULL){
        return -1;
    }
    
    // Recursive case
    int lh = height(root->left); // NULL
    int rh = height(root->right);
    
    return (1 + max(lh, rh));
}

// Diameter : Longest path between any two nodes

// Path need not necessary to pass through root Node

// Diameter may be more than one

// 3 Cases :
// 1. Longest path passes through the current Node
// 2. Longest path lies completely in the left subtree
// 3. Longest path lies completely in the right subtree

// Diameter code
int diameter(Node* root){
    if(root == NULL) return 0;
    
    int lh = height(root->left);
    int rh = height(root->right);
    
    // current node is a part of longest path
    int throughCurrentNode = 1  + 1 + lh + rh;
    
    int ld = diameter(root->left);
    int rd = diameter(root->right);
    
    return max({throughCurrentNode, ld, rd});
}

// Path Sum
// Starting point : root
// Ending point : leaf
// The sum of node values must be equal to target sum

bool hasPathSum(Node* root, int target){ // 4, 4
    if(root == NULL) return false;
    
    // Check if it is a leaf node or not
    if(root->left == NULL && root->right == NULL){
        return (target == root->data);
    }
    
    // Explore left and right subtrees
    int rem = target - root->data; // 6 - 2 = 4
    
    // recursive case
    return hasPathSum(root->left, rem) || hasPathSum(root->right, rem);
}

int main() {
	// your code goes here
	Node* root = new Node(1);
	Node* a = new Node(2);
	Node* b = new Node(3);
	Node* c = new Node(4);
	Node* d = new Node(5);
	Node* e = new Node(6);
	Node* f = new Node(7);
	
	
	root->left = a;
	root->right = b;
	a->left = c;
	a->right = d;
	d->left = e;
	b->right = f;
	
	// LevelOrder(root); // 1
	// cout << diameter(root);
	cout << hasPathSum(root, 0); // 1, 7
}
