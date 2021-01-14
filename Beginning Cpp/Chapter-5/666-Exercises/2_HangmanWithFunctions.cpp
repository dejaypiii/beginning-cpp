// Hangman with Functions
/* Task:
    Rewrite the Hangman game from Chapter 4, "The Standard Template"
*/

// TODO djp: add task description and finish exercise

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <chrono>
#include <random>
#include <cctype>

using namespace std;

int main()
{
    // setup
    const int MAX_WRONG = 8; // maximum number of incorrect guesses allowed

    vector<string> words = {// collection of possible words to guess
                            "GUESS",
                            "HANGMAN",
                            "DIFFICULT"};

    // don't use random_device for seeding
    // this is a better solution than in the example '3-High Scores'
    mt19937 g(chrono::high_resolution_clock::now().time_since_epoch().count());
    shuffle(words.begin(), words.end(), g);

    const string THE_WORD = words[0];
    int wrongGuesses = 0;
    string guessedSoFar(THE_WORD.size(), '-');
    string usedLetters = "";

    while ((wrongGuesses < MAX_WRONG) && (guessedSoFar != THE_WORD))
    {
        cout << "\n\nYou have " << (MAX_WRONG - wrongGuesses);
        cout << " incorrect guesses left.\n";
        cout << "\nYou've used the following letters:\n"
             << usedLetters << endl;
        cout << "\nSo far, the word is:\n"
             << guessedSoFar << endl;

        char guess;
        cout << "\n\nEnter your guess: ";
        cin >> guess;
        guess = toupper(guess);

        while (usedLetters.find(guess) != string::npos)
        {
            cout << "\nYou've already guessed " << guess << endl;
            cout << "Enter your guess: ";
            cin >> guess;
            guess = toupper(guess);
        }

        usedLetters += guess;
        if (THE_WORD.find(guess) != string::npos)
        {
            cout << "That's right! " << guess << " is in the word.\n";
            for (int i = 0; i < THE_WORD.size(); ++i)
            {
                if (THE_WORD[i] == guess)
                {
                    guessedSoFar[i] = guess;
                }
            }
        }
        else
        {
            cout << "Sorry, " << guess << " isn't in the word.\n";
            ++wrongGuesses;
        }
    }

    if (wrongGuesses == MAX_WRONG)
    {
        cout << "\nYou've been hanged!";
    }
    else
    {
        cout << "\nYou guessed it!";
    }

    cout << "\nThe word was " << THE_WORD << endl;

    return 0;
}