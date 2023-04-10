#include <stdio.h>

/**
 * _strlen - Calculates the length of a string.
 *
 * @s: Pointer to the string.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	/* Create a copy of the address to s */
	char *p = s;

	while (*p != '\0')
	{
		p++;
	}

	return (p - s);
}

/**
 * main - Main function.
 *
 * Return: Always void.
 */
int main(void)
{	
	int name1 = _strlen("Caleb");
	int name2 = _strlen("I am a believer in Christ");

	printf("%d\n", name1);
	printf("%d\n", name2);

	return (0);
}
