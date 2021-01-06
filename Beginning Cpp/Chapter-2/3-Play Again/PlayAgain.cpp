// Play Again
// Demonstrates while loops

#include <iostream>
using namespace std;

int main()
{
    char again = 'y';
    while (again == 'y')
    {
        cout << "\n**Played an exciting game**";
        cout << "\nDo you want to play again? (y/N): ";
        cin >> again;
    }

    cout << "\nOkay, bye.\n";

    cout << "\n\t--- V2 ---\n\n";
    char again2;

    do // but do-while loops are kinda bad for readability
    {
        cout << "\n**Played an exciting game**";
        cout << "\nDo you want to play again? (y/N): ";
        cin >> again2;
    } while (again2 == 'y');

    cout << "\nOkay, bye.\n";

    return 0;
}