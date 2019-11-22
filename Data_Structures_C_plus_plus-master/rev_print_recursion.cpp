#include <iostream>

using namespace std;

struct node{
    int data;
    node* next;
};


 node* Insert(node* head, int data){
    node* temp = new node;
    temp->data = data;
    temp->next = NULL;
    if(head == NULL)
        head = temp;
    else{
        node* temp1 = head;
        while(temp1->next != NULL){
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
    return head;
}

void print(node* p){
    if(p == NULL)
        return;
    cout<<p->data<<" ";
    print(p->next);
}

void reverse_print(node* p){
    if(p == NULL)
        return;
    reverse_print(p->next);
    cout<<p->data<<" ";
}

int main() {
    node* head = NULL;
    head = Insert(head,2);
    head = Insert(head,4);
    head = Insert(head,6);
    head = Insert(head,5);
    print(head);
    reverse_print(head);
	
}
