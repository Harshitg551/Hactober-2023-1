#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int secretNumber, userGuess, attempts = 0;

    // Initialize random seed
    srand(time(0));

    // Generate a random number between 1 and 100
    secretNumber = rand() % 100 + 1;

    cout << "Welcome to Guess the Number Game!\n";
    cout << "I'm thinking of a number between 1 and 100.\n";

    do {
        cout << "\nEnter your guess: ";
        cin >> userGuess;

        attempts++;

        if (userGuess < secretNumber)
            cout << "Too low! Try a higher number.\n";
        else if (userGuess > secretNumber)
            cout << "Too high! Try a lower number.\n";
        else
            cout << "Congratulations! You guessed the number " << secretNumber
                 << " in " << attempts << " attempts.\n";

    } while (userGuess != secretNumber);

    return 0;
}
