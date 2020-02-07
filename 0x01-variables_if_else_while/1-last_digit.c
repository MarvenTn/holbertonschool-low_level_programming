#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Short description, single line
 * @void: Description of parameter x
(*
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
int main(void)
{
int n, ld;
srand(time(0));
n = rand() - RAND_MAX / 2;
ld = n % 10;
if (ld > 5)
{
printf("last digit of %d is %d and is greater than 5\n", n, ld);
}
if (ld < 6)
{
printf("last digit of %d is %d and is less than 6 and not 0\n", n, ld);
}
if (ld == 0)
{
printf("last digit of %d is %d and is 0\n", n, ld);
}
return (0);
}
