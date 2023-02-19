#include <stdio.h>

/**
 * main - Entry point
 *
 * prints 0 to 9
 * Return: 0
 */

int main(void)
{
int i = 48;
int s = 32;
for (i = 48; i <= 57; i++)
{
if (i > 48 && i != 58)
{
putchar(',');
putchar(s);
}
putchar(i);
}
putchar('\n');
return (0);
}
