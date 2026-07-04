//Frequency of an element

#include <iostream>
using namespace std;
int main() {
    int n, key;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter element: ";
    cin >> key;
    int freq = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            freq++;
    cout << "Frequency of " << key << " = " << freq << endl;
    return 0;
}