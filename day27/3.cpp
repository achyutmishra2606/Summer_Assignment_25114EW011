//Salary Management

#include <iostream>
using namespace std;

struct Employee
{
    int id;
    string name;
    float basicSalary;
    float bonus;
};

int main()
{
    Employee emp;
    float totalSalary;

    cout<<"===== Salary Management System =====\n";

    cout<<"Enter Employee ID: ";
    cin>>emp.id;

    cin.ignore();

    cout<<"Enter Employee Name: ";
    getline(cin,emp.name);

    cout<<"Enter Basic Salary: ";
    cin>>emp.basicSalary;

    cout<<"Enter Bonus: ";
    cin>>emp.bonus;

    totalSalary=emp.basicSalary+emp.bonus;

    cout<<"\n===== Salary Slip =====\n";
    cout<<"Employee ID : "<<emp.id<<endl;
    cout<<"Employee Name : "<<emp.name<<endl;
    cout<<"Basic Salary : "<<emp.basicSalary<<endl;
    cout<<"Bonus : "<<emp.bonus<<endl;
    cout<<"Total Salary : "<<totalSalary<<endl;

    return 0;
}