/**
 * Task:
 * What's wrong with the following function?
 * */

int& plusThree(int number) {
    int threeMore = number + 3;
    return threeMore; // After exiting the function the local variable 'threeMore' cease to exist
                      // therefore the reference to threeMore will be invalid
}