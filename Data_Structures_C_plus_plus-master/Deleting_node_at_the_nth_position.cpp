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
    if( head == NULL)
    {
        head = temp;
        return;
    }    
    node* temp2 = head;
    while(temp2 != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp;
}

void print()
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data;
        temp = temp->next;
    }
    cout<<endl;
}

void Delete(int n)
{
    node* temp1 = head;
    if(n == 1)
    {
        head = temp1->next;
        delete temp1;
        return;
    }
    
    for(int i = 0; i < n-2; i++)
    temp1 = temp1->next;
    node* temp2 = temp1->next;
    temp1->next = temp2->next;
    delete temp2;
}

int main() 
{
    head = NULL; //empty list
    insert(2);
    insert(4);
    insert(6);
    insert(5); //List:2,4,6,5
    print();
    int n;
    cout<<"Enter a position";
    cin>>n;
    Delete(n);
    print();
}
