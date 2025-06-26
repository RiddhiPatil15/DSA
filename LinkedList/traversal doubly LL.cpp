#include <bits/stdc++.h>
using namespace std;

struct Node{
        int data;
        Node* prev;
        Node* next;
        
        Node(int val){
                data = val;
                prev = next = nullptr;
        }
};

void Forward(Node* head){
        if(head == nullptr) return;
        cout<<head->data<<" ";
        Forward(head->next);
}

void Backward(Node* node){
        if(node == nullptr) return;
        cout<<node->data<<" ";
        Backward(node->prev);
}
int main(){
        Node* head = new Node(10);
        Node* sec = new Node(20);
        Node* thi = new Node(30);
        
        head->next = sec;
        sec->prev = head;
        sec->next = thi;
        thi->prev = sec;
        
        cout<<"Forward: "<<endl;
        Forward(head);
        cout<<endl;
        cout<<"Backward: "<<endl;
        Backward(thi);
        
        return 0;
}