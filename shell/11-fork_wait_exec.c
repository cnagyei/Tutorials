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
	int wstatus;

	if (ac == 1)
		exit(EXIT_SUCCESS);

	do
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("fork");
			exit(EXIT_FAILURE);
		}
	} while (WIFEXITED(wstatus));
	
	if (execve(av[1], av, NULL) == -1)
		perror("Error: ");
	
	return (0);
}
