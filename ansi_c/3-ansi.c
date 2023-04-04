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
	printf("arg1 is now: %d\narg2 is now: %d\n", *px, *py);
}
