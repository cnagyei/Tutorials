#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdlib.h>

/**
 * main - fork, wait, and execve examples
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	pid_t child_pid;
	int wstatus, i = 0;

	if (ac == 1)
		exit(EXIT_SUCCESS);

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	
	if (child_pid == 0)
		for (i = 0; i < 5; i++)
		{
			printf("Hello\n");
			if (execve(av[1], av, NULL) == -1)
				perror("Error: ");
			printf("Hello\n");
		}
	else
	{
		wait(&wstatus);
		printf("Parent: all's good now\n");
	}
	
	return (0);
}
