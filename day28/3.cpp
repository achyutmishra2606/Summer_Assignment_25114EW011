//Ticket Booking System 

#include <iostream>
using namespace std;

int main()
{
    int seats=50;
    int book;
    int choice;

    do
    {
        cout<<"\n===== TICKET BOOKING =====\n";
        cout<<"Available Seats : "<<seats<<endl;

        cout<<"1. Book Ticket\n";
        cout<<"2. Cancel Ticket\n";
        cout<<"3. Exit\n";

        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:

                cout<<"How Many Seats? ";
                cin>>book;

                if(book<=seats)
                {
                    seats-=book;
                    cout<<"Booking Successful.\n";
                }
                else
                    cout<<"Not Enough Seats.\n";

                break;

            case 2:

                cout<<"Seats to Cancel: ";
                cin>>book;

                seats+=book;

                if(seats>50)
                    seats=50;

                cout<<"Cancellation Successful.\n";

                break;

            case 3:
                cout<<"Thank You.\n";
                break;

            default:
                cout<<"Invalid Choice.\n";
        }

    }while(choice!=3);

    return 0;
}