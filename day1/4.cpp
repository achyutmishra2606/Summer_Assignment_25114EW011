//Write a program to Count digits in a number.

#include <iostream>
using namespace std;

int main(){
int n;
cout <<"Enter ther desired number" <<endl;
cin >>n;

int count = 0;
if(n == 0){
    count = 1;
}
else{
  while(n!=0){
     n = n / 10 ;
     count=count +1;
    }
}
cout<<"The number of digits in the given number is/are:" <<count <<endl;
}