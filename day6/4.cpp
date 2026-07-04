//Find x^n without pow()

#include <iostream>
using namespace std;
int main() {
    double x;
    int n;
    cout << "Enter base and exponent: ";
    cin >> x >> n;
    double result = 1;
    for (int i = 0; i < n; i++)
        result *= x;
    cout << x << "^" << n << " = " << result << endl;
    return 0;
}