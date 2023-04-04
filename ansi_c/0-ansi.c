#include <stdio.h>

/**
 * main - Pointers
 *
 * Return: Always 0.
 */
int main(void)
{
	/* The operator & gives the address of an object */
	/* The operator * accesses the object */

	int x = 1;
	int y = 2;
	int z[10];
	int *ip;	/* ip is a pointer to int */

	ip = &x;	/* ip now points to x */
	y = *ip;	/* y is now 1 */
	*ip = 0;	/* x is now 0 */
	ip = &z[0];	/* ip now points to z[0] */

	return (0);
}
