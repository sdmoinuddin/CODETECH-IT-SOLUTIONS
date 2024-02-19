#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed for random number generation
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;

    int userGuess;
    int attempts = 0;

    std::cout << "Welcome to the Guess the Number game!\n";
    std::cout << "I have selected a number between 1 and 100. Try to guess it.\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;

        attempts++;

        if (userGuess == secretNumber) {
            std::cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
        } else if (userGuess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "Too high! Try again.\n";
        }

    } while (userGuess != secretNumber);

    return 0;
}
