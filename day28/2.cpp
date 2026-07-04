//Bank Account System

#include <iostream>
using namespace std;

int main()
{
    string name;
    int accNo;
    double balance=0;
    double amount;
    int choice;

    cout<<"Enter Account Holder Name: ";
    getline(cin,name);

    cout<<"Enter Account Number: ";
    cin>>accNo;

    do
    {
        cout<<"\n===== BANK ACCOUNT =====\n";
        cout<<"1. Deposit\n";
        cout<<"2. Withdraw\n";
        cout<<"3. Check Balance\n";
        cout<<"4. Exit\n";
        cout<<"Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:

                cout<<"Amount: ";
                cin>>amount;

                balance+=amount;

                cout<<"Deposit Successful.\n";
                break;

            case 2:

                cout<<"Amount: ";
                cin>>amount;

                if(amount<=balance)
                {
                    balance-=amount;
                    cout<<"Withdrawal Successful.\n";
                }
                else
                    cout<<"Insufficient Balance.\n";

                break;

            case 3:

                cout<<"\nAccount Holder : "<<name;
                cout<<"\nAccount Number : "<<accNo;
                cout<<"\nBalance : Rs."<<balance<<endl;

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