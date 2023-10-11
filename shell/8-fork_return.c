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
	pid_t parent_pid;
	pid_t child_pid;
	
	parent_pid = getppid();
	pid_t mypid = getpid();
	printf("parent PID is: %u\n", parent_pid);
	printf("normal PID of this process: %u\n", my_pid);

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	printf("child PID is: %u\n", child_pid);

	return (0);
}
