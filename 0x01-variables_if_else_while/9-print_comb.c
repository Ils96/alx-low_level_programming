#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: this program print number from 0 to 9
 *	separated with commas
 *
 *Return: always 0 (success)
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}
