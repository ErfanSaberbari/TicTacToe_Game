#include "GameState.h"

bool isGameOver(GameState& state) {
    return state.isGameOver = checkWin(state, state.playerSymbol) || checkWin(state, state.computerSymbol);
}
