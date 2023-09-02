//this is compile time polymorphism
#include<iostream>
using namespace std;

class A{
    public:
    int a;
    int b;
    //this is the syntax for operator overloading , here we are using value1 of obj1 and using value2 as pass by refrence of obj2; also the existing functionality of operator does not change and an addition funcionality is added in operator overloading.
    void operator + (A &obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"Overloading : "<<value2-value1;
    }

};

int main(){
    A obj1,obj2;
    obj1.a=5;
    obj2.a=50;
    obj1+obj2;
    

    return 0;
}