#include "main.h"

/**
 * print_binary - function that prints the binary equivalent of a number
 * by Achakpo Isioma
 *
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int iu, sum = 0;
	unsigned long int current;

	for (iu = 63; iu >= 0; iu--)
	{
		current = n >> iu;

		if (current & 1)
		{
			_putchar('1');
			sum++;
		}
		else if (sum)
			_putchar('0');
	}
	if (!sum)
		_putchar('0');
}
