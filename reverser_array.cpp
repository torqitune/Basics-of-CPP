#include<iostream>
using namespace std;

int main(){
    int array[]={1,2,3,4,5,6,7};
    int size=sizeof(array)/sizeof(array[0]);
    for(int i=0; i< (size/2); i++){
        int temp= array[i];
        array[i]=array[(size-1)-i];
        array[(size-1)-i]=temp;
    }
    for(int i=0; i<size; i++){
        cout<<array[i]<<",";
    }
    cout<<"\b \b";
    

    return 0;
}