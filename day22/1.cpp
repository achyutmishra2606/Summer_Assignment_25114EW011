//Check palindrome string

#include <iostream>
using namespace std;
int main() {
    string str, rev = "";
    cout << "Enter a string: ";
    getline(cin, str);
    for (int i = str.length() - 1; i >= 0; i--)
        rev += str[i];
    if (str == rev)
        cout << "The string is a Palindrome" << endl;
    else
        cout << "The string is not a Palindrome" << endl;
    return 0;
}