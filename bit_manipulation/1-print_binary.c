#include"main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * @n: input value
 * Return: nothing
**/
void print_binary(unsigned long int n)
{
int i, j = 0;
unsigned long int current;
for (i = 63; i >= 0; i--)
{
current = n >> i;
if (current & 1)
{
putchar('1');
j++;
}
else if (j)
putchar('0');
}
if (!j)
putchar('0');
}
