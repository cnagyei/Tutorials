#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char a[10] = "My School";
    char *s = a;
    char *p = s;

    printf("My School\n");

    while (*p != '\0')
        p++;

    return (0);
}

