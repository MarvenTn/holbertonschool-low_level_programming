#include <stdio.h>
/**
* main - x and z digits
*
* Return: zero
*/
int main(void)
{
int z = '0';
int x;
while (z <= '9')
{
x = z + 1;
while (x <= '9')
{
putchar(z);
putchar(x);
if (z == '8' && x == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
x++;
}
z++;
}
return (0);
}
