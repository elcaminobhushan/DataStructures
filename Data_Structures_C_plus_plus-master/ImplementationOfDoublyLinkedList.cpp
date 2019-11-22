//Doubly linked list implementation
#include <iostream>

using namespace std;

struct node{
    node* prev;
    int data;
    node* next;
};

node* head = NULL;

node* GetNewNode(int data){
    node* newnode = new node;
    newnode->data = data;
    newnode->prev = NULL;
    newnode->next = NULL;
    return newnode;
}

void InsertAtHead(int data){
    node* newnode = GetNewNode(data);
    if(head == NULL){
        head = newnode;
        return;
    }
    else{
        head->prev = newnode;
        newnode->next = head;
        head = newnode;
    }
}

void print(){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void RevPrint(){
    node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
    
}

int main() {
	InsertAtHead(5);
	InsertAtHead(6);
	InsertAtHead(4);
	InsertAtHead(2);
	print();
	RevPrint();
	
}
