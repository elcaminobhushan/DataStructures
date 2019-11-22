#include <iostream>

using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

bool isBstUtil(node* root, int min, int max){
    if(root == NULL)
        return true;
    if(root->data > min && root->data < max && isBinarySearchTree(root->left) && isBinarySearchTree(root->right))
        return true;
    else
        return false;
}

bool isBinarySearchTree(node* root){
    return isBstUtil(node*root, INT_MIN, INT_MAX);
}
int main(){
    
}
