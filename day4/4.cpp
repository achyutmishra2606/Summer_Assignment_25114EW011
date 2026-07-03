#include <iostream>
#include <cmath>
using namespace std;
bool isArmstrong(int n) {
    int original = n, digits = 0;
    while (original != 0) { original /= 10; digits++; }
    original = n;
    double sum = 0;
    while (original != 0) {
        int r = original % 10;
        sum += pow(r, digits);
        original /= 10;
    }
    return (int)sum == n;
}
int main() {
    int low, high;
    cout << "Enter range (low high): ";
    cin >> low >> high;
    for (int i = low; i <= high; i++)
        if (isArmstrong(i))
            cout << i << " ";
    cout << endl;
    return 0;
}