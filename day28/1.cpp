//Library Management

#include <iostream>
using namespace std;

struct Book
{
    int id;
    string title;
    string author;
    bool issued;
};

int main()
{
    Book book[100];
    int n = 0, choice;

    do
    {
        cout << "\n===== LIBRARY MANAGEMENT =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:

                cout<<"Book ID: ";
                cin>>book[n].id;

                cin.ignore();

                cout<<"Book Title: ";
                getline(cin,book[n].title);

                cout<<"Author: ";
                getline(cin,book[n].author);

                book[n].issued=false;

                n++;

                cout<<"Book Added Successfully.\n";
                break;

            case 2:

                if(n==0)
                {
                    cout<<"No Books Available.\n";
                    break;
                }

                for(int i=0;i<n;i++)
                {
                    cout<<"\nBook ID : "<<book[i].id;
                    cout<<"\nTitle : "<<book[i].title;
                    cout<<"\nAuthor : "<<book[i].author;

                    if(book[i].issued)
                        cout<<"\nStatus : Issued\n";
                    else
                        cout<<"\nStatus : Available\n";
                }

                break;

            case 3:
            {
                int id;
                bool found=false;

                cout<<"Enter Book ID: ";
                cin>>id;

                for(int i=0;i<n;i++)
                {
                    if(book[i].id==id)
                    {
                        found=true;

                        if(book[i].issued)
                            cout<<"Book Already Issued.\n";
                        else
                        {
                            book[i].issued=true;
                            cout<<"Book Issued Successfully.\n";
                        }
                    }
                }

                if(!found)
                    cout<<"Book Not Found.\n";

                break;
            }

            case 4:
            {
                int id;
                bool found=false;

                cout<<"Enter Book ID: ";
                cin>>id;

                for(int i=0;i<n;i++)
                {
                    if(book[i].id==id)
                    {
                        found=true;
                        book[i].issued=false;
                        cout<<"Book Returned Successfully.\n";
                    }
                }

                if(!found)
                    cout<<"Book Not Found.\n";

                break;
            }

            case 5:
                cout<<"Thank You!\n";
                break;

            default:
                cout<<"Invalid Choice.\n";
        }

    }while(choice!=5);

    return 0;
}