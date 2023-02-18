#include <stdio.h>

/**
 * main - Entry point
 *
 * prints the alphabet in lowercase except e and q, followed by a new line
 * Return: 0
 */

int main(void)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'e' || ch == 'q')
{
return (ch++);
}
putchar(ch);
}
putchar('\n');
return (0);
}
