#include "main.h"

/**
 * clear_bit -This function shows us how to
 * set the value of a given bit to 0
 * @n:This is the number to change
 * @index: bit to be cleared
 *
 * Return: 1 (success), -1 (failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
