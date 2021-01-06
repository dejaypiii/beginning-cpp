// Finicky Counter
// Demonstrates break and continue statements

#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    while (true)
    {
        count += 1;

        // end loop if count is greater than 10
        if (count > 10) // rly ugly... should be the loop condition
        {
            break;
        }

        // skip the number 5
        if (count == 5) // but mitigate usage of continue and break statements
        {
            continue;
        }

        cout << count << endl;
    }
}