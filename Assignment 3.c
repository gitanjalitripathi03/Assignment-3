#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

char board[3][3];

void resetBoard()
{
    int k=1;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            board[i][j] = '0' + k++;
}

void displayBoard()
{
    system("cls");
    printf("\n====== TIC TAC TOE ======\n\n");

    printf("     %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    printf("    ---|---|---\n");
    printf("     %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    printf("    ---|---|---\n");
    printf("     %c | %c | %c\n\n", board[2][0], board[2][1], board[2][2]);
}

int checkWinner()
{
    for(int i=0;i<3;i++)
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2])
            return 1;

    for(int i=0;i<3;i++)
        if(board[0][i]==board[1][i] && board[1][i]==board[2][i])
            return 1;

    if(board[0][0]==board[1][1] && board[1][1]==board[2][2])
        return 1;

    if(board[0][2]==board[1][1] && board[1][1]==board[2][0])
        return 1;

    return 0;
}

int checkDraw()
{
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(board[i][j] != 'X' && board[i][j] != 'O')
                return 0;
    return 1;
}

void playGame()
{
    int player=1, choice, row, col;
    char mark;

    resetBoard();

    while(1)
    {
        displayBoard();

        player = (player % 2) ? 1 : 2;
        printf("Player %d, enter position (1-9): ", player);
        scanf("%d", &choice);

        row = (choice-1) / 3;
        col = (choice-1) % 3;

        if(choice < 1 || choice > 9 || board[row][col]=='X' || board[row][col]=='O')
        {
            printf("Invalid move! Press key...");
            getch();
            continue;
        }

        mark = (player==1) ? 'X' : 'O';
        board[row][col] = mark;

        if(checkWinner())
        {
            displayBoard();
            printf("Player %d WINS!\n", player);
            break;
        }

        if(checkDraw())
        {
            displayBoard();
            printf("Game Draw!\n");
            break;
        }

        player++;
    }
}

int main()
{
    char ch;

    while(1)
    {
        system("cls");
        printf("=== TIC TAC TOE ===\n\nPress any key to start...\n");
        getch();

        playGame();

        printf("\nDo you want to play again (y/n): ");
        fflush(stdin);
        scanf(" %c", &ch);

        if(ch=='n' || ch=='N')
            break;
    }
    return 0;
}