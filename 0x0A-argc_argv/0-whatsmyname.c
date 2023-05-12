#include "main.h"
#include <stdio.h>

/**
 * main - formula that prints the name of the program
 * @argc: nunber of arguements in the program
 * @argv: array of arguements in the program
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])

{
	printf("%s\n", *argv);
	return (0);
}
