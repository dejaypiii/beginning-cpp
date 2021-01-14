// Taking Damage
// Demonstrates function inlining

#include <iostream>

using namespace std;

int radiation(int health);

int main()
{
    int health = 80;
    cout << "Your health is " << health << "\n\n";

    health = radiation(health);
    cout << "After radiation exposure your health is " << health << "\n\n";

    health = radiation(health);
    cout << "After radiation exposure your health is " << health << "\n\n";

    health = radiation(health);
    cout << "After radiation exposure your health is " << health << "\n\n";

    return 0;
}

inline int radiation(int health) // request for the compiler to inline the function at each call instead of jumping each time
{
    return health / 2;
}