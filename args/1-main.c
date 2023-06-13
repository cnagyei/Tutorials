#include <stdio.h>

int main (int argc, char *argv[])
{
	int count;

	if (argc > 0)
	{
		for (count = 0; count < argc; count++)
			printf("arg[%d] => %s\n", count, argv[count]);
	}
	else
		printf("No arguments to this program");

	return (0);
}
