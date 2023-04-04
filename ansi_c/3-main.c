#include <stdio.h>
#include "main.h"

/**
 * main - Changing arguments using pointers
 *
 * Return: Always 0.
 */
int main(void)
{
	int arg1, arg2;

	arg1 = 10;
	arg2 = 50;
	printf("/* Print initial values of arg1 and arg2 */\n");
	printf("arg1 is: %d\narg2 is: %d\n", arg1, arg2);

	printf("\n");
	printf("/* Call swap function */\n");
	swap(&arg1, &arg2);
	
	printf("\n");
	printf("/* Check values of arg1 and arg2 one more time */\n");
	printf("arg1 is: %d\narg2 is: %d\n", arg1, arg2);

	return (0);
}
