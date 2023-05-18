#include <unistd.h>
#include <fcntl.h>

/**
 * main - Entry point
 *
 * Return: always 1 (success)
*/

int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, msg, 59);
	return (1);
}

