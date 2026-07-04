//Find first repeating character

#include <iostream>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int freq[256] = {0};
    for (int i = 0; i < str.length(); i++)
        freq[(int)str[i]]++;
    char result = '\\0';
    for (int i = 0; i < str.length(); i++) {
        if (freq[(int)str[i]] > 1) {
            result = str[i];
            break;
        }
    }
    if (result != '\\0')
        cout << "First repeating character: " << result << endl;
    else
        cout << "No repeating character found" << endl;
    return 0;
}