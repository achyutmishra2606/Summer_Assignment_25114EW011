//Find sum and average of array

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    int sum = 0;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    double avg = (double)sum / n;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;
    return 0;
}