//Check string rotation

#include <iostream>
using namespace std;
int main() {
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);
    if (str1.length() != str2.length()) {
        cout << "Not a rotation" << endl;
        return 0;
    }
    string combined = str1 + str1;
    if (combined.find(str2) != string::npos)
        cout << str2 << " is a rotation of " << str1 << endl;
    else
        cout << str2 << " is not a rotation of " << str1 << endl;
    return 0;
}