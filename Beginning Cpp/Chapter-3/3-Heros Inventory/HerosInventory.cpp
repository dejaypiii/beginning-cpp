// Hero's Inventory
// Demonstrates arrays

#include <iostream>
#include <string>

using namespace std;

void outputItems(string inventory[], int itemIndex)
{
    cout << "\nYour items:\n";
    for (int i = 0; i < itemIndex; i++)
    {
        cout << inventory[i] << endl;
    }
}

int main()
{
    const int MAX_ITEMS = 10;
    string inventory[MAX_ITEMS];

    int itemIndex = 0;
    inventory[itemIndex++] = "sword";
    inventory[itemIndex++] = "armor";
    inventory[itemIndex++] = "shield";
    outputItems(inventory, itemIndex);

    cout << "\nYou trade your sword for a battle axe.\n";
    inventory[0] = "battle axe";
    outputItems(inventory, itemIndex);

    cout << "\nThe item name '" << inventory[0] << "' has ";
    cout << inventory[0].size() << " letters in it.\n";

    cout << "\nYou find a healing potion.\n";
    if (itemIndex < MAX_ITEMS)
    {
        inventory[itemIndex++] = "healing potion";
    }
    else
    {
        cout << "\nYou have too many items and can't carry another.\n";
    }

    outputItems(inventory, itemIndex);
}
