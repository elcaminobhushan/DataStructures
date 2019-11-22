//Binary Tree- level order traversal
#include <iostream>
#include <queue>

using namespace std;

struct node{
    char data;
    node* left;
    node* right;
};

//To insert nodes in the binary tree
node* insert(node*root, int data){
    if(root == NULL){
        root = new node;
        root->data = data;
        root->left = root->right = NULL;
    }
    else if(data <= root->data)
        root->left = insert(root->left,data);
    else
        root->right = insert(root->right,data);
    return root;
}

// To traverse the tree via level order
void levelOrder(node* root){
    if(root == NULL)
        return;
    queue<node*> Q;
    Q.push(root);
    while(!Q.empty()){
        node* current = Q.front();
        Q.pop();
        cout<<current->data<<" ";
        if(current->left != NULL)
            Q.push(current->left);
        if(current->right != NULL)
            Q.push(current->right);
    }
}

int main() {
    /*Code To Test the logic
	  Creating an example tree
	                    M
			   / \
			  B   Q
			 / \   \
			A   C   Z
    */
	node* root = NULL;
	root = insert(root,'M'); root = insert(root,'B');
	root = insert(root,'Q'); root = insert(root,'Z'); 
	root = insert(root,'A'); root = insert(root,'C');
	//Print Nodes in Level Order. 
	levelOrder(root);

}
