//Convert binary to decimal

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long binary, decimal = 0;
    int base = 1, rem;
    cout << "Enter binary number: ";
    cin >> binary;
    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * base;
        base *= 2;
        binary /= 10;
    }
    cout << "Decimal = " << decimal << endl;
    return 0;
}