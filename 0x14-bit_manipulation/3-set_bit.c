#include "main.h"

/**
 * set_bit -This function is used to set a bit in a given index to 1
 * @n: This is the number to change
 * @index: index of the bit to be set to 1 by the function
 *
 * Return: 1 (success), -1 (fail)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
