#define ALLOCSIZE 10000 /* Define storage size */

static char allocbuf[ALLOCSIZE]; /* Storage for alloc */
static char *allocp = allocbuf; /* Next free position */

/**
 * alloc - Allocate new storage within existing buffer.
 *
 * @n: Size of new storage to allocate within existing buffer.
 *
 * Return: Pointer to n characters.
 */
char *alloc(int n)
{
	if (allocbuf + ALLOCSIZE - allocp >= n) /* It fits */
	{
		/* 
		 * Move allocp from current position to + n
		 * afree(p) will bring allocp p back to where it was befroe
		 * adding n.
		 */
		allocp += n;

		return (allocp - n); 
		/**
		 * Return old allocp - because starting point of pointer
		 *  is what is needed
		 */
	}
	else
		return (0); /* Not enough room */
}

/**
 * afree - Free storage pointed to by a pointer. Merely sets allocp to p if
 * p is inside allocbuf.
 *
 * @p: Pointer to a storage to be freed.
 *
 * Return: Void.
 */
void afree(char *p)
{
	if (p >= allocbuf && p < (allocbuf + ALLOCSIZE))
		allocp = p;
}

int main(void)
{
	char *store;

	store = alloc(20);
	afree(store);
	return (0);
}
