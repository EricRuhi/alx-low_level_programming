#include <stdio.h>

/**
 * main - Entry point
 *
 * prints the alphabet in lowercase and uppercase, followed by a new line
 * Return: 0
 */

int main(void)
{
char ch = 'a';
char uc = 'A';
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (uc = 'A'; uc <= 'Z'; uc++)
{
putchar(uc);
}
putchar('\n');
return (0);
}
