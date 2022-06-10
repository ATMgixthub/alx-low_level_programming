#include "main.h"

/**
 * print_line - print the character "_" n times to draw a line
 * @n: number of characters to draw
 */

void print_line(int n)
{
	int print_n_times;

	for (print_n_times = n; print_n_times > 0; print_n_times--)
		_putchar('_');

	_putchar('\n');
}

