#include <stdio.h>
#include <stdbool.h>

#define MAX 20

int board[MAX][MAX];

// Display the chessboard
void printBoard(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == 1)
                printf(" Q ");
            else
                printf(" . ");
        }
        printf("\n");
    }
}

// Check whether a queen can be safely placed at (row, col)
bool isSafe(int row, int col, int n)
{
    int i, j;

    // Check the same column
    for (i = 0; i < row; i++)
        if (board[i][col] == 1)
            return false;

    // Check upper-left diagonal
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j] == 1)
            return false;

    // Check upper-right diagonal
    for (i = row, j = col; i >= 0 && j < n; i--, j++)
        if (board[i][j] == 1)
            return false;

    return true;
}

// Recursive backtracking function to place queens row by row
bool solveNQueens(int row, int n)
{
    // All queens have been placed successfully
    if (row == n)
        return true;

    for (int col = 0; col < n; col++)
    {
        if (isSafe(row, col, n))
        {
            // Place queen
            board[row][col] = 1;

            if (solveNQueens(row + 1, n))
                return true;

            // Backtrack and try another position
            board[row][col] = 0;
        }
    }

    return false;
}

int main()
{
    int n;

    printf("Enter value of N: ");
    scanf("%d", &n);

    // Initialize the board with empty cells
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            board[i][j] = 0;

    if (solveNQueens(0, n))
    {
        printf("Solution found:\n");
        printBoard(n);
    }
    else
    {
        printf("No solution exists for N = %d\n", n);
    }

    return 0;
}