//Finding Min and Max in a BST (Imperative Version)
//Simple program to create BST and search a value in it
#include <iostream>

using namespace std;

//Definition of node for BST
struct BstNode{
    int data;
    BstNode* left;
    BstNode* right;
};

//Function to create a node in heap
BstNode* GetNewNode(int data){
    BstNode* newNode = new BstNode;
    newNode->data = data;
    newNode->left = newNode->right = NULL;
}

//To insert data in root node, returns address of root node
BstNode* insert(BstNode* root, int data){
    if(root == NULL){
        root = GetNewNode(data);
    }
    else if(data <= root->data){
        root->left = insert(root->left, data);
    }
    else{
        root->right = insert(root->right, data);
    }
    return root;
}

//To search an element in a BST
bool search(BstNode* root, int data){
    if(root == NULL)
        return false;
    else if(data <= root->data){
        return search(root->left, data);
    }
    else return search(root->right, data);
}

int FindHeight(BstNode* root){
    if(root == NULL){
        return -1;
    }
    int LeftHeight = FindHeight(root->left);
    int RightHeight = FindHeight(root->right);
    return max(LeftHeight,RightHeight)+1;
}
int main(){

}
