// High Scores
// Demonstrates algorithms

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <ctime>

using namespace std;

int main()
{
    vector<int>::const_iterator iter;

    random_device rd;
    mt19937 g(rd()); // seeding is broken with mingw on windows.
                     // Microsoft compiler cl results in correct random results

    cout << "Creating a list of scores...";
    vector<int> scores;
    scores.push_back(1500);
    scores.push_back(3500);
    scores.push_back(4500);
    scores.push_back(8500);
    scores.push_back(2500);
    scores.push_back(6500);
    scores.push_back(44500);
    scores.push_back(7500);

    cout << "\nHigh Scores:\n";

    for (iter = scores.begin(); iter != scores.end(); ++iter)
    {
        cout << *iter << endl;
    }

    cout << "\nEnter a score to find: ";
    int score;
    cin >> score;
    cout << "\nFinding a score...";
    iter = find(scores.begin(), scores.end(), score);
    if (iter != scores.end())
    {
        cout << "\nScore found.\n";
    }
    else
    {
        cout << "\nScore not found.\n";
    }

    cout << "\nRandomizing scores...";
    shuffle(scores.begin(), scores.end(), g); // random_shuffle doesn't exist anymore in the current c++ version
    cout << "\nHigh Score:\n";
    for (iter = scores.begin(); iter != scores.end(); ++iter)
    {
        cout << *iter << endl;
    }

    cout << "\nSorting scores...";
    sort(scores.begin(), scores.end());
    cout << "\nHigh Scores:\n";
    for (iter = scores.begin(); iter != scores.end(); ++iter)
    {
        cout << *iter << endl;
    }

    return 0;
}