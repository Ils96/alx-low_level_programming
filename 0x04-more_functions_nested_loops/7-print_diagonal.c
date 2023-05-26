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
		_putchar('\n');
	else
	{
		for (dgl = 1; dgl <= n; dgl++)
		{
			for (sp = 1; sp <= dgl; sp++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
