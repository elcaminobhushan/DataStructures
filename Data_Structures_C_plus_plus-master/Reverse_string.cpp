//Reversal of a string using stacks
#include <iostream>
#include <string>
#include <stack>

using namespace std;

void reverse(string& a, int length){
    stack <char> s;
    //loop for push
    for(int i = 0; i < length; i++){
        s.push(a[i]);
    }
    //loop for pop
    for(int i = 0; i < length; i++){
        a[i] = s.top();
        s.pop();
    }
}

int main() {
    string a;
    cout<<"Enter a string ";
    cin>>a;
    reverse(a, a.length());
    cout<<"Output: "<<a;
	
}
/*
Time Complexity: O(n) for each loop hence O(n)
Space Complexity: Extra space used for stack hence it is also O(n)
*/
