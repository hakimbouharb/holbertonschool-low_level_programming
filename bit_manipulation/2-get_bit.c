 #include"main.h"
/**
 *get_bit -  unction that returns the value of a bit at a given index
 * @n: input value
 * @index: input value
 * Return: 1 or -1
**/
int get_bit(unsigned long int n, unsigned int index)
{
int bit;
if (index > 63)
return (-1);
bit = (n >> index) & 1;
return (bit);
}
