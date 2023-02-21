#include "main.h"

/**
 * print_alphabet - Entry point
 * prints the alphabet, in lowercase, followed by a new line
 *
 * return: 0
 */
void print_alphabet(void)
{
char c = 'a';
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
return;
}
