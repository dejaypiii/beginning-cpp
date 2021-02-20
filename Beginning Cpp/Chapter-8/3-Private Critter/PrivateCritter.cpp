// Private Critter
// Demonstrates setting member access levels

#include <iostream>

using namespace std;

class Critter
{
public:
    Critter(int hunger = 0);
    int GetHunger() const;
    void SetHunger(int hunger);

private:
    int _hunger;
};

Critter::Critter(int hunger) : _hunger(hunger)
{
    cout << "A new critter has been born!" << endl;
}

int Critter::GetHunger() const
{
    return _hunger;
}

void Critter::SetHunger(int hunger)
{
    if (hunger < 0)
    {
        cout << "You can't set a critter's hunger to a negative number.\n\n";
    }
    else
    {
        _hunger = hunger;
    }
}

int main()
{
    Critter crit(5);
    // cout << crit._hunger; // illegal, _hunger is private!
    cout << "Calling GetHunger(): " << crit.GetHunger() << "\n\n";

    cout << "Calling SetHunger() with -1.\n";
    crit.SetHunger(-1);

    cout << "Calling SetHunger() with 9.\n";
    crit.SetHunger(9);

    cout << "Calling GetHunger(): " << crit.GetHunger() << "\n\n";

    return 0;
}
