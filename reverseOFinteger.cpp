//NOTE: This code works fine on online compiler but sucks in vs code.
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,sum=0,i=0;
    cout<<"Enter an integer : ";
    cin>>n;
    int numb=n;
    while(n!=0){
        int digit=n%10;
        sum=sum+digit*(pow(10,i));
        n=n/10;
        i++;
    } 
    
    int k=i-1,count=0;
    while(k>=0){
        int digit=numb%10;
        count=count+digit*(pow(10,k));
        k--;
        numb=numb/10;
    }
    cout<<count;
    return 0;
}