//Student Record Management

#include <iostream>
using namespace std;

struct Student
{
    int roll;
    string name;
    float marks;
};

int main()
{
    Student s[100];
    int n = 0;
    int choice;

    do
    {
        cout << "\n===== Student Record Management =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Roll Number: ";
                cin >> s[n].roll;

                cin.ignore();

                cout << "Enter Name: ";
                getline(cin, s[n].name);

                cout << "Enter Marks: ";
                cin >> s[n].marks;

                n++;
                cout << "Student Added Successfully.\n";
                break;

            case 2:
                if(n==0)
                {
                    cout<<"No Records Found.\n";
                    break;
                }

                cout<<"\nStudent Records\n";
                for(int i=0;i<n;i++)
                {
                    cout<<"\nRoll : "<<s[i].roll;
                    cout<<"\nName : "<<s[i].name;
                    cout<<"\nMarks: "<<s[i].marks<<endl;
                }
                break;

            case 3:
            {
                int roll;
                bool found=false;

                cout<<"Enter Roll Number: ";
                cin>>roll;

                for(int i=0;i<n;i++)
                {
                    if(s[i].roll==roll)
                    {
                        cout<<"\nRecord Found\n";
                        cout<<"Name : "<<s[i].name<<endl;
                        cout<<"Marks: "<<s[i].marks<<endl;
                        found=true;
                    }
                }

                if(!found)
                    cout<<"Student Not Found.\n";
            }
            break;

            case 4:
                cout<<"Thank You!\n";
                break;

            default:
                cout<<"Invalid Choice\n";
        }

    }while(choice!=4);

    return 0;
}