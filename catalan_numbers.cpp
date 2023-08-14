#include<iostream>
using namespace std;

long long fact(int n){
    if(n>1)
        return n*fact(n-1);
    else
        return 1;
}

int main(){
    int n=9;
    for(int i=0 ; i<n ; i++){
    cout<< fact(2*i) / ( fact(i+1) * fact(i) )<<" ";
    }
    return 0;
}