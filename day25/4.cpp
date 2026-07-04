//Sort words by length

#include <iostream>
#include <algorithm>
using namespace std;
bool compareLength(const string &a, const string &b) {
    return a.length() < b.length();
}
int main() {
    int n;
    cout << "Enter number of words: ";
    cin >> n;
    string words[n];
    cout << "Enter " << n << " words: ";
    for (int i = 0; i < n; i++)
        cin >> words[i];
    sort(words, words + n, compareLength);
    cout << "Words sorted by length:\\n";
    for (int i = 0; i < n; i++)
        cout << words[i] << endl;
    return 0;
}