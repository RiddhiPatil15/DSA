#include <iostream>
using namespace std;

struct Node{
        int data;
        Node* left;
        Node* right;
        
        Node(int val){
                data = val;
                left = right = NULL;
        }
};

int HeightOfBinaryTree(Node* root){
        if(root==NULL) return 0;
        int Hleft = HeightOfBinaryTree(root->left);
        int Hright = HeightOfBinaryTree(root->right);
        return max(Hleft, Hright) + 1;
}

int main() {
	// your code goes here
	Node* root = new Node(1);
	root->left = new Node(2);
        root->right = new Node(3);
        root->left->left = new Node(4);
        root->left->right = new Node(5);
        
        cout << "Height of tree: " << HeightOfBinaryTree(root) << endl;
        return 0;

}
