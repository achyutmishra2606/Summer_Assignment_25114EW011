//Convert decimal to binary

#include <iostream>
using namespace std;
int main() {
    int n;
    string binary = "";
    cout << "Enter decimal number: ";
    cin >> n;
    if (n == 0) binary = "0";
    while (n > 0) {
        binary = char('0' + n % 2) + binary;
        n /= 2;
    }
    cout << "Binary = " << binary << endl;
    return 0;
}