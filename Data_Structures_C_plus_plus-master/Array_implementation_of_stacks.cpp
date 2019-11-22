//Array implementation of stacks
#include <iostream>

using namespace std;

#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;

void push(int x){
    if(top == MAX_SIZE -1){
        cout<<"ERROR: Stack Overflow";
        return;
    }
    A[++top] = x;
}

void pop(){
    if(top == -1){
        cout<<"ERROR: No element in stack to pop";
        return;
    }
    top--;
}

int peek(){
    
    return A[top];
}

void IsEmpty(){
    if(top == -1)
        cout<<"Stack is empty";
    else 
        cout<<"Stack is not empty";
}

void print(){
    cout<<"Stack:";
    for(int i = 0; i <= top; i++)
        cout<<A[i]<<" ";
    cout<<endl;
}

int main() {
	IsEmpty();
	push(2);
	push(4);
	push(6);
	push(5);
	print();
	cout<<peek();
	
}
