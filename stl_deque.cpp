#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
   
    d.push_back(3);
    d.push_back(4);
    d.push_front(1);
    d.push_front(2);
    for(int i: d){
        cout<<i<<" ";
    }
    // cout<<endl<<d.at(0);
    // cout<<endl<<d.front();
    // cout<<endl<<d.back();
    d.erase(d.begin(),d.end());
    
    for(int i: d){
        cout<<i<<" ";
    }
    return 0;
}