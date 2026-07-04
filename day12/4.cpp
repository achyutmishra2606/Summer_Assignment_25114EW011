//Function for perfect number

#include <iostream>
using namespace std;
bool isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            sum += i;
    return sum == n && n != 0;
}
int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    if (isPerfect(n))
        cout << n << " is a Perfect number" << endl;
    else
        cout << n << " is not a Perfect number" << endl;
    return 0;
}