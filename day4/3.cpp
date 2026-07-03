#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, original, remainder, digits = 0;
    double result = 0;
    cout << "Enter number: ";
    cin >> n;
    original = n;
    while (original != 0) {
        original /= 10;
        digits++;
    }
    original = n;
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, digits);
        original /= 10;
    }
    if ((int)result == n)
        cout << n << " is an Armstrong number" << endl;
    else
        cout << n << " is not an Armstrong number" << endl;
    return 0;
}