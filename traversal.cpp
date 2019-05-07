#include <iostream>

using namespace std;

class Node{
    public:
        char data;
        Node* left, *right;
        Node(char data){
            this->data=data;
            left=right=NULL;
        }
};

void printInorder(Node *node){
    
    if(node==NULL){
        return;
    }

    printInorder(node->left);

    cout<<node->data<<" ";

    printInorder(node->right);
}

void printPostorder(Node *node){
    
    if(node==NULL){
        return;
    }

    printPostorder(node->left);


    printPostorder(node->right);
    cout<<node->data<<" ";
}

void printPreorder(Node *node){
    
    if(node==NULL){
        return;
    }

    cout<<node->data<<" ";
    printPreorder(node->left);


    printPreorder(node->right);
}


int main(){
    Node *root = new Node('1');
    root->left = new Node('2');
    root->right = new Node('3');
    root->left->left= new Node('4');
    root->left->right = new Node('5');

    cout<<"\n Inorder traversal of binary tree is \n";
    printInorder(root);
    cout<<"\n Postorder traversal of binary tree is \n";
    printPostorder(root);
    cout<<"\n Preorder traversal of binary tree is \n";
    printPreorder(root);
}