// Score Rater 2.0
// Demonstrates th if statement
// V2 - demonstrates an else clause
// V3 - demonstrates if else-if else suite

#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    cout << "Enter your score: ";
    cin >> score;

    if (true)
    {
        cout << "This is always displayed.\n\n";
    }

    if (false)
    {
        cout << "This is never displayed.\n\n";
    }

    if (score >= 1000)
    {
        cout << "You scored 1000 or more. Impressive!\n";
    }
    else if (score >= 500)
    {
        cout << "You scored 500 or more. Nice.\n";
    }
    else if (score >= 250)
    {
        cout << "You scored 250 or more. Decent.\n";
    }
    else if (score)
    {
        cout << "At least you didn't score zero.}\n";
    }
    else
    {
        cout << "You lost!\n";
    }

    return 0;
}
