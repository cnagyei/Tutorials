#include <stdio.h>

/**
 * point - point on a graph
 */
struct point
{
	int x;
	int y;
};

/**
 * main - entry point
 *
 * Return: 0
 */
int main()
{
	struct point pt;
	struct point maxPoint = {320, 200};

	printf("max x: %d, max y: %d\n", maxPoint.x, maxPoint.y);

	return (0);
}
