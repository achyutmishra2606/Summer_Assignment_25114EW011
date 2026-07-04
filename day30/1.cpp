//Hospital Management System

#include <iostream>
using namespace std;

struct Patient
{
    int id;
    string name;
    int age;
    string disease;
};

int main()
{
    Patient p[100];
    int n = 0;
    int choice;

    do
    {
        cout << "\n===== HOSPITAL MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Patient\n";
        cout << "2. Display Patients\n";
        cout << "3. Search Patient\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:

                cout << "Enter Patient ID: ";
                cin >> p[n].id;

                cin.ignore();

                cout << "Enter Name: ";
                getline(cin, p[n].name);

                cout << "Enter Age: ";
                cin >> p[n].age;

                cin.ignore();

                cout << "Enter Disease: ";
                getline(cin, p[n].disease);

                n++;

                cout << "Patient Added Successfully.\n";
                break;

            case 2:

                if(n==0)
                {
                    cout<<"No Patient Records.\n";
                    break;
                }

                for(int i=0;i<n;i++)
                {
                    cout<<"\nPatient ID : "<<p[i].id;
                    cout<<"\nName : "<<p[i].name;
                    cout<<"\nAge : "<<p[i].age;
                    cout<<"\nDisease : "<<p[i].disease<<endl;
                }

                break;

            case 3:
            {
                int id;
                bool found=false;

                cout<<"Enter Patient ID: ";
                cin>>id;

                for(int i=0;i<n;i++)
                {
                    if(p[i].id==id)
                    {
                        cout<<"\nPatient Found\n";
                        cout<<"Name : "<<p[i].name<<endl;
                        cout<<"Age : "<<p[i].age<<endl;
                        cout<<"Disease : "<<p[i].disease<<endl;
                        found=true;
                    }
                }

                if(!found)
                    cout<<"Patient Not Found.\n";

                break;
            }

            case 4:
                cout<<"Thank You!\n";
                break;

            default:
                cout<<"Invalid Choice.\n";
        }

    }while(choice!=4);

    return 0;
}