#include <stdio.h>

/**
 * main - A function that accesses and changes objects
 * in another function that called it
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, array[SIZE], getint(int *); /* Declare variables */

	for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++);
}
