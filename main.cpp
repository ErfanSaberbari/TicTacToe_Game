#include "GameState.h"
#include <chrono>
#include <thread>

int main() {
    GameState gameState;

    do {
        resetGameState(gameState);
        choosePlayerSymbol(gameState);

        while (gameState.availableSpaces > 0 && !gameState.isGameOver) {
            playerTurn(gameState);
            displayBoard(gameState);
            if (isGameOver(gameState)) break;

            std::this_thread::sleep_for(std::chrono::milliseconds(200));

            computerTurn(gameState);
            displayBoard(gameState);
            if (isGameOver(gameState)) break;
        }

        displayBoard(gameState);
        displayResult(gameState);
    } while (askToRestart());

    return 0;
}
