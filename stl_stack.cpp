#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;
    s.push("aaryan");
    s.push("mohit");
    s.push("dona dahiya");
    // s.pop();
    cout<<s.top();
    cout<<s.size();
    return 0;
}