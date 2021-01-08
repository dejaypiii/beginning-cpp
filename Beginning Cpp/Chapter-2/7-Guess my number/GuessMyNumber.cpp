// Guess my number
// The classic number guessing game

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    int secretNumber = rand() % 100 + 1;
    int tries = 0;
    int guess = -1;

    cout << "\tWelcome to Guess My Number\n\n";

    while (guess != secretNumber)
    {
        cout << "Enter a guess: ";
        cin >> guess;
        ++tries;

        if (guess > secretNumber)
        {
            cout << "Too high!\n\n";
        }
        else if (guess < secretNumber)
        {
            cout << "Too low!\n\n";
        }
        else
        {
            cout << "\n That's it! You got it in " << tries << " guesses!\n";
        }
    }
}