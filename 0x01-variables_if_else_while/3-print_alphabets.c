#include <stdio.h>
/**
*  main - Entry point
*
*  Return: Always 0 (success)
*/
int main(void)
{
char ca;
char cb;
for (ca = 'a'; ca <= 'z';)
{
putchar(ca);
ca++;
}
for (cb = 'A' ; cb <= 'Z';)
{
putchar(cb);
cb++;
}
putchar('\n');
return (0);
}
