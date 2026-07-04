//Find pair with given sum

#include <iostream>
using namespace std;
int main() {
    int n, targetSum;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter target sum: ";
    cin >> targetSum;
    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == targetSum) {
                cout << "Pair found: " << arr[i] << ", " << arr[j] << endl;
                found = true;
            }
        }
    }
    if (!found)
        cout << "No pair found with given sum" << endl;
    return 0;
}