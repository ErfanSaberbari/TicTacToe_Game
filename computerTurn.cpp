#include "GameState.h"
#include <random>
#include <vector>

void computerTurn(GameState& state) {
    std::vector<int> emptySpaces;
    for (int i = 1; i < 10; ++i) {
        if (state.board[i] == ' ') emptySpaces.push_back(i);
    }

    if (!emptySpaces.empty()) {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> distrib(0, emptySpaces.size() - 1);
        int randomIndex = emptySpaces[distrib(gen)];
        state.board[randomIndex] = state.computerSymbol;
        state.availableSpaces--;
    }
}
