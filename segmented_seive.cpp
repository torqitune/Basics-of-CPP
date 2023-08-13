//segmented seive (you need to understand seive of erastosthenes first)
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main(){
    //defined range (both are exclusive)
    int L=10;
    int R=16;
    vector<bool> temp(sqrt(R)+1,true);      //making a vector which will store the value till sqrt(R) 
    temp[0]=temp[1]=false;                  //marking no. 0 and 1 as non prime no.s
    vector<bool> dummy(R-L+1,true);         //making a dummy vector which will store whether the no.s in the given range are prime or not.
    for(int i=2 ; i<=sqrt(R) ; i++){        //generate a prime no. from the range 2 to sqrt(R) and mark all its multiple non-prime in the dummy vector
        if(temp[i]==true){                  //check if current generate no. is prime or not,if prime proceed further mark all its multiples non-prime
            for(int k=0 ; k<(R-L+1); k++){
                if((k+L)%i == 0)            //inside this loop the check if the elements are multiple of generated prime no. or not, if they are multiple then mark them non-prime
                    dummy[k]=false;
            }
            for(int j=2*i ; j<=sqrt(R) ; j=j+i){        //this loop is to update the temp vector so that in next iteration we get a new prime no.
                temp[j]=false;
            }
        }
    }
    
    for(int i=0 ; i<(R-L+1) ; i++){         //this loop will check true values in dummy if generate corresponding prime no. associated to dummy vector.
        if(dummy[i]==true)
            cout<<(i+L)<<endl;
    }
    return 0;
}