//Remove duplicate characters

#include <iostream>
using namespace std;
int main() {
    string str, result = "";
    cout << "Enter a string: ";
    getline(cin, str);
    bool seen[256] = {false};
    for (int i = 0; i < str.length(); i++) {
        if (!seen[(int)str[i]]) {
            result += str[i];
            seen[(int)str[i]] = true;
        }
    }
    cout << "String after removing duplicates: " << result << endl;
    return 0;
}