// Given an integer, return difference between product of its digits and sum of its digits
// LOGIC: whatever the integer is , we will divide it by 10 each time and then % by 10 so we get last digit, we will keep on doing this in every iteration untill our no. becomes 0, after getting the digits we can do whatever with them.
#include <iostream>
using namespace std;

int main()
{
    int n = 7281;
    int sum = 0, product = 1;
    while (n != 0)
    {
        sum = sum + (n % 10);
        product = product * (n % 10);
        n = n / 10;
    }
    cout << (product - sum);

    return 0;
}