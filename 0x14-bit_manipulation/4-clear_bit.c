#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * by Achakpo Isioma
 *
 * @n: pointer to the number to set
 * @index: index of the bit to set
 *
 * Return: 1 for success, -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
