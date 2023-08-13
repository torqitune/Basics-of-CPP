#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(a==0 || b==0)
        return max(a,b); 
    else{
        int mx=max(a,b);
        int mn=min(a,b);
        return gcd((mx%mn),mn);
    }
    return 0;
}

int main(){
    int a=120;
    int b=66;
    int x=gcd(a,b);
    cout<<"GCD : "<<x;
    return 0;
}