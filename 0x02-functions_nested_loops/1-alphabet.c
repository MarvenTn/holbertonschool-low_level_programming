#include <stdio.h>
#include "holberton.h"
/**
*print_alphabet - Entry point
*/
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z';)
{
_putchar(c);
c++;
}
_putchar('\n');
}
