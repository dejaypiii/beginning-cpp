// Simple Critter
// Demonstrates creating a new type

#include <iostream>
using namespace std;

class Critter // class definition -- defines a new type, Critter
{
public:
    int Hunger;   // data member
    void Greet(); // member function prototype
};

void Critter::Greet()
{ // member function definition
    cout << "Hi. I'm a critter. My hunger level is " << Hunger << ".\n";
}

int main()
{
    Critter crit1;
    Critter crit2;

    crit1.Hunger = 9;
    cout << "crit1's hunger level is " << crit1.Hunger << ".\n";

    crit2.Hunger = 3;
    cout << "crit2's hunger level is " << crit2.Hunger << ".\n";

    crit1.Greet();
    crit2.Greet();

    return 0;
}
