//Number GuessingGame

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int number = rand() % 100 + 1;
    int guess, attempts = 0;

    cout << "===== Number Guessing Game =====\n";
    cout << "Guess a number between 1 and 100\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > number)
            cout << "Too High!\n";
        else if (guess < number)
            cout << "Too Low!\n";
        else
            cout << "Congratulations! You guessed it in "
                 << attempts << " attempts.\n";

    } while (guess != number);

    return 0;
}