//Inserting node at the nth position
#include<iostream>

using namespace std;

struct node
{
    int data;
    node* next;
};

node* head;

void insert(int data, int n)
{
     node* temp1 = new node;
    temp1->data = data;
    temp1->next = NULL;
    if(n == 1)
    {
        temp1->next = head;
        head = temp1;
        return;
    }
     node* temp2 = head;
    int i;
    for(i = 0; i < n-2; i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
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

int main() 
{
    head = NULL; //empty list
    insert(2,1);//List:2
    insert(3,2); // List: 2,3
    insert(4,1); // List:4,2,3
    insert(5,2); //List: 4,5,2,3
    print();
}
