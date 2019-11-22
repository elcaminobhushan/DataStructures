//Deleting node at the nth position
#include<iostream>

using namespace std;

struct node
{
    int data;
    node* next;
};

node* head;

void insert(int data)
{
    node* temp = new node;
    temp->data = data;
    temp->next = NULL;
    if(head == NULL)
    {
        head = temp;
        return;
    }
    node* temp2 = head;
    while(temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp;
}

void reverse()
{
    node *current,*prev,*next;
    current = head;
    prev = NULL;
    while( current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

void print()
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    insert(2);
    insert(4);
    insert(6);
    insert(5);
    print();
    reverse();
    print();
}
