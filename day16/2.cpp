//Find maximum frequency element

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int maxFreq = 0, maxElement = arr[0];
    for (int i = 0; i < n; i++) {
        int freq = 0;
        for (int j = 0; j < n; j++)
            if (arr[j] == arr[i])
                freq++;
        if (freq > maxFreq) {
            maxFreq = freq;
            maxElement = arr[i];
        }
    }
    cout << "Maximum frequency element = " << maxElement 
         << " (frequency = " << maxFreq << ")" << endl;
    return 0;
}