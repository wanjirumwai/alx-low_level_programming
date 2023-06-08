#include "main.h"
#include <unistd.h>

/**
 * _putchar -This function will write the character
 * c to standard output
 * @c: This is the element to print
 *
 * Return: If formula is successful 1.
 * if it has an error, -1 is returned, and errno is set correctly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

