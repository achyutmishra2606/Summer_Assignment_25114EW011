//Quiz Application

#include <iostream>
using namespace std;

int main() {

    int score = 0;
    char ans;

    cout << "===== Simple Quiz =====\n\n";

    cout << "Q1. Capital of India?\n";
    cout << "A. Mumbai\n";
    cout << "B. Delhi\n";
    cout << "C. Kolkata\n";
    cout << "D. Chennai\n";
    cin >> ans;

    if(ans=='B' || ans=='b')
        score++;

    cout << "\nQ2. C++ was developed by?\n";
    cout << "A. Dennis Ritchie\n";
    cout << "B. James Gosling\n";
    cout << "C. Bjarne Stroustrup\n";
    cout << "D. Guido van Rossum\n";
    cin >> ans;

    if(ans=='C' || ans=='c')
        score++;

    cout << "\nQ3. 10 + 20 = ?\n";
    cout << "A. 10\n";
    cout << "B. 20\n";
    cout << "C. 40\n";
    cout << "D. 30\n";
    cin >> ans;

    if(ans=='D' || ans=='d')
        score++;

    cout << "\nQ4. Which loop executes at least once?\n";
    cout << "A. for\n";
    cout << "B. while\n";
    cout << "C. do-while\n";
    cout << "D. None\n";
    cin >> ans;

    if(ans=='C' || ans=='c')
        score++;

    cout << "\nQ5. Size of int (generally)?\n";
    cout << "A. 4 Bytes\n";
    cout << "B. 8 Bytes\n";
    cout << "C. 2 Bytes\n";
    cout << "D. 1 Byte\n";
    cin >> ans;

    if(ans=='A' || ans=='a')
        score++;

    cout << "\n========================\n";
    cout << "Your Score = " << score << "/5\n";

    if(score==5)
        cout << "Excellent!\n";
    else if(score>=3)
        cout << "Good Job!\n";
    else
        cout << "Needs Improvement.\n";

    return 0;
}