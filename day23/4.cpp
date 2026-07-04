//Find maximum occurring character

#include <iostream>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int freq[256] = {0};
    for (int i = 0; i < str.length(); i++)
        freq[(int)str[i]]++;
    int maxFreq = 0;
    char result;
    for (int i = 0; i < str.length(); i++) {
        if (freq[(int)str[i]] > maxFreq) {
            maxFreq = freq[(int)str[i]];
            result = str[i];
        }
    }
    cout << "Maximum occurring character: " << result 
         << " (" << maxFreq << " times)" << endl;
    return 0;
}