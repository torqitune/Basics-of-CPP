#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans=0;
    int i=0;
    while(n !=0){
        int bit= n & 1;                  //bit will contain the last digit of 'n', here AND operation is happening between binary of 'n' and 1, so resutlant will also be a binary no.
        ans=(bit*pow(10,i)) + ans;
        n=n>>1;                   //right shifting binary of 'n' for the next iteration.
        i++;
    }
    cout<<ans;

    return 0;
}