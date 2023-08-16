//In this we will check if the given array is sorted or not using recursion.
#include<iostream>
using namespace std;

bool recur(int arr[],int size){
    if(size==0 || size==1)
        return true;
    if(arr[0]>arr[1])
        return false;
    return recur(arr+1,size-1);
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<recur(arr,size);

    return 0;
}