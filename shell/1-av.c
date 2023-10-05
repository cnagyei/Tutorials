#include <stdio.h>
#include <unistd.h>

/**
 * main - av
 * @ac: argument count
 * @av: NULL terminated array of strings
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	(void)(ac);
	int i;

	for (i = 0; av[i] != 0; i++)
	{
		printf("%s\n", av[i]);
	}

	return (0);
}
