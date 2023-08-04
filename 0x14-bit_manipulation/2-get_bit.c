#include "main.h"

/**
 * get_bit - function that returns the value of a bit at an index in a number
 * by Achakpo Isioma
 *
 * @n: pointer to number to search
 * @index: index of the bit to get
 *
 * Return: value of the bitat index or
 *	 -1 is an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
