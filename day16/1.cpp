//Find missing number in array

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size (n for array of 1 to n+1 with one missing): ";
    cin >> n;
    int arr[n - 1];
    cout << "Enter " << n - 1 << " elements: ";
    for (int i = 0; i < n - 1; i++)
        cin >> arr[i];
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    for (int i = 0; i < n - 1; i++)
        actualSum += arr[i];
    cout << "Missing number = " << expectedSum - actualSum << endl;
    return 0;
}