// Exercise 1 Pointer to Pointer to String

#include <string>
#include <iostream>

using namespace std;

int main()
{
    string myString = "Whoaa, it's the first exercise.";
    string *pToString = &myString;
    string **pToPToString = &pToString;

    cout << "Length: " << (*pToPToString)->size();
}