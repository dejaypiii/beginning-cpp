// Menu Chooser
// Demonstrates the switch statement

#include <ios>
#include <iostream>
#include <limits>

using namespace std;

enum Difficulty
{
    Easy = 1,
    Medium = 2,
    Hard = 3
};

int main()
{
    cout << "Difficulty Levels\n\n";
    cout << "1 - Easy\n";
    cout << "2 - Medium\n";
    cout << "3 - Hard\n\n";

    int choice;
    bool isValidChoice = false;

    while (!isValidChoice)
    {
        choice = 0;
        cout << "Choice: ";

        // resetting cin after invalid inputs
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        cin >> choice;

        switch (choice)
        {
        case Difficulty::Easy:
            cout << "You picked Easy.\n";
            isValidChoice = true;
            break;

        case Difficulty::Medium:
            cout << "You picked Medium.\n";
            isValidChoice = true;
            break;

        case Difficulty::Hard:
            cout << "You picked Hard.\n";
            isValidChoice = true;
            break;

        default:
            cout << "You picked no valid difficulty.\n";
            isValidChoice = false;
        }
    }

    return 0;
}