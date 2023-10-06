#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * main - av
 * @ac: argument count
 * @av: NULL terminated array of strings
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	char *buffer = NULL;
	size_t n = 0;
	ssize_t line;

	printf("$ ");
	line = getline(&buffer, &n, stdin);
	printf("%s\n", buffer);
	printf("Number of characters read: %lu\n", line);

	free(buffer);

	return (0);
}
