#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need
 *		 to flip to get from one number to another
 * by Achakpo Isioma
 *
 * @n: first unsigned long integer
 * @m: second unsigned long integer
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int iu, sum = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (iu = 63; iu >= 0; iu--)
	{
		current = exclusive >> iu;
		if (current & 1)
			sum++;
	}

	return (sum);
}
