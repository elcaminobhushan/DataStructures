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

// To traverse the tree via Pre Order(data-left-right)
void preOrder(node* root){
    if(root == NULL)
        return;
    cout<<root->data;
    preOrder(root->left);
    preOrder(root->right);
}

// To traverse the tree via Pre Order(left-data-right)
void inOrder(node* root){
    if(root == NULL)
        return;
    inOrder(root->left);
    cout<<root->data;
    inOrder(root->right);
}

// To traverse the tree via Post Order(left-right-data)
void postOrder(node* root){
    if(root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data;
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
	//Print Nodes in Preorder. 
	cout<<"Preorder: ";
	preOrder(root);
	cout<<"\n";
	//Print Nodes in Inorder
	cout<<"Inorder: ";
	inOrder(root);
	cout<<"\n";
	//Print Nodes in Postorder
	cout<<"Postorder: ";
	postOrder(root);
	cout<<"\n";
}
