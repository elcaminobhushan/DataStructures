#include <iostream>

using namespace std;

struct node{
    int data;
    node* next;
};

node* head;


void reverse(node* p){
    if(p->next == NULL){
        head = p;
        return;
    }
    reverse(p->next);
    node* q = p->next;
    q->next = p;
    p->next = NULL;
}


