// Pointing
// Demonstrates using pointers

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int *pAPointer;  // declare a pointer
    int *pScore = 0; // declare and init a pointer

    int score = 1000;
    pScore = &score; // assign pointer pScore address of variable score

    cout << "Assigning &score to pScore\n";
    cout << "&score is: " << &score << "\n"; // address of score variable
    cout << "pScore is: " << pScore << "\n"; // address stored in pointer
    cout << "score is: " << score << "\n";
    cout << "*pScore is: " << *pScore << "\n\n"; // value pointed to by pointer

    cout << "Adding 500 to score\n";
    score += 500;
    cout << "score is: " << score << "\n";
    cout << "*pScore is: " << *pScore << "\n\n";

    cout << "Adding 500 to *pScore\n";
    *pScore += 500;
    cout << "score is: " << score << "\n";
    cout << "*pScore is: " << *pScore << "\n\n";

    cout << "Assigning &newScore to pScore\n";
    int newScore = 5000;
    pScore = &newScore;
    cout << "&newScore is: " << &newScore << "\n";
    cout << "pScore is: " << pScore << "\n";
    cout << "newScore is: " << newScore << "\n";
    cout << "*pScore is: " << *pScore << "\n\n";

    cout << "Assigning &str to pStr\n";
    string str = "score";
    string *pStr = &str; // pointer to string object
    cout << "str is: " << str << "\n";
    cout << "*pStr is: " << *pStr << "\n";
    cout << "(*pStr).size() is : " << (*pStr).size() << "\n";
    cout << "pStr->size() is: " << pStr->size() << "\n";

    // pointer to a constant
    const int *pConst = &newScore;
    // *pConst = 5; not allowed --- mustnot be a const value
    pConst = &score;

    int const *pConst2 = &newScore;
    // *pConst2 = 5; not allowed --- mustnot be a const value
    pConst2 = &score;

    // constant pointers
    int *const pConst3 = &newScore; // i guess i should just use a reference instead of this const pointer
    // pConst3 = &score; not allowed --- mustnot be a const address

    // constant pointer to a constant
    const int *const pConst4  = &newScore; // const address and const value... using a const reference will be just fine

    return 0;
}
