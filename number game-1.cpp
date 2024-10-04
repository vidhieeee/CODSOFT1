#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

using namespace std;

int main() {
    // Initialize random seed based on current time
    srand(static_cast<unsigned>(time(0)));
    
    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int guess;
    bool guessedCorrectly = false;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a random number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    // Loop until the user guesses the correct number
    while (!guessedCorrectly) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > randomNumber) {
            cout << "Your guess is too high. Try again!" << endl;
        } else if (guess < randomNumber) {
            cout << "Your guess is too low. Try again!" << endl;
        } else {
            cout << "Congratulations! You've guessed the correct number: " << randomNumber << endl;
            guessedCorrectly = true;
        }
    }

    return 0;
}
