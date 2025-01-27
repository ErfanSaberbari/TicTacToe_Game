#include "GameState.h"
#include <vector>

bool checkWin(const GameState& state, char symbol) {
    static const std::vector<std::vector<int>> winPatterns = {
        {7, 8, 9}, {4, 5, 6}, {1, 2, 3},
        {1, 4, 7}, {2, 5, 8}, {3, 6, 9},
        {1, 5, 9}, {3, 5, 7}
    };

    for (const auto& pattern : winPatterns) {
        if (state.board[pattern[0]] == symbol &&
            state.board[pattern[1]] == symbol &&
            state.board[pattern[2]] == symbol) {
            return true;
        }
    }
    return false;
}
