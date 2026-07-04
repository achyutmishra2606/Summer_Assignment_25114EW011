//Voting Eligibility

#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    cout << "===== Voting Eligibility System =====\n";

    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Age: ";
    cin >> age;

    if (age >= 18)
        cout << name << " is Eligible to Vote.";
    else
        cout << name << " is NOT Eligible to Vote.";

    return 0;
}