#include "GameState.h"

void resetGameState(GameState& state) {
    for (int i = 1; i <= 9; ++i) state.board[i] = ' ';
    state.availableSpaces = 9;
    state.isGameOver = false;
    state.playerSymbol = ' ';
    state.computerSymbol = ' ';
}
