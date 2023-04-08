#include <stdio.h>

/**
 * main - Pointers
 */
int main(void)
{
	int x = 10;
	int *ip;
	int y, z;
	
	ip = &x;
	*ip = *ip + 10;
	printf("The value of x is: %d\n", *ip);

	/* Unary operators * and & bind more tightly than
	 * arithmetic opeartors */
	y = *ip + 1;
	printf("The value of y is the value of x + 1: %d\n", y);

	z = ++*ip;	/* ++*ip is same as (*ip)++ */
	printf("The value of z is the value of x incremented: %d\n", z);

	/* Parenthesis in (*ip)++ is important because uninary operators
	 * like * and ++ associate right to left */
		
	return (0);
}
