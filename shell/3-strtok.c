#include <stdio.h>
#include <string.h>

void _strtok(char *s)
{
	const char *restrict b = {"Hi"};
	char *array;

	array = strtok(s, b);
	printf("%d\n", array[0]);
}

int main(int ac, char **av)
{
	_strtok(av[1]);
	return (0);
}
