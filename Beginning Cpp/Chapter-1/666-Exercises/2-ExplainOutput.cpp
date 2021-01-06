// Explain Output
// Task:
// What's displayed by each line in the following code snippet? Explain each result.

#include<iostream>

int main() {
    std::cout << "Seven divided by three is " << 7 / 3 << std::endl; // Expected: 2 (because of int division and truncation of the result)
    std::cout << "Seven divided by three is " << 7.0 / 3 << std::endl; // Expected: 2.33333 (because one part of the division is a float)
    std::cout << "Seven divided by three is " <<  7.0 / 3.0 << std::endl; // Expected: Same as the statement above 7.0 / 3

    return 0;
}