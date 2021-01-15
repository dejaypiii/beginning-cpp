/** 
 * Task:
 * Using default arguments, write a function that asks the user for a number
 * and returns that number. The function should accept a string prompt from
 * the calling code. If the caller doesn't supply a string for the prompt, the
 * function should use a generic prompt. Next, using function overloading,
 * write a function that achieves the same result.
 * */

#include <iostream>
#include <string>

int getInput(std::string prompt = "Please enter your number: ");

int getInput2();
int getInput2(std::string prompt);

int main()
{
    int input = getInput();
    std::cout << "Input from default prompt: " << input << std::endl;

    input = getInput("Bitte geben Sie eine Zahl ein: ");
    std::cout << "Input from custom prompt: " << input << std::endl;

    input = getInput2();
    std::cout << "Input from default prompt with function overloading: " << input << std::endl;

    input = getInput2("Bitte geben Sie noch eine Zahl ein: ");
    std::cout << "Input from custom prompt with function overloading: " << input << std::endl;
}

int getInput(std::string prompt)
{
    int input;
    std::cout << "\n"
              << prompt;
    std::cin >> input;

    return input;
}

int getInput2()
{
    return getInput2("Please enter your number: ");
}

int getInput2(std::string prompt)
{
    int input;
    std::cout << "\n"
              << prompt;
    std::cin >> input;

    return input;
}