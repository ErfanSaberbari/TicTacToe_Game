# Tic-Tac-Toe Game

This project is a simple console-based Tic-Tac-Toe game written in **C++** that allows a player to compete against a computer. The game is modularized with each function implemented in a separate file for better readability and maintainability.

## Features

- Play as either `X` or `O`.
- Computer opponent with randomized moves.
- Displays the game board dynamically after each move.
- Detects wins, losses, or draws.
- Option to restart the game after it ends.

## File Structure

- **`main.cpp`**
- `GameState.h`
- `resetGameState.cpp`
- `displayBoard.cpp`
- `choosePlayerSymbol.cpp`
- `playerTurn.cpp`
- `computerTurn.cpp`
- `checkWin.cpp`
- `isGameOver.cpp`
- `displayResult.cpp`
- `askToRestart.cpp`

## File Descriptions

-   **`main.cpp`**  
    The main entry point of the program. It handles the overall game flow by calling the appropriate functions from other files.
    
-   **`GameState.h`**  
    Contains the `GameState` struct and function declarations for all components of the game.
    
-   **`resetGameState.cpp`**  
    Resets the game state to its initial configuration.
    
-   **`displayBoard.cpp`**  
    Displays the current state of the game board.
    
-   **`choosePlayerSymbol.cpp`**  
    Allows the player to choose their symbol (`X` or `O`).
    
-   **`playerTurn.cpp`**  
    Handles the player's move, ensuring the selected position is valid.
    
-   **`computerTurn.cpp`**  
    Implements the computer’s turn with randomized moves.
    
-   **`checkWin.cpp`**  
    Checks if a given symbol (`X` or `O`) has won the game.
    
-   **`isGameOver.cpp`**  
    Determines if the game has ended (win or draw).
    
-   **`displayResult.cpp`**  
    Displays the result of the game (win, loss, or draw).
    
-   **`askToRestart.cpp`**  
    Prompts the player to restart the game or exit.

## Compile and Run

### **Requirements**

-   A C++ compiler such as `g++`.
-   Windows system for `cls` to work in the `displayBoard` function.

### **Steps**

1.  **Clone the Repository**
```
git clone https://github.com/your-repo/tic-tac-toe.git
cd tic-tac-toe 
```
`$${\color{red}Welcome \space \color{lightblue}To \space \color{lightgreen}Github}$$` :
2.  **Compile the Code** Use a C++ compiler like `g++` to compile all the files:    
```
g++ -o TicTacToe main.cpp resetGameState.cpp displayBoard.cpp choosePlayerSymbol.cpp playerTurn.cpp computerTurn.cpp checkWin.cpp isGameOver.cpp displayResult.cpp askToRestart.cpp
```

3.  **Run the Executable**   
```
./TicTacToe
```

## Gameplay

-   Run the game using the steps above.
-   Choose your symbol (`X` or `O`).
-   Enter the number corresponding to the position you want to place your symbol.
-   The computer will automatically take its turn.
-   The game ends when:
    -   You win.
    -   The computer wins.
    -   The board is full (draw).
-   You will be prompted to restart or exit after the game ends.

## Future Improvements

-   Add difficulty levels for the computer opponent (easy, medium, hard).
-   Implement a graphical user interface (GUI).
-   Support for other operating systems (replace `cls` with cross-platform code).
-   Save and load feature for ongoing games.

## Contributing

Feel free to fork this repository, make changes, and submit pull requests. All contributions are welcome!


Synchronization is one of the biggest features of StackEdit. It enables you to synchronize any file in your workspace with other files stored in your **Google Drive**, your **Dropbox** and your **GitHub** accounts. This allows you to keep writing on other devices, collaborate with people you share the file with, integrate easily into your workflow... The synchronization mechanism takes place every minute in the background, downloading, merging, and uploading file modifications.

There are two types of synchronization and they can complement each other:

- The workspace synchronization will sync all your files, folders and settings automatically. This will allow you to fetch your workspace on any other device.
	> To start syncing your workspace, just sign in with Google in the menu.

- The file synchronization will keep one file of the workspace synced with one or multiple files in **Google Drive**, **Dropbox** or **GitHub**.
	> Before starting to sync files, you must link an account in the **Synchronize** sub-menu.

## **License**

This project is open-source and available under the [MIT License](https://opensource.org/license/mit/).

Enjoy the game! 🎮
