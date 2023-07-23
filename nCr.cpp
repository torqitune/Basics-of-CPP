#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}

int main(){
    int n,r;
    cin>>n>>r;
    int ncr=( factorial(n)/( factorial(r)*factorial(n-r) ) );
    cout<<"NCR : "<<ncr;

    return 0;
}