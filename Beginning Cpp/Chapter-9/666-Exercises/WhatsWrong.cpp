// What's wrong with the following code?

int main() {
    int* pScore = new int;
    *pScore = 500;
    pScore = new int(1000); // creating a memory leak, because the pointer to the allocated memory for int(500) is lost
    delete pScore;
    pScore = 0;
    return 0;
}