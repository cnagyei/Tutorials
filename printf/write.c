#include <unistd.h>
#include <stdio.h>

int main()
{
	int count;

	count = write(3, "hello\n", 6);

	printf("%d\n", count);
}
