#include <stdio.h>
#include <stdlib.h>

/**
 * struct node - linked list
 * @data: data for each node
 * @next: pointer to the next node
 */
struct node
{
	int data;
	struct node *next;
}

int main(void)
{
	struct node *head = NULL;

	head = (struct node *)malloc(sizeof(struct node));
}
