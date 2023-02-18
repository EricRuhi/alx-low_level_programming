#include <stdio.h>

/**
 * main - Entry point
 *
 * prints the alphabet in lowercase in reverse, followed by a new line
 * Return: 0
 */

int main(void)
{
char ch = 'z';
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
