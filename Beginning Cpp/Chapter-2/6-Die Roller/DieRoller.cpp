// Die Roller
// Demonstrates generating random numbers

#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0))); // seed random number generator
    cout << "time(0) = " << time(0) << " , static_cast = " << static_cast<unsigned int>(time(0)) << endl;
    cout << "RAND_MAX = " << RAND_MAX;

    int randomNumber = rand(); // generate next random number
    int die = 0;

    array<int, 6> results;
    results.fill(0);

    for (int i = 0; i < 1000; i++)
    {
        die = (randomNumber % 6); // get a number between 1 and 6
        results[die] = results[die] + 1;
        randomNumber = rand();
    }

    cout << "\nResults:\n";
    for (int i = 0; i < results.size(); i++)
    {
        cout << i + 1 << ": " << results[i] << endl;
    }

    return 0;
}