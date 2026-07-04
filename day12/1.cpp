// Function for palindrome

#include <iostream>
using namespace std;
bool isPalindrome(int n) {
    int original = n, rev = 0;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return original == rev;
}
int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    if (isPalindrome(n))
        cout << n << " is a Palindrome" << endl;
    else
        cout << n << " is not a Palindrome" << endl;
    return 0;
}