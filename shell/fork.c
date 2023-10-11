#include <stdio.h>
#include <unistd.h>

/**
 * main - fork example
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_pid;
	pid_t pid;

	printf("Before fork\n\n");

	/* now fork the process - create a child */
	pid = fork();
	if (pid == -1)
	{
		perror("Error:");
		return (1);
	}

	/* both parent and child will run any program
	 * that comes after forking
	 */
	printf("After fork\n");
	my_pid = getpid();
	printf("My pid is %u\n", my_pid);
	printf("Hello Caleb\n");
	return (0);
}
