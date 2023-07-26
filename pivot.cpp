//This code will return the index of the pivot element from an array from which rotation has taken place. NOTE: the array is in the form of mountain.
//pre-requisite: the original array was sorted and had distinct elements , out of nowhere I decided to rotate/flip the array from a pivot , now we want to find that pivot.
//LOGIC : we find the mid element of the array , if it is greater than 1st element then it is in the increasing series A(series A: all elements are in incresing order and greater than 1st element/pivot) if the 
// mid element is less then the 1st element/pivot then it is in series B(series B: all elements are in increasing oreder but less then the pivot element ), then we  
//then we apply the binary search to check for that element.
#include<iostream>
using namespace std;

int main(){
    int array[]={8,10,17,3,4,6,7};
    int size=sizeof(array)/sizeof(array[0]);
    int low=0;
    int high=size-1;
    while(high>low){
        int mid=low+(high-low)/2;
        if(array[mid]>=array[0])
            low=mid+1;
        else    
            high=mid;
    }
    cout<<high;
    return 0;
}