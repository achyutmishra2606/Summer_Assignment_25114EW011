//Find common characters in strings

 #include <iostream>
using namespace std;
int main() {
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);
    int freq1[256] = {0}, freq2[256] = {0};
    for (char c : str1) freq1[(int)c]++;
    for (char c : str2) freq2[(int)c]++;
    cout << "Common characters: ";
    for (int i = 0; i < 256; i++) {
        int minFreq = min(freq1[i], freq2[i]);
        for (int j = 0; j < minFreq; j++)
            cout << (char)i << " ";
    }
    cout << endl;
    return 0;
}