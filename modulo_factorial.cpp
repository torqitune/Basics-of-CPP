#include<iostream>
using namespace std;
const int m = 100000007;
long long factorial(int n){
    if(n>1)
        return (n*factorial(n-1))%m;
    else
        return 1;
}

int main(){
    int n=200;
    cout<<factorial(n);
    return 0;
}