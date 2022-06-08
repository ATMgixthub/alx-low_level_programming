#include "main.h"

/**
 * print_times_table - print multiplication table up to n
 * @n: integer argument
 */

void print_times_table(int n)
{
	int row;
	int column;
	int multiple;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				multiple = (row * column);
				
				if (column == 0)
				{
					_putchar('0' + multiple);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					if ( multiple <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + multiple);
					}
					else if (multiple > 9 && multiple < 100)
					{
						_putchar(' ');
						_putchar('0' + (multiple / 10));
						_putchar('0' + (multiple % 10));
					}
					else if (multiple >= 100)
					{
						_putchar('0' + (multiple / 100));
						_putchar('0' + ((multiple / 10) % 10));
						_putchar('0' + (multiple % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
