#include<iostream>
#include <cstring>
using namespace std;


//creating a class
class Hero{
    //this is one of the property of the class
    
    private:
    int Health;

    public:
    char Level;
    char *name;
    //this is a static data member is accessible throughout the class , NOTE: it can be  accessed without an object being created and it should be used by class only as it is for class.
    static int TimeRemaining;


    //this is a constructor.
    Hero(){
        // cout<<"This is a constructor , and constructor has same name as of class name, constructor is called automatically whenever the object is created."<<endl;
        name = new char[10];

    }

    //Parameterized constructor
    // Hero(int Health){
    //     //we use 'this' keyword as it points to current object, i.e 'this' store the addres of current object.
    //     this->Health=Health;
    //     cout<<"Address of this : "<<this<<endl;
    // }

    //this is again a parameterized constructor
    Hero(int Health,char Level){
        this->Health=Health;
        this->Level=Level;
    }

    //creating our own copy constructor
    //here we are passing our object as refrence and not a value, bcoz if we pass by value then a copy of object will be passed to the function and function will again try to create a copy constructor so it will stuck in infinite loop, so to avoid this we pass value by reference.
    // Hero(Hero &temp){
    //     this->Health=temp.Health;
    //     this->Level=temp.Level;
    // }

    int getHealth(){
        return Health;
    }

    char getLevel(){
        return Level;
    }

    void setHealth(int h){
        Health=h;
    }

    void setLevel(char l){
        Level=l;
    }


    void print(){
        cout<<"Name : "<<this->name;
        cout<<"\nHealth : "<<this->Health;
        cout<<"\nLevel : "<<this->Level<<endl<<endl;
    }

    void setName(char name[]){
        strcpy(this->name , name);
    }

    //creating a static function , NOTE: static functio can only access to static data members only.
    static int xyz(){
        return TimeRemaining;
    }


    //this is how we define a destructor, NOTE: destructor is called automatically for static objects , and to call for dynamic objects we have to call explicitly using keyword 'delete'
    ~Hero(){
        cout<<"Destructor called\n"<<endl;
    }
    
};

int Hero :: TimeRemaining=10;

int main(){
    //creating an object of this class
    // Hero aaryan;

    // cout<<Hero :: TimeRemaining<<endl;
    cout<<Hero::xyz();



    //static allocation
    // Hero aaryan;
    // aaryan.setHealth(100);
    // aaryan.setLevel('A');
    // cout<<"Health : "<<aaryan.getHealth();
    // cout<<"Address of aaryan : "<<&aaryan;
    // char name[10]="Baryan";
    // aaryan.setName(name);

    // aaryan.print();

    // aaryan.setName("mohit");

    // Hero h2(aaryan);
    // h2=aaryan;
    // h2.print();


    //this is a copy constructor , as it is copying the data into another object.
    // Hero mohit(aaryan);
    // mohit.print();


    //dynamic allocation
    // Hero *b=new Hero;

    // cout<<sizeof(&b);
    // b->Level='C';
    // b->setHealth(69);

    // cout<<"Health : "<<b->getHealth()<<endl;
    // cout<<"Level : "<<b->Level<<endl;


    // aaryan.setHealth(100);
    // aaryan.Level='A';
    // cout<<"Health : "<<aaryan.getHealth()<<endl;
    // cout<<"Level : "<<aaryan.Level<<endl;




    // cout<<sizeof(aaryan)<<endl;
    // aaryan.Health=100;
    // aaryan.Level='A';

    // cout<<"Health : "<<aaryan.Health<<endl;
    // cout<<"Level : "<<aaryan.Level<<endl;

    // aaryan.setHealth(100);
    // aaryan.setLevel('A');

    // cout<<"Health : "<<aaryan.getHealth()<<endl;
    // cout<<"Level : "<<aaryan.getLevel()<<endl;

    // aaryan.print();




    //creating static object
    Hero a;

    //creating dynamic object;
    Hero *b = new Hero();

    //for dynamic objects we call destructor manually
    delete b;


    return 0;
}




//We have 3 access modifiers public , private and protected, Public : our properties can accessed within class and outside class both, in Private 
// properties can only be accessed within the class 
//if any data member in the class is private then we can use get and set function to read and manipulate its values.