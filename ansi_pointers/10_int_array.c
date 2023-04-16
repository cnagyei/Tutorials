#include <stdio.h>

int main(void)
{
	int list[6] = {5, 4, 3, 2, 1, 0};

	printf("%lu\n", sizeof(list));
	printf("%lu\n", sizeof(list) / sizeof(int));
	return (0);
}
