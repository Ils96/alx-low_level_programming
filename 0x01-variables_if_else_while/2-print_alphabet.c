#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: this program print letters in lower
 *	case using putchar
 *
 *Return: always 0 (Success)
*/
int main(void)

{
	int letter = 97;

	while (letter <= 122)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
