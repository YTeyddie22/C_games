#include <stdio.h>;
#include <conio.h>;
#include <windows.h>;
#include <stdlib.h>;

char square[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int checkWin();
void drawBoard();

int main()
{
    int player = 1, i, decision;
    char mark;

    do
    {
        drawBoard();
        player = (player % 2 != 0) ? 1 : 2;
        printf("Player %d, enter your decision: ", player);
        scanf("%d", &decision);
        mark = (player == 1) ? 'X' : 'O';

        if (decision == 1 && square[1] == '1')
        {
            square[1] = mark;
        }
        else if (decision == 2 && square[2] == '2')
        {
            square[2] = mark;
        }
        else if (decision == 3 && square[3] == '3')
        {
            square[3] = mark;
        }
        else if (decision == 4 && square[4] == '4')
        {
            square[4] = mark;
        }
        else if (decision == 5 && square[5] == '5')
        {
            square[5] = mark;
        }
        else if (decision == 6 && square[6] == '6')
        {
            square[6] = mark;
        }
        else if (decision == 7 && square[7] == '7')
        {
            square[7] = mark;
        }
        else if (decision == 8 && square[8] == '8')
        {
            square[8] = mark;
        }
        else if (decision == 9 && square[9] == '9')
        {
            square[9] = mark;
        }
        else
        {
            printf("Option is not there !!");
            player--;
            getch();
        }

        i = checkWin();
        player++;

    } while (i == -1);

    drawBoard();
    if (i == 1)
    {
        printf("=> Player %d won", --player);
    }
    else
    {
        printf("=> Game draw");
    }

    getch();
    return 0;
}

//! Drawn Board
void drawBoard()
{
    system("cls");
    printf(" Tic Tac Toe\n\n ");
    printf("Player1 (X) - Player2 (O)\n\n");

    printf("_________________\n");
    printf("  %c |  %c |  %c \n", square[1], square[2], square[3]);
    printf("____|____|_____\n");
    printf("  %c |  %c |  %c \n", square[4], square[5], square[6]);
    printf("____|____|_____\n");
    printf("  %c |  %c |  %c \n", square[7], square[8], square[9]);
    printf("____|____|_____\n");
}

//! Check Winner

int checkWin()
{
    if (square[1] == square[2] && square[2] == square[3])
    {
        return 1;
    }
    else if (square[4] == square[5] && square[5] == square[6])
    {
        return 1;
    }
    else if (square[7] == square[8] && square[8] == square[9])
    {
        return 1;
    }
    else if (square[1] == square[4] && square[4] == square[7])
    {
        return 1;
    }
    else if (square[2] == square[5] && square[5] == square[8])
    {
        return 1;
    }
    else if (square[3] == square[6] && square[6] == square[9])
    {
        return 1;
    }
    else if (square[1] == square[5] && square[5] == square[9])
    {
        return 1;
    }
    else if (square[3] == square[5] && square[5] == square[7])
    {
        return 1;
    }
    else if (
        square[1] != '1' &&
        square[2] != '2' &&
        square[3] != '3' &&
        square[4] != '4' &&
        square[5] != '5' &&
        square[6] != '6' &&
        square[7] != '7' &&
        square[8] != '8' &&
        square[9] != '9')
    {
        return 0;
    }
    else
        return -1;
}
