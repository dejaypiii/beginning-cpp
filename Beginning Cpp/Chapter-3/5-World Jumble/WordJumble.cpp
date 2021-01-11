// Word Jumble
// The classic word jumble game where the player can ask for a hint

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string getGuess()
{
    string guess;
    cout << "\n\nYour guess: ";
    cin >> guess;
    return guess;
}

int main()
{
    enum fields
    {
        WORD,
        HINT,
        NUM_FIELDS // == length of the array/enum
    };
    const int NUM_WORDS = 5;
    const string WORDS[NUM_WORDS][NUM_FIELDS] = {{"wall", "Do you feel you're banging your head against something?"},
                                                 {"glasses", "These might help you see the answer."},
                                                 {"labored", "Going slowly, is it?"},
                                                 {"persistent", "Keep at it."},
                                                 {"jumble", "It's what the game is all about."}};

    srand(static_cast<unsigned int>(time(0)));
    int choice = rand() % NUM_WORDS;
    string theWord = WORDS[choice][fields::WORD]; // word to guess
    string theHint = WORDS[choice][fields::HINT]; // hint for word

    string jumble = theWord; // jumbled version of word
    int length = jumble.size();
    int score = length * 10;

    for (int i = 0; i < length; ++i)
    {
        int index1 = rand() % length;
        int index2 = rand() % length;
        char temp = jumble[index1];
        jumble[index1] = jumble[index2];
        jumble[index2] = temp;
    }

    cout << "\t\t\tWelcome to Word Jumble!\n\n";
    cout << "Unscramble the letters to make a word.\n";
    cout << "Enter 'hint' for a hint.\n";
    cout << "Enter 'quit' to quit the game.\n\n";
    cout << "The jumble is: " << jumble;

    string guess = getGuess();

    while ((guess != theWord) && (guess != "quit"))
    {
        if (guess == "hint")
        {
            score /= 2;
            cout << theHint;
        }
        else
        {
            if (score > 10)
            {
                score -= 10;
            }
            else
            {
                score = 0;
            }
            cout << "Sorry, that is not it.";
        }

        cout << "\n\nCurrent score: " << score << endl;
        guess = getGuess();
    }

    if (guess == theWord)
    {
        cout << "\nThat's it! You guessed it!\n";
        cout << "\nYour final score is: " << score << endl;
    }

    cout << "\nThanks for playing.\n";

    return 0;
}