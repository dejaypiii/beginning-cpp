// Explaing the code

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int& b = a; // Reference to a
    int* c = &b; // Pointer to the address of a

    cout << &a << endl; // address of the variable a
    cout << &b << endl; // address of the reference (&a == &b)
    cout << &(*c) << endl; // the address of the dereferenced pointer (&b == &(*c))
}