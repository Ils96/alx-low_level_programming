#include "main.h"

/**
 * more_numbers - print more numbers
*/
void more_numbers(void)
{
	int i, l, z;

	for (l = 0; l <= 10; l++)
	{
		for (z = 0; z <= 14; z++)
		{
			i = z;
			if (z > 9)
			{
				_putchar(1 + 48);
				i = z % 10;
			}
			_putchar(i + 48);
		}
		_putchar('\n');
	}
}


