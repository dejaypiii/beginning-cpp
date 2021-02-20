// Critter Caretaker
// Simulates caring for a virtual pet

#include <iostream>

using namespace std;

class Critter
{
public:
    Critter(int hunger = 0, int boredom = 0);
    void Talk();
    void Eat(int food = 4);
    void Play(int fun = 4);

private:
    int _hunger;
    int _boredom;

    int GetMood() const;
    void PassTime(int time = 1);
};

Critter::Critter(int hunger, int boredom) : _hunger(hunger), _boredom(boredom) {}

inline int Critter::GetMood() const
{
    return _hunger + _boredom;
}

void Critter::PassTime(int time)
{
    _hunger += time;
    _boredom += time;
}

void Critter::Talk()
{
    cout << "I'm a critter and I feel ";

    int mood = GetMood();

    if (mood > 15)
    {
        cout << "mad.\n";
    }
    else if (mood > 10)
    {
        cout << "frustrated.\n";
    }
    else if (mood > 5)
    {
        cout << "okay.\n";
    }
    else
    {
        cout << "happy.\n";
    }

    PassTime();
}

void Critter::Eat(int food)
{
    cout << "Brrupp.\n";
    _hunger -= food;
    if (_hunger < 0)
    {
        _hunger = 0;
    }

    PassTime();
}

void Critter::Play(int fun)
{
    cout << "Wheee!\n";

    _boredom -= fun;
    if (_boredom < 0)
    {
        _boredom = 0;
    }

    PassTime();
}

int main()
{
    Critter crit;
    crit.Talk();

    int choice;
    do
    {
        cout << "\nCritter Caretaker\n\n";
        cout << "0 - Quit\n";
        cout << "1 - Listen to your critter\n";
        cout << "2 - Feed your critter\n";
        cout << "3 - Play with your critter\n\n";

        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Good-bye.\n";
            break;
        case 1:
            crit.Talk();
            break;
        case 2:
            crit.Eat();
            break;
        case 3:
            crit.Play();
            break;
        default:
            cout << "\nSorry, but " << choice << "isn't a valid choice.\n";
        }
    } while (choice != 0);
    return 0;
}
