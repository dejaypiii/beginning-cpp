// Average Game Score
// Task:
// Write a programm that gets three game scores from the user and displays the average.

#include<iostream>

int main() {
    int score1 = 0,
        score2 = 0,
        score3 = 0;

    std::cout << "\nEnter the first score: ";
    std::cin >> score1;

    std::cout << "Enter the second score: ";
    std::cin >> score2;

    std::cout << "Enter the third score: ";
    std::cin >> score3;

    float averageScore = 0;
    averageScore = (score1 + score2 + score3) / 3.0;

    std::cout << "\nAverage score: " << averageScore << std::endl;
    return 0;
}