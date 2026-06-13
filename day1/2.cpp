//Write a program to Print multiplication table of a given number.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter the value of n:" <<endl;
    cin >>n;
    int i = 1;
    int product = 1;
    cout<<"The multiplictaion table is:" <<endl;
     while(i<=10){
      cout <<n*i <<endl;
        i=i+1;
    }
}