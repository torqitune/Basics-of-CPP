//In this we will find the sum of array elements using recursion 
#include<iostream>
using namespace std;

int recur(int arr[],int size){
    if(size==0)
        return 0;
    else if(size==1)
        return arr[0];
    return  arr[0] + recur(arr+1,size-1);
}

int main(){
    int arr[]={2,4,9,9,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<recur(arr,size);

    return 0;
}