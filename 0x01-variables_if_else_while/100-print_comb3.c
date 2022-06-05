#include <stdio.h>

/**
 *main - print 00 to 99 with no duplicate digits or combos: no 11, no 10 (01)
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int first_num;
	int second_num;

	for (second_num = '0'; second_num <= '9'; second_num++)
	{
		for (first_num = (second_num + 1); first_num <= '9'; first_num++)
		{
			putchar(second_num);
			putchar(first_num);

			if (second_num != '8' || first_num != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
