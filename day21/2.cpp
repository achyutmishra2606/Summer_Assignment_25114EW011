//Reverse a string

#include <iostream>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int n = str.length();
    for (int i = 0, j = n - 1; i < j; i++, j--)
        swap(str[i], str[j]);
    cout << "Reversed string: " << str << endl;
    return 0;
}