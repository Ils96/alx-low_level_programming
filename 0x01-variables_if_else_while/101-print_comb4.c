#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: this program print all possible combiations
 *	of three numbers
 *
 *Return: always 0 (success)
*/
int main(void)
{
	int m, n, z;

	for (m = 0; m <= 7; m++)
	{
		for (n = m + 1; n <= 8; n++)
		{
			for (z = n + 1; z <= 9; z++)
			{
				putchar(m + '0');
				putchar(n + '0');
				putchar(z + '0');
				if (m != 7 || n != 8 || z != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
