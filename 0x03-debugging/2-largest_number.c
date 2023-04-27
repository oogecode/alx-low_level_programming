#include "main.h"

/**
* main - Tests function for  positive or negative
* Return: 0
*/

int main(void)
{
int i;

i = 0;
positive_or_negative(i);

return (0);
}
Iniobong Effiong21:06
#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;
/*
 *while (i < 10)
 *{
 *		putchar(i);
 *}
 */
printf("Infinite loop avoided! \\o/\n");

return (0);
}
Iniobong Effiong21:11
Task 2
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;

if (a > b && a > c)
{
largest = a;
}
else if (a > b && c > a)
{
largest = c;
}
else if (b > c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
}
