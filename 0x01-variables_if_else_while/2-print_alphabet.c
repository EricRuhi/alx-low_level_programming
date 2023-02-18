#include <stdio.h>

/**
 * main - Entry point
 *
 * prints the alphabet in lowercase, followed by a new line
 * Return: 0
 */

int main(void)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
