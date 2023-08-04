#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to unsigned int
 * by Achakpo Isioma
 *
 * @b: pointer to a string containing the binary number
 *
 * Return: the converted number or
 *	 0 if there is one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int iu;
	unsigned int d_v = 0;

	if (!b)
		return (0);

	for (iu = 0; b[iu]; iu++)
	{
		if (b[iu] < '0' || b[iu] > '1')
			return (0);
		d_v = 2 * d_v + (b[iu] - '0');
	}

	return (d_v);
}
