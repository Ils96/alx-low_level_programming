#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: this program print alphabet in reverse
 *
 *Return: always 0 (success)
*/
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
