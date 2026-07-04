//Marksheet Generation

#include <iostream>
using namespace std;

int main()
{
    string name;
    int roll;

    float m1,m2,m3,m4,m5;
    float total,percentage;

    cout<<"===== Marksheet Generation =====\n";

    cout<<"Enter Student Name: ";
    cin.ignore();
    getline(cin,name);

    cout<<"Enter Roll Number: ";
    cin>>roll;

    cout<<"Enter Marks of Subject 1: ";
    cin>>m1;

    cout<<"Enter Marks of Subject 2: ";
    cin>>m2;

    cout<<"Enter Marks of Subject 3: ";
    cin>>m3;

    cout<<"Enter Marks of Subject 4: ";
    cin>>m4;

    cout<<"Enter Marks of Subject 5: ";
    cin>>m5;

    total=m1+m2+m3+m4+m5;
    percentage=total/5;

    cout<<"\n========== MARKSHEET ==========\n";
    cout<<"Name : "<<name<<endl;
    cout<<"Roll Number : "<<roll<<endl;

    cout<<"Total Marks : "<<total<<"/500"<<endl;
    cout<<"Percentage : "<<percentage<<"%"<<endl;

    if(percentage>=90)
        cout<<"Grade : A+\n";
    else if(percentage>=80)
        cout<<"Grade : A\n";
    else if(percentage>=70)
        cout<<"Grade : B\n";
    else if(percentage>=60)
        cout<<"Grade : C\n";
    else if(percentage>=40)
        cout<<"Grade : D\n";
    else
        cout<<"Grade : F\n";

    if(percentage>=40)
        cout<<"Result : PASS\n";
    else
        cout<<"Result : FAIL\n";

    return 0;
}