#include<iostream>
#include<queue>
using namespace std;

int main(){
    //syntax for max-heap
    priority_queue<int> maxi;

    //sytax for min-heap
    priority_queue<int,vector<int>,greater<int> > mini;
    maxi.push(1);
    maxi.push(2);
    maxi.push(0);
    maxi.push(4);
    maxi.push(3);
    int size=maxi.size();
    // for(int i=0 ; i<size ; i++){
    //     cout<<maxi.top()<<" ";
    //     maxi.pop();
    // }

    mini.push(5);
    mini.push(0);
    mini.push(9);
    mini.push(6);
    mini.push(2);
    int size2=mini.size();
    for(int i=0 ; i<size2 ; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl<<mini.empty();

    return 0;
}