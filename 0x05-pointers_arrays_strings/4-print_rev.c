#include "main.h"

/**
 *print_rev - printing a string in reverse
 *
 *@s: input string
*/
void print_rev(char *s)
{
	if (*s != '\0')
	{
		print_rev(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
