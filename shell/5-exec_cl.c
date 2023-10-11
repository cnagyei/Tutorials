#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	printf("Before execve\n");
	if (execve(av[0], av, NULL) != -1)
	{
		perror("Error: ");
	}

	return (0);
}
