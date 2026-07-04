//Count words in a sentence

#include <iostream>
#include <sstream>
using namespace std;
int main() {
    string str, word;
    cout << "Enter a sentence: ";
    getline(cin, str);
    stringstream ss(str);
    int count = 0;
    while (ss >> word)
        count++;
    cout << "Number of words = " << count << endl;
    return 0;
}