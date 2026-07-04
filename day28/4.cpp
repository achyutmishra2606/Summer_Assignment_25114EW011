//Contact Management System

#include <iostream>
using namespace std;

struct Contact
{
    string name;
    string phone;
};

int main()
{
    Contact c[100];

    int n=0;
    int choice;

    do
    {
        cout<<"\n===== CONTACT MANAGEMENT =====\n";

        cout<<"1. Add Contact\n";
        cout<<"2. Display Contacts\n";
        cout<<"3. Search Contact\n";
        cout<<"4. Exit\n";

        cout<<"Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:

                cin.ignore();

                cout<<"Name: ";
                getline(cin,c[n].name);

                cout<<"Phone: ";
                getline(cin,c[n].phone);

                n++;

                cout<<"Contact Saved.\n";
                break;

            case 2:

                if(n==0)
                {
                    cout<<"No Contacts Found.\n";
                    break;
                }

                for(int i=0;i<n;i++)
                {
                    cout<<"\nName : "<<c[i].name;
                    cout<<"\nPhone: "<<c[i].phone<<endl;
                }

                break;

            case 3:
            {
                cin.ignore();

                string search;

                cout<<"Enter Name: ";
                getline(cin,search);

                bool found=false;

                for(int i=0;i<n;i++)
                {
                    if(c[i].name==search)
                    {
                        cout<<"\nContact Found\n";
                        cout<<"Phone : "<<c[i].phone<<endl;
                        found=true;
                    }
                }

                if(!found)
                    cout<<"Contact Not Found.\n";

                break;
            }

            case 4:

                cout<<"Thank You.\n";
                break;

            default:

                cout<<"Invalid Choice.\n";
        }

    }while(choice!=4);

    return 0;
}