#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	return (len);
}
