#include<iostream>

using namespace std;

struct node
{
  int data;
  node* next;
};
node* head; //global so that we dont have to pass it as arguement to print() and insert()

void insert(int value)
{
     node* temp = new node;
    (*temp).data = value; //alt: temp->data = x;
    temp->next = head; // alt: (*temp).next = head;
    head = temp;
}

void print()
{
    node* temp = head;
    cout<<"List is: ";
    while(temp != NULL)
    {
        cout<< temp->data;
    }
    cout<<endl;
}

int main()
{
    head = NULL; //Empty list
    cout<<"How many numbers ";
    int n,x;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cout<<"Enter the number ";
        cin>>x;
        insert(x);
        print();
    }
}
