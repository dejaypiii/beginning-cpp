// Static Critter
// Demonstrates static member variables and functions

#include <iostream>

using namespace std;

class Critter
{
public:
    static int Total; // static member variuable declaration
    // total number of Critter objects in existence

    Critter(int hunger = 0);
    static int GetTotal(); // static number of Critter objects in existence

private:
    int _hunger;
};

int Critter::Total = 0;

Critter::Critter(int hunger) : _hunger(hunger)
{
    cout << "A critter has been born!" << endl;
    ++Total;
}

int Critter::GetTotal() // static member function definition
{
    return Total;
}

int main()
{
    cout << "The total number of critters is: ";
    cout << Critter::Total << "\n\n";

    Critter crit1, crit2, crit3;

    cout << "\nThe total number of critters is: ";
    cout << Critter::GetTotal() << "\n";
    ;

    return 0;
}
