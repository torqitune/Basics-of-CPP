#include<iostream>
using namespace std;

int partition(int *arr,int left,int right){
    int pivot=arr[left];                                //here we are setting pivot as the first element
    int start=left;
    int end=right;
    while(start<end){
        while(arr[start]<=pivot){                       //after this loop terminates start will be pointing to element which is greater then the pivot element and needs to be swapped.
            start++;
        } 
        while(arr[end]>pivot){                           //after this loop terminates end will be pointing to element which is less then the pivot element and needs to be swapped.
            end--;
        }
        if(start<end){
            swap(arr[start],arr[end]);                  //here we swap the elements so that they now ordered correcty compared to the pivot.
        } 
    }
    swap(arr[left],arr[end]);                           //at last we swap the pivot element to end position, i.e we have now placed the pivot element to its correct poisition.
    return end;                                         //return the index of the pivot element.

}

void quickSort(int *arr,int start, int end){
    if(start<end){          //if atleast two elements are there than only proceed further bcoz, if we have 1 element then it is already sorted
        int pivot = partition(arr,start,end);       //this will return the index of the partition, also our chosen pivot element will also situated at its correct position in this funcion, i.e elements to left of pivot will be less then it(although may not be sorted) and elements to right of this pivot will be greater then it (although may not be sorted.)
        quickSort(arr,start,pivot-1);               //sorting or setting the pivot element to its correct position , this function will set/sort the left part.
        quickSort(arr,pivot+1,end);                 //sorting or setting the pivot element to its correct position , this function will set/sort the right part.
    }
}

int main(){
    int arr[]={9,8,0,-1,7,6,5,4,3,2,1,-20,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    //print array.
    for(auto x:arr){
        cout<<x<<" ";
    }

    return 0;
}