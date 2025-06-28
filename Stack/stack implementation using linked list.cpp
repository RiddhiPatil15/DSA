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

class Stack{
        Node* head;
        
public:
        Stack(){
                this->head = nullptr;
        }
        bool isEmpty(){
                return head ==  nullptr;
        }
        
        void push(int val){
                Node* newnode = new Node(val);
                if(!newnode) cout<<"Overflow\n";
                newnode->next = head;
                head = newnode;
        }
        void pop(){
                if(isEmpty()) cout<<"Underflow\n";
                Node* temp = head;
                head = head->next;
                delete temp;
        }
        int peek(){
                if(!isEmpty()) return head->data;
                cout<<"Empty";
                return INT_MIN;
        }
};


int main() {
	// your code goes here
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	
	cout<<"Element at the top is: "<<s.peek()<<endl;
	cout<<"Remove an element, and we get: "<<endl;
	s.pop();
	cout<<"Now the element at the top is: "<<s.peek()<<endl;
        return 0;
}
