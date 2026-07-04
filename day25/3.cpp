//Sort names alphabetically

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cout << "Enter number of names: ";
    cin >> n;
    cin.ignore();
    string names[n];
    cout << "Enter " << n << " names:\\n";
    for (int i = 0; i < n; i++)
        getline(cin, names[i]);
    sort(names, names + n);
    cout << "Sorted names:\\n";
    for (int i = 0; i < n; i++)
        cout << names[i] << endl;
    return 0;
}