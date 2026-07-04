//Hotel Management System

#include <iostream>
using namespace std;

struct Room
{
    int roomNo;
    bool booked;
};

int main()
{
    Room room[10];

    for(int i=0;i<10;i++)
    {
        room[i].roomNo=i+1;
        room[i].booked=false;
    }

    int choice, num;

    do
    {
        cout<<"\n===== HOTEL MANAGEMENT =====\n";
        cout<<"1. View Rooms\n";
        cout<<"2. Book Room\n";
        cout<<"3. Checkout Room\n";
        cout<<"4. Exit\n";
        cout<<"Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:

                for(int i=0;i<10;i++)
                {
                    cout<<"Room "<<room[i].roomNo<<" : ";

                    if(room[i].booked)
                        cout<<"Booked\n";
                    else
                        cout<<"Available\n";
                }

                break;

            case 2:

                cout<<"Enter Room Number: ";
                cin>>num;

                if(num>=1 && num<=10)
                {
                    if(room[num-1].booked)
                        cout<<"Already Booked.\n";
                    else
                    {
                        room[num-1].booked=true;
                        cout<<"Room Booked Successfully.\n";
                    }
                }
                else
                    cout<<"Invalid Room Number.\n";

                break;

            case 3:

                cout<<"Enter Room Number: ";
                cin>>num;

                if(num>=1 && num<=10)
                {
                    room[num-1].booked=false;
                    cout<<"Checkout Successful.\n";
                }
                else
                    cout<<"Invalid Room Number.\n";

                break;

            case 4:
                cout<<"Thank You.\n";
                break;

            default:
                cout<<"Invalid Choice.\n";
        }

    }while(choice!=4);

    return 0;
}