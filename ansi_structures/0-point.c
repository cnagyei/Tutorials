#include "main.h"

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	double dist, sqrt(double);
	struct point pt;
	struct point maxPoint = {320, 200};

	printf("max x: %d, max y: %d\n", maxPoint.x, maxPoint.y);
	printf("max x: %d, max y: %d\n", pt.x, pt.y);
	printf("=====\n");

	dist = sqrt((double)pt.x * pt.x + (double)pt.y * pt.y);
	printf("sqrt = %f\n", dist);
	printf("=====\n");

	/* declare a screen */
	struct rect screen;

	screen.pt1.x = 500;
	screen.pt1.y = 30;
	printf("point 1 x: %d and point 1 y: %d\n", screen.pt1.x, screen.pt1.y);

	/* declare a middle point */
	struct point middle;
	struct point makepoint (int, int);
	return (0);
}
