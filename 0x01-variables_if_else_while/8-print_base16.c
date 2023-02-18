#include <stdio.h>

/**
 * main - Entry point
 *
 * prints all the numbers of base 16 in lowercase, followed by a new line
 * Return: 0
 */

int main(void)
{
int i = 48;
int hx = 57;
for (i = 48; i <= 57; i++)
{
putchar(i);
}
for (hx = 97; hx <= 102; hx++)
{
putchar(hx);
}
putchar('\n');
return (0);
}
