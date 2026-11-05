#include <bits/stdc++.h>
using namespace std;

// Custom Class of LinkedList
struct Node{
    int value;
    Node* next;
    Node(int x){
        value = x;
        next = NULL;
    }
};


// Traversal in a LinkedList
void printList(Node* head){
    Node* cur = head;
    while(cur != NULL){
        cout << cur->value << " ";
        cur = cur->next;
    }
    cout << "\n";
}

// insertion at the head of the LinkedList
void insertAtHead(int x, Node*& head){
    // create a new Node
    Node* newNode = new Node(x);
    // point next pointer of newNode to head
    newNode->next = head;
    // Make newNode head
    head = newNode;
}


// insertion after any prev node
void insertAfterPrev(Node*& prev, int x){
    // New Node creation
    Node* newNode = new Node(x);
    newNode->next = prev->next;
    prev->next = newNode;
}

// Insertion after tail of the LinkedList
void insertAfterTail(int x, Node*& head){
    Node* cur = head;
    while(cur->next != NULL){
        cur = cur->next;
    }
    // cur = tail
    
    Node* newNode = new Node(x);
    
    cur->next = newNode;
    cur = newNode;
}


// prev->next = cur->next
// to keep track of previous node and current node, you have to make two nodes
// cur and prev 
// delete any node from a LinkedList
void deleteNode(int x, Node*& head){
    
    Node* cur = head; // current node
    Node* prev = head; // previous node
    while(cur->next != NULL && cur->value != x){
        prev = cur;
        cur = cur->next;
    }
    prev->next = cur->next;
}


// Detect a cycle 
bool hasCycle(Node* head){
    // slow 
    // fast
    Node* slow = head;
    Node* fast = head;
    
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow == fast){
            // this LinkedList contains a cycle
            return true;
        }
    }
    return false;
}

// to find the length of cycle
int lengthOfCycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow == fast){
            int length = 1;
            fast = fast->next;
            while(fast != slow){
                fast = fast->next;
                length++;
            }
            return length;
        }
    }
    return 0;
}

// to find middle node in the LinkedList
int middleNode(Node* head){
    Node* slow = head;
    Node* fast = head;
    
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->value;
}

//kth node of the LinkedList from the end
int KthNodefromEnd(Node* head, int k){
    Node* slow = head;
    Node* fast = head;
    
    for(int i = 0; i < k; i++){
        fast = fast->next;
    }
    while(fast != NULL){
        slow = slow->next;
        fast = fast->next;
    }
    return slow->value;
}

int main() {
	// your code goes here
	// create an object with a variable name 'a' whose value would be 10
	Node* a = new Node(10); 
	Node* b = new Node(20);
	Node* c = new Node(30);
	Node* d = new Node(40);
	a->next = b;
	b->next = c;
	c->next = d;
	// cout << middleNode(a);
	cout << KthNodefromEnd(a, 2);
// 	d->next = b;
// 	bool ans = hasCycle(a);
// 	if(ans){
// 	    cout << "Contains a cycle\n";
// 	}else cout << "Doesn't contain a cycle\n";
	
// 	cout << lengthOfCycle(a) << "\n";


// 	printList(a);
// 	deleteNode(20, a);
// 	printList(a);
}