#include <bits/stdc++.h>
using namespace std;

class Node{
        public:
                int data;
                Node* next;
                
                Node(int newdata){
                        this->data = newdata;
                        this->next = nullptr;
                }
};

void Traverse(Node* head){
        while(head != nullptr){
                cout<<head->data<<" ";
                head = head->next;
        }
        cout<<endl;
}

int main(){
        Node* head = new Node(10);
        head->next = new Node(20);
        head->next->next = new Node(30);
        Traverse(head);
        return 0;
}