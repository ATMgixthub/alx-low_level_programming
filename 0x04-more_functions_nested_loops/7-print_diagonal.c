#include "main.h"

/**
 * print_diagonal - print character "\" n times
 * @n: number of characters to draw
 */

void print_diagonal(int n)
{
	int line;
	int space;

	if (n > 0)
	{
		for (line = 1; line <= n; line++)
		{
			for (space = 1; space < line; space++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
