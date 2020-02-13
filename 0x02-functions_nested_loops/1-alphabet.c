#include <stdio.h>
#include "holberton.h"
/**
*  main - Entry point
*
*  Return: Always 0 (success)
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
