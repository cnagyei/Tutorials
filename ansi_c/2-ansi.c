#include <stdio.h>

/**
 * main - Use pointers without dereferencing
 */
int main(void)
{
	int x = 10;
	int *ip;
	int *iq;

	ip = &x;
	iq = ip;
	printf("The value of x is: %d\n", *ip);
	printf("The value ip is: %p\n", ip);
	printf("The value iq is: %p\n", iq);

	return (0);
}
