
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void playGame() {
    srand(time(0)); // seed random number generator

    int guess, number;

    cout << "\n======= Number Guessing Game =======\n";
    cout << "Guess a number between 0 and 9.\n";
    cout << "Type -1 to return to the main menu.\n";

    while (true) {
        number = rand() % 10;
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == -1) break;

        if (guess < 0 || guess > 9) {
            cout << "Please guess a number between 0 and 9.\n";
            continue;
        }

        if (guess == number) {
            cout << "🎉 Congratulations! You guessed it right.\n";
        } else {
            cout << "❌ Wrong guess. The correct number was " << number << ". Try again!\n";
        }
    }
}
