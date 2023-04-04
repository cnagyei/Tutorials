#include <stdio.h>
#include "main.h"

/**
 * swap - Changing arguments using pointers.
 *
 * Return: Void.
 */
void swap(int *px, int *py)
{
	int temp;

	temp = *px;
	*px = *py;
	*py = temp;
	printf("Arg 1 is now: %d\nArg2 is now: %d\n", *px, *py);
}
