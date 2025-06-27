#include <bits/stdc++.h>
using namespace std;

class Node{
        
        public:
        int data;
        Node* next;
        
        Node(int val){
                data = val;
                next = nullptr;
        }
};

Node* deleteKth(Node* head, int k){
        if(head == nullptr || k<=0) return head;
        Node* curr = head;
        Node* prev = nullptr;
        int count = 0;
        while(curr != nullptr){
                count++;
                if(count%k==0){
                        if(prev != nullptr){
                                prev->next = curr->next;
                        }
                        else head = curr->next;
                }
                else prev = curr;
                curr = curr->next;
        }
        return head;
        
}

void printLL(Node* head){
        if(head == nullptr) return;
        while(head != nullptr){
                cout<<head->data<<" ";
                head = head->next;
        }
}

int main() {
	// your code goes here
	Node* head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	head->next->next->next = new Node(40);
	head->next->next->next->next = new Node(50);
	head->next->next->next->next->next = new Node(60);
	int k = 2;
	deleteKth(head, k);
	printLL(head);
	return 0;

}
