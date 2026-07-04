//Menu Driven Array Operations

#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;
    int choice;

    cout << "Enter Number of Elements: ";
    cin >> n;

    cout << "Enter Elements:\n";
    for(int i=0;i<n;i++)
        cin >> arr[i];

    do
    {
        cout << "\n===== ARRAY OPERATIONS =====\n";
        cout << "1. Display Array\n";
        cout << "2. Find Maximum\n";
        cout << "3. Find Minimum\n";
        cout << "4. Calculate Sum\n";
        cout << "5. Search Element\n";
        cout << "6. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Array: ";
                for(int i=0;i<n;i++)
                    cout << arr[i] << " ";
                cout << endl;
                break;

            case 2:
            {
                int max=arr[0];
                for(int i=1;i<n;i++)
                    if(arr[i]>max)
                        max=arr[i];

                cout << "Maximum = " << max << endl;
                break;
            }

            case 3:
            {
                int min=arr[0];
                for(int i=1;i<n;i++)
                    if(arr[i]<min)
                        min=arr[i];

                cout << "Minimum = " << min << endl;
                break;
            }

            case 4:
            {
                int sum=0;

                for(int i=0;i<n;i++)
                    sum+=arr[i];

                cout << "Sum = " << sum << endl;
                break;
            }

            case 5:
            {
                int key;
                bool found=false;

                cout << "Enter Element: ";
                cin >> key;

                for(int i=0;i<n;i++)
                {
                    if(arr[i]==key)
                    {
                        cout << "Found at Position " << i+1 << endl;
                        found=true;
                    }
                }

                if(!found)
                    cout << "Element Not Found.\n";

                break;
            }

            case 6:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice.\n";
        }

    }while(choice!=6);

    return 0;
}