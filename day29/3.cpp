//Menu Driven String Operations

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    int choice;

    cin.ignore();

    cout << "Enter String: ";
    getline(cin,str);

    do
    {
        cout << "\n===== STRING OPERATIONS =====\n";
        cout << "1. Display Length\n";
        cout << "2. Reverse String\n";
        cout << "3. Convert to Uppercase\n";
        cout << "4. Convert to Lowercase\n";
        cout << "5. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:

                cout << "Length = " << str.length() << endl;
                break;

            case 2:
            {
                string rev=str;
                reverse(rev.begin(),rev.end());

                cout << "Reverse = " << rev << endl;
                break;
            }

            case 3:
            {
                string temp=str;

                for(char &c:temp)
                    c=toupper(c);

                cout << temp << endl;
                break;
            }

            case 4:
            {
                string temp=str;

                for(char &c:temp)
                    c=tolower(c);

                cout << temp << endl;
                break;
            }

            case 5:

                cout << "Thank You!\n";
                break;

            default:

                cout << "Invalid Choice.\n";
        }

    }while(choice!=5);

    return 0;
}