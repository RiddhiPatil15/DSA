#include <bits/stdc++.h>
using namespace std;

class Node{
        public:
        int data;
        Node *left, *right;
        
        Node(int x){
                data = x;
                left = right = nullptr;
        }
};

Node* insert(Node* root, int key){
        if(root == nullptr){
                root = new Node(key);
                return root;
        }
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty()){
                Node* temp = q.front();
                q.pop();
                
                if(temp->left == nullptr){
                        temp->left = new Node(key);
                        break;
                }
                else{
                        q.push(temp->left);
                }
                if(temp->right == nullptr){
                        temp->right = new Node(key);
                        break;
                }
                else{
                        q.push(temp->right);
                }
        }
        return root;
}

void inOrder(Node* node){
        if(node == nullptr)return;
        inOrder(node->left);
        cout<<node->data<<" ";
        inOrder(node->right);
}

int main(){
        Node* root = new Node(1);
        root->left = new Node(2);
        root->right = new Node(3);
        root->left->right = new Node(4);
        root->right->left = new Node(5);
        
        cout<<"Inorder traversal before insertion:\n";
        inOrder(root);
        cout<<endl;
        
        int key = 6;
        root = insert(root, key);
        
        cout<<"Inorder traversal after insertion:\n";
        inOrder(root);
        cout<<endl;
        
        return 0;
}
