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

bool searchDFS(Node *root, int key){
        if(root == nullptr){
                return false;
        }
        if(root->data == key) return true;
        bool left_res = searchDFS(root->left, key);
        bool right_res = searchDFS(root->right, key);
        
        return left_res || right_res;
}

int main(){
        Node* root = new Node(1);
        root->left = new Node(2);
        root->right = new Node(3);
        root->left->right = new Node(4);
        root->right->left = new Node(5);
        
        int key = 6;
        
        if(searchDFS(root, key)){
                cout<<key<<" is found in the binary tree"<<endl;
        }
        else{
                cout<<key<<" is not found in the binary tree"<<endl;
        }
        
        return 0;
}
