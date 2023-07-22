//THIS IS UNDER PROCESS
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int p;
    cout<<"Enter a negative decimal no : ";
    cin>>p;
    int n=-(p);                                    //converting negative no. back to positive 
    int i=0,store=0;
    while(n!=0){                                    //this code while generate the binary equivalent of the positive integer.
        int bit=n&1;
        store=store+ (bit*pow(10,i));
        n=n>>1;
        i++;
    }
    cout<<endl<<store;                              //binary no. is stored in 'store'
    int numb=store;
    int k=0,count=0,j=0;
    while(numb!=0){                                //this loop while perform 1's complement
        int bit=numb&1;
        if(bit==0)
            count=count+ 1*(pow(10,j));
        j++;
        numb>>1;
    }
    cout<<(count || 1);
    return 0;
}