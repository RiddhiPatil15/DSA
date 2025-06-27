#include <bits/stdc++.h>
using namespace std;

class Node{
        public:
                int data;
                Node* next;
                
                Node(int val){
                        this->data = val;
                        this->next = nullptr;
                }
};

int getMiddle(Node* head){
        Node* slow = head;
        Node* fast = head;
        while(fast != NULL && fast->next != NULL){
                fast = fast->next->next;
                slow = slow->next;
        }
        return slow->data;
}

// void printLL(Node* head){
//         if(head == nullptr)return;
//         cout<<head->data<<" ";
//         head = head->next;
// }

int main() {
	// your code goes here
	Node* head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
        head->next->next->next = new Node(40);
        head->next->next->next->next = new Node(50);
        head->next->next->next->next->next = new Node(60);
        //printLL(head);
        cout<<getMiddle(head);
        return 0;
}
