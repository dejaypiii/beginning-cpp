/*
Task:
Assuming that scores is a vector that holds elements of type int, what's
wrong with the following code snippet (meant to increment each element)?

vector<int>::iterator iter;
//increment each scores
for (iter = scores.begin(); iter != scores.end(); ++iter) {
    iter++;
}

Answer:
Line 9 contains an error.
Instead of incrementing the score which iter is pointing to it moves iter to the next element.
To increase the score you have to dereference the iterator correctly.
e.g: (*iter)++
*/

#include <iostream>
#include <vector>

void outputScores(std::vector<int> scores)
{
    for (auto score : scores)
    {
        std::cout << score << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> scores = {1, 2, 3, 4, 5};
    outputScores(scores);

    std::vector<int>::iterator iter;
    //increment each scores
    for (iter = scores.begin(); iter != scores.end(); ++iter)
    {
        (*iter)++;
    }

    outputScores(scores);
}