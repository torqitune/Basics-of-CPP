#include<iostream>
using namespace std;
int main(){
    int i=1,sum=0;
    int n=100;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<sum;
    return 0;
}