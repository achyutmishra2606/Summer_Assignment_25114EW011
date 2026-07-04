//Union of arrays

#include <iostream>
using namespace std;
int main() {
    int n1, n2;
    cout << "Enter size of first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter " << n1 << " elements: ";
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];
    cout << "Enter size of second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter " << n2 << " elements: ";
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];
    int result[n1 + n2];
    int k = 0;
    for (int i = 0; i < n1; i++) {
        bool exists = false;
        for (int j = 0; j < k; j++)
            if (result[j] == arr1[i]) exists = true;
        if (!exists) result[k++] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        bool exists = false;
        for (int j = 0; j < k; j++)
            if (result[j] == arr2[i]) exists = true;
        if (!exists) result[k++] = arr2[i];
    }
    cout << "Union: ";
    for (int i = 0; i < k; i++)
        cout << result[i] << " ";
    cout << endl;
    return 0;
}