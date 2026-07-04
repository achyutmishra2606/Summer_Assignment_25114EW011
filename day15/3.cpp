//Rotate array right

#include <iostream>
using namespace std;
int main() {
    int n, d;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter rotation count: ";
    cin >> d;
    d = d % n;
    int temp[n];
    for (int i = 0; i < n; i++)
        temp[(i + d) % n] = arr[i];
    cout << "Right rotated array: ";
    for (int i = 0; i < n; i++)
        cout << temp[i] << " ";
    cout << endl;
    return 0;
}