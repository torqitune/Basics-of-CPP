#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> li;
    li.push_back(3);
    li.push_front(2);
    li.push_front(1);
    for(int i:li){
        cout<<i<<" ";
    }
    // cout<<endl<<li.size();

    // li.erase(li.begin());
    list<int> n(li);         //copy elements to this list.
    cout<<endl;
    for(int i:n){
        cout<<i<<" ";
    }
    
    return 0;
}