// Word Jumble
// The classic word jumble game where the player can ask for a hint

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

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
    int choice = (rand() % NUM_WORDS);
}