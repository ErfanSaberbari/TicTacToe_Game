#include "GameState.h"
#include <iostream>

using namespace std;

bool askToRestart() {
    cin.ignore();
    char repeat;
    cout << "Restart? (R): ";
    cin >> repeat;
    return toupper(repeat) == 'R';
}
