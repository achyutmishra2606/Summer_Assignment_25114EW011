//Cricket Score Board

#include <iostream>
using namespace std;

int main()
{
    string team;

    int overs;
    int totalRuns=0;

    cout<<"===== CRICKET SCORE BOARD =====\n";

    cout<<"Enter Team Name: ";
    getline(cin,team);

    cout<<"Enter Total Overs: ";
    cin>>overs;

    for(int i=1;i<=overs;i++)
    {
        int runs;

        cout<<"Runs in Over "<<i<<": ";
        cin>>runs;

        totalRuns+=runs;
    }

    double runRate=(double)totalRuns/overs;

    cout<<"\n===== MATCH SUMMARY =====\n";
    cout<<"Team : "<<team<<endl;
    cout<<"Runs : "<<totalRuns<<endl;
    cout<<"Overs : "<<overs<<endl;
    cout<<"Run Rate : "<<runRate<<endl;

    return 0;
}