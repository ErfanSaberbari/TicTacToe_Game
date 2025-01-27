#include "GameState.h"
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void displayResult(const GameState& state) {
    if (checkWin(state, state.playerSymbol)) {
        cout << "You won :)\n";
    }
    else if (checkWin(state, state.computerSymbol)) {
        cout << "Computer won :(\n";
    }
    else {
        cout << "It's a draw!\n";
    }
    cout << string(9, '\n');
    this_thread::sleep_for(chrono::milliseconds(1000));
}
