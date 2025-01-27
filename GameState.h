#pragma once
#include <vector>

struct GameState {
    char board[10];
    char playerSymbol;
    char computerSymbol;
    short availableSpaces;
    bool isGameOver;
};

void resetGameState(GameState& state);
void displayBoard(const GameState& state);
void choosePlayerSymbol(GameState& state);
void playerTurn(GameState& state);
void computerTurn(GameState& state);
bool checkWin(const GameState& state, char symbol);
bool isGameOver(GameState& state);
void displayResult(const GameState& state);
bool askToRestart();
