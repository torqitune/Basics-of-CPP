#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// void firstFunction(){
//     cout<<"Just executed";
// }

// void scndFunction();
// void fname(string firstName){
//     cout<<"The value passed into the function is : "<<firstName;
// }

// int F_return(int x){
//     return x+4;
// }

// void swap(int &x, int &y){
//     cout<<endl<<&x<<endl;
//     int z=x;
//     x=y;
//     y=z;
// }

// void array_function(int array[]){
//     for(int i=0; i<10; i++){
//         cout<<array[i]<<",";
//     }
// }

// int add(int x,int y){
//     cout<<"Int function called.\n";
//     return x+y;
// }
// double add(double x,double y){
//     cout<<"double function called.\n";
//     return x+y;
// }

// int sum(int x){
//     if(x>0)
//         return x + sum(x-1);  
//     else
//         return 0;    
// }

int main()
{
    // cout<<sum(0);
    // cout<<"Hello this first program"<<endl;
    // cout<<"This is line 2";
    // int x=55;
    // cout<<x;

    // int y;
    // y=9;
    // y=324;
    // y=992;
    // cout<<y;
    // double x=43.543;
    // cout<<x;

    // int myAge=21;
    // cout<<"I am "<<myAge<<" years old.";

    // int a,b,c,d;
    // a=b=c=d=452;
    // cout<<a+b+c+d;

    // const int myAge=20;
    // cout<<myAge;

    // int x;
    // cout<<"Enter any no. : ";
    // cin>>x;
    // cout<<"Your entered no. is : "<<x;

    // float f=12e3;
    // cout<<f;

    // bool a=false;
    // bool b=true;
    // cout<<a<<b;

    // char BloodGroup=101;
    // cout<<BloodGroup;

    // string greet="hello This is me.";
    // cout<<greet;

    // int x=10;
    // x+=4;   // x=x+4
    // cout<<x;

    // int a=5;
    // int b=6;
    // cout<<(a<b);

    // string fname="Dona";
    // string lname="Dahiya";
    // // cout<<(fname +" " + lname);
    // cout<<(fname.append(lname));

    /*  string s="abcdefghij";
       cout<<s.length();
       cout<<s.size(); // both lenght and size works the same.
   */

    // string s="abcdefghijklmno";
    // s[6]='q';
    // cout<<s;

    // string s="It\'s me.";
    // cout<<s;

    // string s;
    // cout<<"Enter your name : ";
    // cin>>s;
    // cout<<s;

    // string s;
    // cout<<"Enter your name : ";
    // getline(cin,s);
    // cout<<s;

    // cout<<min(10,20);
    // cout<<(9.809809);

    // int votingAge=18;
    // int userAge;
    // cout<<"Enter your age : ";
    // cin>>userAge;
    // if(userAge>=votingAge)
    //     cout<<"You are eligible.\n";
    // else
    //     cout<<"OOPS! come back later.\n";

    // int voteAge = 18, userAge;
    // cout << "Your age : ";
    // cin >> userAge;
    // string s = (userAge >=voteAge) ? "Eligible" : "Oops! Ineligible";
    // cout << s;

    // char c;
    // cout<<"Enter a character : ";
    // cin>>c;

    // switch(c){
    //     case 'a':
    //         cout<<"a selected";
    //         break;
    //     case 'b':
    //         cout<<"b selected";
    //         break;
    //     case 'c':
    //         cout<<"c selected";
    //         break;
    //     default:
    //         cout<<"None of the case matched!";
    // }

    // int i=10;
    // while(i>=0){
    //     cout<<i<<endl;
    //     i--;
    // }

    // int i=0;
    // do{
    //     cout<<i;
    //     i++;
    // }
    // while(i<2);

    // for(int i=1; i<=2; i++){
    //     cout<<i<<endl;
    //     for(int j=1; j<=3; j++){
    //         cout<<"J = "<<j<<endl;
    //     }
    // }

    // int array[]={1,2,3,4,5,6,7,8,9,10};
    // for(int i : array){
    //     cout<<i<<",";
    // }

    // for(int i=0; i<=10; i++){
    //     if(i==5)
    //         break;
    //     cout<<i<<",";
    // }
    // for(int i=0; i<=10; i++){
    //     if(i==5)
    //         continue;
    //     cout<<i<<",";
    // }

    // string car[3]={"audi","merc","BMW"};
    // cout<<car[2];

    // int array[]={23,2,5,2,3,3,4,6};
    // for(int i=0; i<=5; i++){
    //     cout<<array[i];
    // }
    // for(int i : array){
    //     cout<<i;
    // }
    // cout<<(sizeof(array)/4);
    // cout<<(sizeof(array)/sizeof(int));
    // struct{
    //     int x;
    //     string s;
    // }myStruct;

    // myStruct.x=5;
    // myStruct.s="Aaryan";
    // cout<<myStruct.s;

    /*multiple variables in one structure*/

    // struct{
    //     string make;
    //     string model;
    //     int year;
    // }car1,car2;

    // car1.make="BMW";
    // car1.model="M5";
    // car1.year=2022;
    // car2.make="Audi";
    // car2.model="Q5";
    // car2.year=2020;
    // cout<<car1.make<<" "<<car1.model<<" "<<car1.year;

    // string s="Burger";
    // string p="fsaf";
    // cout<<&s;

    // string food="Coffee";
    // string* ptr=&food;
    // // cout<<ptr<<" "<<&food;
    // //cout<<*ptr; //this is called deference
    // *ptr="Green Tea";
    // cout<<*ptr;
    // cout<<food;

    // scndFunction();
    // fname("Aaryan");
    // cout<<F_return(1);
    // int a=66;
    // int b=88;
    // cout<<a<<" "<<b<<endl;
    // swap(a,b);
    // cout<<a<<" "<<b<<endl;

    // int array[]={1,2,3,4,5,6,7,8,9,10};
    // array_function(array);
    // cout<<add(2.6532545 , 4.45235325);



    return 0;
}

// void scndFunction(){
//     cout<<"In this the function defination is after main function and function declaration is at the top.";
// }

//  \n --> aka escape sequence , forces cursor to move the beginning of the next line.
// variables must be identified by uniques names , and these unique names are called identifiers.
// consnants are unchangeable and read only.
// boolean and char takes 1 byte storage.
// int takes 2 or 4_ bytes, float takes 4 byte(stores decimal values upto 6-7 digits), double takes 8 bytes(stors upto 15 decimal digits.)
// 'e' represents power of 10.
// 'cin' while reading input from user only reads one word, so to overcome this we use getline() function which reads a line of text.
// short hand if_else statement is called Ternary Operator. syntax : variable = (condition) ? expressionTrue : expressionFalse;
// for_each loop is specially for array, it traverse every element of the array.
// 'continue' skips an iteration and moves to the next iteration.
// struct (aka structures) are similar to array but unlike array , struct can strore multiple types of varibles. Objects/members/data members are accesed by '.' dot.
/* SYNTAX
    struct {             // Structure declaration
  int myNum;         // Member (int variable)
  string myString;   // Member (string variable)
} myStructure; 

*/
// A reference variable is reference to an existing variable.
// A POINTER is a variable that stores the memory address as its value.A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator. The address of the variable you're working with is assigned to the pointer
// In funtion overloading , multiple function can retain same name provided that they should have different parameters.