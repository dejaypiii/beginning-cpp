// Guess my number "Switched"
// The player chooses a numer an the PC tries to guess the correct value.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    int tries = 0;
    int guessRange = 100;
    int guessRangeOffset = 1;
    int guess = -1;
    int secretNumber;

    cout << "What is your number? ";
    cin >> secretNumber;

    while (guess != secretNumber)
    {
        guess = rand() % guessRange + guessRangeOffset;
        cout << "My guess is " << guess << "." << endl;

        ++tries;

        // the pc tries to guess the number and will not apply an efficient binary search

        if (guess > secretNumber)
        {
            cout << "Guess is too high!" << endl;
            guessRange = guess - guessRangeOffset;
        }
        else if (guess < secretNumber)
        {
            cout << "Guess is too low!" << endl;
            guessRange = (guessRange + guessRangeOffset) - guess - 1;
            guessRangeOffset = guess + 1;
        }
        else
        {
            cout << "I found the correct number in " << tries << " tries.";
        }
    }
}