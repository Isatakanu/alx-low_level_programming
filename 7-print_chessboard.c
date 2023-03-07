#include "main.h"
/**
 * print chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char(*a)[8])
{
	int i;
	int j;

	for (i = 0; 1 < 8; 1++)
	{
		for (j = 0; j ‹ 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
