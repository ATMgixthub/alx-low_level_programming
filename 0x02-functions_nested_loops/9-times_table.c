#include "main.h"

/**
 * times_table - print multiplication table
 */

void times_table(void)
{
	int row;
	int column;
	int multiple;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			multiple = (row * column);

			if (column == 0)
			{
				_putchar('0' + multiple);
			}
			if (multiple <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + multiple);
			}
			if (multiple > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (multiple / 10));
				_putchar('0' + (multiple % 10));
			}
		}
		_putchar('\n');
	}
}
