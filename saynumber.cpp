#include<iostream>
#include<map>
using namespace std;

void recur(int n,map<int,string> m){
    if(n==0)
        return ;
    int digit=n%10;
    n=n/10;
    recur(n,m);
    cout<<m[digit]<<" ";
}

int main(){
    int n=10001; 
    
    map<int,string> m;
    m[0]="zero";
    m[1]="one";
    m[2]="two";
    m[3]="three";
    m[4]="four";
    m[5]="five";
    m[6]="six";
    m[7]="seven";
    m[8]="eight";
    m[9]="nine";
    m[10]="ten";
    
    //LOGIC-1
    //reverse the no.
    // int sum=0;
    // while(n!=0){
    //     int lastdigit=n%10;
    //     sum=sum*10+lastdigit;
    //     n=n/10;
    // }

    // //traversing this reverse digit in sum and printing corresponding string associated to digit.
    // while(sum!=0){
    //     int digit = sum % 10;
    //     cout<<m[digit]<<" ";
    //     sum=sum/10;
    // }


    //LOGIC 2
    // while(n!=0){
    //     int digit = n%10;
    //     cout<<m[digit]<<" ";
    //     n=n/10;
    // }


    //LOGIC-3 
    recur(n,m);

    return 0;
}