// Construction Critter
// Demonstrates constructors

#include <iostream>

using namespace std;

class Critter
{
public:
    int Hunger;

    Critter(int hunger = 0); // constructor prototype
    void Greet();
};

Critter::Critter(int hunger) : Hunger(hunger)
{
    cout << "A new critter has been born!" << endl;
}

void Critter::Greet()
{
    cout << "Hi. I'm a critter. My hunger level is " << Hunger << ".\n\n";
}

int main()
{
    Critter crit(7);
    crit.Greet();

    return 0;
}