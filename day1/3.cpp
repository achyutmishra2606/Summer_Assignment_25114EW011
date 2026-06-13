//Write a program to Find factorial of a number.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the value of n:" <<endl;
    cin >>n;

    int i= 1;
    long long product = 1;

    while(i<=n){
        product = product*i;
        i = i + 1; 
    }
    cout<<"Factorial of a given number is :" <<product <<endl;
}