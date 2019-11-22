#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool check_balance(string c){
    stack<char> s;
    int length = c.length();
    for(int i = 0; i < length; i++){
        if(c[i] == '(' || c[i] == '{' || c[i] == '[')
            s.push(c[i]);
        else{
            if (s.empty())
                return false;
            if(c[i] == ')' && s.top() == '(')
                s.pop();
            if(c[i] == '}' && s.top() == '{')
                s.pop();
            if(c[i] == ']' && s.top() == '[')
                s.pop();
        }
    }
    if (s.empty())
        return true;
    else 
        return false;
    
}

int main() {
	string myString = "({()[]}";
	cout<<check_balance(myString);
	string myString = "({()[]})";
	cout<<check_balance(myString);
}
