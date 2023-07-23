#include<iostream>
using namespace std;

int main(){
    int array[]={1,6,-2,8,9,1,2,-405,67,0,90};
    int min=array[0],max=array[0];
    int size = sizeof(array)/sizeof(array[0]);
    for (int i = 0; i < size; i++){
        if(array[i]<=min)
            min=array[i];
        else if(array[i]>=max)
            max=array[i];

    }
    cout<<min<<"  "<<max;
    

    return 0;
}