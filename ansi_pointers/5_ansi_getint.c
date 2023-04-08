#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int getch(void);
void ungetch(int);

/**
 * getint - get next integer from input into *pn
 *
 * @pn: Pointer to the input
 *
 * Return: c.
 */
int getint(int *pn)
{
	int c, sign;
	
	while (isspace(c = getch())); /* Skip white space */

	if (!isdigit(c) && c != EOF && c != '+' && c != '-')
	{
		ungetch(c); /* It's not a number */
		return (0);
	}

	sign = (c == '-') ? -1 : 1; /* Works like if-else */
	if (c == '+' || c == '-')
		c = getch();
	for (*pn = 0; isdigit(c); c = getch())
		*pn = 10 * *pn + (c - '0');
	*pn *= sign;
	if (c != EOF)
		ungetch(c);

	return (c);
}
