#include "main.h"
/**
 *print_diagonal - function that print a diagonal
 *
 *@n: the numbers of time the char \ should be printed
*/
void print_diagonal(int n)
{
	int dgl, sp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (dgl = 0; dgl < n; dgl++)
		{
			for (sp = 0; sp < n; sp++)
			{
				if (sp == dgl)
					_putchar('\\');
				else if (sp < dgl)
					_putchar(' ');
			}
			_putchar ('\n');
		}
	}
}

