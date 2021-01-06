// Designer Network
// Demonstrates logical operators

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string username = "";
    string password = "";
    bool success = false;

    cout << "\tGame Designer's Network\n";
    while (!success)
    {
        cout << "\nUsername: ";
        cin >> username;

        cout << "\nPassword: ";
        cin >> password;

        if (username == "P.Duchon" && password == "awesome")
        {
            cout << "\nHey master!";
            success = true;
        }
        else if (username == "guest" && password == "guest")
        {
            cout << "\nWelcome, guest.";
            success = true;
        }
        else
        {
            cout << "\nLogin failed!";
            success = false;
        }
    }

    return 0;
}