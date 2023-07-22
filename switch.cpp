#include<iostream>
using namespace std;

int main(){
    char ch='1';
    int num=1;
    switch(ch){
        case 1:
            cout<<"first";
            break;
        case '1':
            switch(num){
                case 1: cout<<"Num is : "<<num;
                break;
            }
            break;
        case 3:
            cout<<"third";
            break;
        default:
            cout<<"none"; 
    }

    return 0;
}