📘 Tic Tac Toe – Console Game (C Program)
(README File)
📌 Overview

This is a simple Tic Tac Toe game built using C Language for the console (terminal).
It supports 2 players, clean board display, and checks automatically for:

Winner (X or O)

Draw condition

Invalid moves

Perfect for beginners and college assignments.

🎮 How the Game Works
✔ Players

Player 1 → X

Player 2 → O

Players enter positions 1 to 9 to mark the board.

✔ Board Layout (positions)
 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9

✔ Controls

Enter a number (1–9) to mark your position.

If you enter:

Invalid number

Already occupied position
→ Game asks you to try again.

🧠 Program Flow
🔹 1. resetBoard()

Initializes the board with numbers 1–9.

🔹 2. displayBoard()

Clears screen and prints the current board.

🔹 3. checkWinner()

Checks all:

3 rows

3 columns

2 diagonals

If any contain same symbol → winner.

🔹 4. checkDraw()

If all 9 cells filled and no winner → draw.

🔹 5. playGame()

Handles player turns

Takes input

Updates board

Calls winner/draw checks

🔹 6. main()

Shows start screen

Runs game loop

Asks if user wants to play again

📟 Sample Game Play
====== TIC TAC TOE ======

     1 | 2 | 3
    ---|---|---
     4 | 5 | 6
    ---|---|---
     7 | 8 | 9

Player 1, enter position (1-9): 5


If player 1 places X on 5:

     1 | 2 | 3
    ---|---|---
     4 | X | 6
    ---|---|---
     7 | 8 | 9

🏆 Winning Conditions

A player wins if they get 3 marks in a row:

Horizontal
X | X | X

Vertical
X
X
X

Diagonal
X       X
  X   X
    X

📦 How to Compile & Run
✔ Compile:
gcc tic_tac_toe.c -o ttt.exe

✔ Run:
ttt.exe


Works on Windows (uses system("cls") and <conio.h>).

📚 Features Included

Clean ASCII board

2-player support

Input validation

Auto win detection

Auto draw detection

Play again option

Uses simple logic — perfect for understanding arrays and loops

🚀 Possible Future Improvements

(You can add for extra marks)

Scoreboard for Player 1 vs Player 2

AI mode (computer vs player)

Highlight winning line

Colored output

Sound effects on win/loss

🏁 Conclusion

This Tic Tac Toe game is simple yet complete.
It demonstrates strong understanding of arrays, loops, conditions, input handling, and modular programming in C.
