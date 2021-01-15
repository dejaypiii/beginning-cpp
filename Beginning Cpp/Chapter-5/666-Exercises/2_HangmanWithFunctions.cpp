// Hangman with Functions
/* Task:
    Rewrite the Hangman game from Chapter 4, "The Standard Template Library: Hangman", using functions.
    Include a function to determine whether the player's guess is in the secret word.
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

const int MAX_WRONG = 8; // maximum number of incorrect guesses allowed
int wrongGuesses = 0;
string guessedSoFar;
string usedLetters;

string getRandomWord();
void outputGameStatus();
char getNextGuess();
void rateCurrentGuess(char guess, string theWord);
void outputGameResult(string theWorld);

int main()
{
    // setup
    const string THE_WORD = getRandomWord();
    guessedSoFar = string(THE_WORD.size(), '-');

    while ((wrongGuesses < MAX_WRONG) && (guessedSoFar != THE_WORD))
    {
        outputGameStatus();
        char guess = getNextGuess();
        rateCurrentGuess(guess, THE_WORD);
    }

    outputGameResult(THE_WORD);

    return 0;
}

string getRandomWord()
{
    vector<string> words = {// collection of possible words to guess
                            "GUESS",
                            "HANGMAN",
                            "DIFFICULT"};

    mt19937 g(chrono::high_resolution_clock::now().time_since_epoch().count());
    shuffle(words.begin(), words.end(), g);

    return words[0];
}

void outputGameStatus()
{
    cout << "\n\nYou have " << (MAX_WRONG - wrongGuesses);
    cout << " incorrect guesses left.\n";
    cout << "\nYou've used the following letters:\n"
         << usedLetters << endl;
    cout << "\nSo far, the word is:\n"
         << guessedSoFar << endl;
}

char getNextGuess()
{
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

    return guess;
}

void rateCurrentGuess(char guess, string theWord)
{
    if (theWord.find(guess) != string::npos) // rateGuess
    {
        cout << "That's right! " << guess << " is in the word.\n";
        for (int i = 0; i < theWord.size(); ++i)
        {
            if (theWord[i] == guess)
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

void outputGameResult(string theWord)
{
    if (wrongGuesses == MAX_WRONG) // output GameResult
    {
        cout << "\nYou've been hanged!";
    }
    else
    {
        cout << "\nYou guessed it!";
    }

    cout << "\nThe word was " << theWord << endl;
}