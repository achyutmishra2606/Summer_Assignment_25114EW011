//Student Result Management

#include <iostream>
using namespace std;

struct Student
{
    int roll;
    string name;
    float marks[5];
};

int main()
{
    Student s;

    float total=0, percentage;

    cout<<"===== STUDENT RESULT MANAGEMENT =====\n";

    cout<<"Enter Roll Number: ";
    cin>>s.roll;

    cin.ignore();

    cout<<"Enter Student Name: ";
    getline(cin,s.name);

    cout<<"Enter Marks of 5 Subjects:\n";

    for(int i=0;i<5;i++)
    {
        cout<<"Subject "<<i+1<<": ";
        cin>>s.marks[i];
        total+=s.marks[i];
    }

    percentage=total/5;

    cout<<"\n===== RESULT =====\n";
    cout<<"Roll Number : "<<s.roll<<endl;
    cout<<"Name : "<<s.name<<endl;
    cout<<"Total : "<<total<<"/500"<<endl;
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