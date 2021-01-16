// Mad-Lib
// Creates a story base on user input

#include <iostream>
#include <string>

using namespace std;

string askText(const string &prompt);
int askNumber(const string &prompt);
void tellStory(const string &name, const string &noun, int number, const string &bodyPart, const string &verb);

int main()
{
    cout << "Welcome to Mad Lib.\n\n";
    cout << "Answer the following questions to help create a new story.\n";

    string name = askText("Please enter a name: ");
    string noun = askText("Please enter a plural noun: ");
    int number = askNumber("Please enter a number: ");
    string bodyPart = askText("Please enter a body part: ");
    string verb = askText("Please enter a verb: ");

    tellStory(name, noun, number, bodyPart, verb);

    return 0;
}

string askText(const string &prompt)
{
    string text;
    cout << prompt;
    cin >> text;
    return text;
}

int askNumber(const string &prompt)
{
    int number;
    cout << prompt;
    cin >> number;
    return number;
}

void tellStory(const string &name, const string &noun, int number, const string &bodyPart, const string &verb)
{
    cout << "\nHere's your story:\n";
    cout << "The famous explorer ";
    cout << name;
    cout << " had nearly given up a life-long quest to find\n";
    cout << "the lost city of " << noun;
    cout << " when one day, the " << noun;
    cout << " found the explorer.\n";
    cout << "Sourrounded by " << number << " " << noun;
    cout << ", a tear came to " << name << "'s";
    cout << bodyPart << ".\n";
    cout << "After all this time, the quest was finally over. ";
    cout << "And then, the " << noun << endl;
    cout << "promptly devoured " << name << ". ";
    cout << "The moral of the story? Be careful what you " << verb << " for.";
}