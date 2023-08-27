#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <math.h> /* use -lm flag to compile math library */

#define XMAX 20
#define YMAX 14
/**
 * struct point - point on a graph
 * @x: coordinate of a point
 * @y: coordinate of a point
 */
struct point
{
	int x;
	int y;
};

/**
 * struct rect - define a rectangle
 * @pt1: point of a rectange
 * @pt2: point of a rectangle
 */
struct rect
{
	struct point pt1;
	struct point pt2;
};

/**
 * struct point makepoint - point from x and y components
 * @x: point x
 * @y: point y
 *
 * Return: temp
 */
struct point makepoint(int x, int y)
{
	struct point temp;

	temp.x = x;
	temp.y = y;
	return (temp);
};

#endif /* MAIN_H */
