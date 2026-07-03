#include <iostream>
using namespace std;
int main() {
    int n;
    bool isPrime = true;
    cout << "Enter number: ";
    cin >> n;
    if (n <= 1) isPrime = false;
    for (int i = 2; i * i <= n && isPrime; i++)
        if (n % i == 0) isPrime = false;
    if (isPrime)
        cout << n << " is Prime" << endl;
    else
        cout << n << " is not Prime" << endl;
    return 0;
}