#include <stdio.h>

/**
 * _strcpy - Copies string t to string s.
 *
 * @s: New string copy.
 * @t: Old string to copy.
 *
 * Return: String s.
 */
void _strcpy(char *s, char *t)
{
	while ((*s++ = *t++))
		;
}

/**
 * main - main function.
 *
 * Return: Always Void.
 */
int main(void)
{
	char s1[98];
		
	_strcpy(s1, "I believe in Jesus Christ\n");
	
	printf("%s\n", s1);

	return (0);
}
