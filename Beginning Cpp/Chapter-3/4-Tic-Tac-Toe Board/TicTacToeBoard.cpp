// Tic-Tac-Toe Board
// Demonstrates multidimensional arrays

#include <iostream>

using namespace std;

#define ROWS 3
#define COLS 3

void outputTicTacToeBoard(char board[][COLS])
{
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            cout << board[i][j];
        }

        cout << endl;
    }
}

int main()
{
    char board[ROWS][COLS] = {{'0', 'X', '0'},
                              {' ', 'X', 'X'},
                              {'X', '0', '0'}};

    cout << "Here's the tic-tac-toe board:\n";
    outputTicTacToeBoard(board);

    cout << "\n'X' moves to the empty location.\n\n";
    board[1][0] = 'X';

    cout << "Now the tic-tac-toe board is:\n";
    outputTicTacToeBoard(board);

    return 0;
}