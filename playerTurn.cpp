#include "GameState.h"
#include <iostream>

using namespace std;

bool isValidMove(int move, const GameState& state) {
    return (move >= 1 && move <= 9 && state.board[move] == ' ');
}

void playerTurn(GameState& state) {
    int playerSelection;

    do {
        displayBoard(state);
        cout << "Which space do you want to fill?\n";
        if (!(cin >> playerSelection)) {
            cin.clear();
            cin.ignore(1000, '\n');
        }
    } while (!isValidMove(playerSelection, state));

    state.board[playerSelection] = state.playerSymbol;
    state.availableSpaces--;
}
