//Delete a node from BST
#include <iostream>

using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

//Function to find a minimum in a tree
node* findMin(node* root){
    while(root->left != NULL)
        root = root->left;
    return root;
}

node* Delete(node* root, int data){
    if(root == NULL)
        return root;
    else if(data < root->data)
        root->left = Delete(root->left, data);
    else if(data > root->data)
        root->right = Delete(root->right, data);
    else{
        //Case1: No Child
        if(root->left == NULL && root->right == NULL){
            delete root;
            root = NULL;
        }
        //Case2: One Child(right)
        else if(root->left == NULL){
            node* temp = root;
            root = root->right;
            delete temp;
        }
        //One Child(left)
        else if(root->right == NULL){
            node* temp = root;
            root = root->left;
            delete temp;
        }
        //Case 3: 2 children
        else{
            struct node* temp = findMin(root->right);
            root->data = temp->data;
			root->right = Delete(root->right,temp->data);
        }
    }
    return root;
}

//Function to visit nodes in Inorder
void Inorder(node *root) {
	if(root == NULL) return;
 
	Inorder(root->left);       //Visit left subtree
	printf("%d ",root->data);  //Print data
	Inorder(root->right);      // Visit right subtree
}
 
// Function to Insert Node in a Binary Search Tree
node* Insert(node *root,int  data) {
	if(root == NULL) {
		root = new node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = Insert(root->left,data);
	else 
		root->right = Insert(root->right,data);
	return root;
}

int main() {
	/*Code To Test the logic
	  Creating an example tree
	                    5
			   / \
			  3   10
			 / \   \
			1   4   11
    */
	node* root = NULL;
	root = Insert(root,5); root = Insert(root,10);
	root = Insert(root,3); root = Insert(root,4); 
	root = Insert(root,1); root = Insert(root,11);

	// Deleting node with value 5, change this value to test other cases
	root = Delete(root,5);

	//Print Nodes in Inorder
	cout<<"Inorder: ";
	Inorder(root);
	cout<<"\n";
}
