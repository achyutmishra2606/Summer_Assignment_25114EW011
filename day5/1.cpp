//Check strong number

#include <iostream>
using namespace std;
int factorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}
int main() {
    int n, original, sum = 0;
    cout << "Enter number: ";
    cin >> n;
    original = n;
    while (n != 0) {
        int digit = n % 10;
        sum += factorial(digit);
        n /= 10;
    }
    if (sum == original)
        cout << original << " is a Strong number" << endl;
    else
        cout << original << " is not a Strong number" << endl;
    return 0;
}