#include <stdio.h>

/**
 *main - print a num pair from 00-99 but no repeats (00 01, 00 02, 00 03,...)
 *Return: Always 0 (Success)
 */

int main(void)
{
	int num1;
	int num2;
	int num3;
	int num4;

	for (num1 = '0'; num1 <= '9'; num1++)
	{
		for (num2 = '0'; num2 <= '9'; num2++)
		{
			for (num3 = num1; num3 <= '9'; num3++)
			{
				for (num4 = (num2 + 1); num4 <= '9'; num4++)
				{
					putchar(num1);
					putchar(num2);
					putchar(' ');
					putchar(num3);
					putchar(num4);

					if (!((num1 == '9' && num2 == '8') && (num3 == '9' && num4 == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				num4 = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}
