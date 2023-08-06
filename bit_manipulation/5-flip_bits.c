#include"main.h"
/**
 *flip_bits - function that flip number to another
 * @n: input value
 * @m: input value
 * Return: the number of bits you need to flip
**/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, j = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;
for (i = 63; i >= 0; i--)
{
current = exclusive >> i;
if (current & 1)
j++;
}
return (j);
}
