#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int a = 0, b = 1;
    if (n == 0) { cout << a; return 0; }
    for (int i = 2; i <= n; i++) {
        int next = a + b;
        a = b;
        b = next;
    }
    cout << "Nth Fibonacci term = " << b << endl;
    return 0;
}