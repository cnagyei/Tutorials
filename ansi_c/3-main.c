#include <stdio.h>
#include "main.h"

/**
 * main - Changing arguments using pointers
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b;

	a = 10;
	b = 50;
	printf("Arg 1 is: %d\nArg2 is: %d\n", a, b);

	/* Call swap function */
	swap(&a, &b);

	return (0);
}
