// Favorite Games
// Add, remove and list your favorite games

/* Task:
    Write a programm using vectors and iterators
    that allows a user to maintain a listt of his or her favorite games.
    The program should allow the user to list all game titles, add or remove a game title.
*/

#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <algorithm>

int main()
{
    int cmd;
    enum cmds
    {
        LIST = 1,
        ADD = 2,
        REMOVE = 3,
        QUIT = 4
    };

    std::vector<std::string> gameTitles;
    std::string gameTitle;
    std::vector<std::string>::const_iterator iter;

    std::cout << "\n\t\tFavorite Game Titles\n";
    std::cout << "\nPossible command:\n";
    std::cout << "\t1 - List all game titles\n";
    std::cout << "\t2 - Add a game title\n";
    std::cout << "\t3 - Remove a game title\n";
    std::cout << "\t4 - Quit\n";

    while (cmd != cmds::QUIT)
    {
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        std::cout << "\nYour command: ";
        std::cin >> cmd;
        switch (cmd)
        {
        case 1:
            std::cout << "All game titles:\n";
            if (gameTitles.empty())
            {
                std::cout << "No game titles added yet.\n";
            }
            else
            {
                for (auto title : gameTitles)
                {
                    std::cout << "\t- " << title << std::endl;
                }
            }
            break;
        case 2:
            std::cout << "Add game title: ";
            std::cin >> gameTitle;
            gameTitles.push_back(gameTitle);
            break;
        case 3:
            std::cout << "Remove game title: ";
            std::cin >> gameTitle;
            iter = std::find(gameTitles.begin(), gameTitles.end(), gameTitle);
            if (iter != gameTitles.end())
            {
                gameTitles.erase(iter);
            }
            break;
        }
    }

    std::cout << "\nBye, bye, until next time!\n\n";
}