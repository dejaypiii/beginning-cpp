// Game Stats 3.0
// V1 - Demonstrates declaring and initializing variables
// V2 - Using arithmetic operations with variables
// V3 - Demonstrates constants

#include <iostream>
using namespace std;

int main()
{
    cout << "\n--- V3 ---" << endl;

    const int ALIEN_POINTS = 150;
    int aliensKilled3 = 10;
    int score3 = aliensKilled3 * ALIEN_POINTS;
    cout << "score3: " << score3 << endl;

    enum difficulty
    {
        NOVICE,
        EASY,
        MEDIUM,
        HARD
    };
    difficulty myDifficulty = EASY;

    enum shipCost
    {
        FIGHTER_COST = 25,
        BOMBER_COST,
        CRUISER_COST = 50
    };
    shipCost myShipCost = BOMBER_COST;
    cout << "\nTo upgrade my ship to a Cruiser will cost "
         << CRUISER_COST - myShipCost << " Resource Points.\n";

    cout << "\n--- V2 ---" << endl;

    int score = 5000;
    cout << "score: " << score << endl;

    // altering the value of a variable
    score = score + 100;
    cout << "score: " << score << endl;

    // combined assignment operator
    score += 100;
    cout << "score: " << score << endl;

    // increment operator
    int lives = 3;
    ++lives;
    cout << "lives: " << lives << endl;

    lives = 3;
    lives++;
    cout << "lives: " << lives << endl;

    lives = 3;
    int bonus = ++lives * 10;
    cout << "lives, bonus: " << lives << ", " << bonus << endl;

    lives = 3;
    bonus = lives++ * 10;
    cout << "lives, bonus: " << lives << ", " << bonus << endl;

    // integer wrap around
    score = 4294967295; // maybe produces a compiler warning
    cout << "\nscore: " << score << endl;
    ++score;
    cout << "score: " << score << endl;

    cout << "\n--- V1 ---" << endl;

    double distance;
    char playAgain;
    bool shieldsUp;

    short aliensKilled;

    score = 0;
    distance = 1200.76;
    playAgain = 'y';
    shieldsUp = true;
    lives = 3;
    aliensKilled = 12;

    double engineTemp = 6572.47;

    cout << "\nscore: " << score << endl;
    cout << "distance: " << distance << endl;
    cout << "playAgain: " << playAgain << endl;
    // skipping shieldsUp since you don't generally print Boolean values
    cout << "lives: " << lives << endl;
    cout << "aliensKilled: " << aliensKilled << endl;
    cout << "engineTemp: " << engineTemp << endl;

    int fuel;
    cout << "\nHow much fuel? ";
    cin >> fuel;
    cout << "fuel: " << fuel << endl;

    typedef unsigned short int ushort;
    ushort bonus2 = 10;
    cout << "\nbonus2: " << bonus2 << endl;

    return 0;
}