#include "main.h"

/**
 * is_palindrome - formula that checks if a string is a palindrome
 * @s: string to check
 * @i: Iterator
 * @len: the length of the string
 *
 * Return: 1 if it is a palindrome, 0 it's not
 */
int is_palindrome(char *s, int 1, int len)
{
	if (*(s + 1) != *(s + len - 1))
		return (0);
	if (1 >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
