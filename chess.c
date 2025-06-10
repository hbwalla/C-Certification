#include <stdio.h>

int main()
{
	
	char board[8][8];
	int row, column;

    for (row = 0; row < 8; row++) {
        switch(row) {
            case 0: {
                for (column = 0; column < 8; column++) {
                    if (column == 0 || column == 7) board[row][column] = 'R';
                    else if (column == 1 || column == 6) board[row][column] = 'N';
                    else if (column == 2 || column == 5) board[row][column] = 'B';
                    else if (column == 3) board[row][column] = 'Q';
                    else if (column == 4) board[row][column] = 'K';
                }

                break;
            }

            case 1: {
                for (column = 0; column < 8; column++) board[row][column] = 'P';

                break;
            }

            case 6: {
                for (column = 0; column < 8; column++) board[row][column] = 'P';

                break;
            }

            case 7: {
                for (column = 0; column < 8; column++) {
                    if (column == 0 || column == 7) board[row][column] = 'R';
                    else if (column == 1 || column == 6) board[row][column] = 'N';
                    else if (column == 2 || column == 5) board[row][column] = 'B';
                    else if (column == 3) board[row][column] = 'Q';
                    else if (column == 4) board[row][column] = 'K';
                }

                break;
            }

        }
    }
    
    for (column = 0; column < 8; column++) printf("%c", board[0][column]);
	
	return 0;
}