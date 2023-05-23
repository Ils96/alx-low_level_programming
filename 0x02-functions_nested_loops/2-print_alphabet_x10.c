#include "main.h"
/**
 *print_alphabet_x10 - print 10 times the alphabet
 *	in lowercase
*/
void print_alphabet_x10(void)
{
	int s;
	char lett;

	for (s = 0; s <= 9; s++)
	{
		for (lett = 'a'; lett <= 'z'; lett++)
			_putchar(lett);
		_putchar('\n');
	}
}
