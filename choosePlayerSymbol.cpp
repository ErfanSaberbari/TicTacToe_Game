#include "GameState.h"
#include <iostream>

using namespace std;

void choosePlayerSymbol(GameState& state) {
    do {
        displayBoard(state);
        cout << "Play as X or O?\n";
        if (!(cin >> state.playerSymbol) || (cin.peek() != '\n')) {
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        state.playerSymbol = toupper(state.playerSymbol);
        state.computerSymbol = (state.playerSymbol == 'X') ? 'O' : 'X';
    } while (state.playerSymbol != 'X' && state.playerSymbol != 'O');
}
