//Function for Armstrong

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
    int n;
    cout << "Enter number: ";
    cin >> n;
    if (isArmstrong(n))
        cout << n << " is Armstrong" << endl;
    else
        cout << n << " is not Armstrong" << endl;
    return 0;
}