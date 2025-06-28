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

void inOrder(Node* node){
        if(node == nullptr)return;
        inOrder(node->left);
        cout<<node->data<<" ";
        inOrder(node->right);
}

void preOrder(Node* node){
        if(node == nullptr) return;
        cout<<node->data<<" ";
        preOrder(node->left);
        preOrder(node->right);
}

void postOrder(Node* node){
        if(node == nullptr)return;
        postOrder(node->left);
        postOrder(node->right);
        cout<<node->data<<" ";
}

void BFS(Node* root){
        if(root == nullptr)return;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
                Node* node = q.front();
                q.pop();
                cout<<node->data<<" ";
                if(node->left != nullptr) q.push(node->left);
                if(node->right != nullptr) q.push(node->right);
        }
}

int main(){
        Node* root = new Node(1);
        root->left = new Node(2);
        root->right = new Node(3);
        root->left->right = new Node(4);
        root->right->left = new Node(5);
        
        cout<<"Inorder traversal:\n";
        inOrder(root);
        cout<<endl;
        cout<<"Preorder traversal:\n";
        preOrder(root);
        cout<<endl;
        cout<<"Postorder traversal:\n";
        postOrder(root);
        cout<<endl;
        cout<<"BFS: \n";
        BFS(root);
        
        return 0;
}
