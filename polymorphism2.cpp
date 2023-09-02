//example_2 of operator overloading 
//this is compile time polymorphism
#include<iostream>
using namespace std;

class A{
    private:
    int real;
    int imag;

    public:
    //this is a parametarized constructor used to intialize values of real and imag values
    A(int real, int imag){
        this->real = real;
        this->imag = imag;
    }

    //this is operator overloading 
    void operator + (A &obj){
        int real = this->real + obj.real;
        int imag = this->imag + obj.imag;
        cout<<"Equation : "<<real<<" + "<<imag<<"i"<<endl;
    }

    void operator* (A &obj){
        cout<<this->real + obj.real;
    }
};

int main(){
    A obj1(11,22),obj2(54,67);
    
    obj1+obj2;
    obj1*obj2;

    return 0;
}