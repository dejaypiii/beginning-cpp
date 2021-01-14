// Yes or No
// Demonstrates return values and parameters

#include <iostream>
#include <string>

using namespace std;

char askYesNo1();
char askYesNo2(string question);

int main()
{
    char answer1 = askYesNo1();
    cout << "Thanks for answering: " << answer1 << "\n\n";

    char answer2 = askYesNo2("Do you wish to save your game?");
    cout << "Thanks for answering: " << answer2 << "\n";

    return 0;
}

char askYesNo1()
{
    char response;
    while (response != 'y' && response != 'n')
    {
        cout << "Please enter 'y' or 'n': ";
        cin >> response;
    }

    return response;
}

char askYesNo2(string question)
{
    char response;
    while (response != 'y' && response != 'n')
    {
        cout << question << " (y/n): ";
        cin >> response;
    }

    return response;
}
