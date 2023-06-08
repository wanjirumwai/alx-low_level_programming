#include "main.h"

/**
 * flip_bits -This function will show how
 * to count the number of bits to change
 * to get from one number to another
 * @n: Points to the first number
 * @m:Shows the  second number
 *
 * Return: changed bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
