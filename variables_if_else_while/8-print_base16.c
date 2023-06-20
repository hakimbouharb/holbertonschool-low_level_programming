#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char base = '0';

	while (base <= '9')
	{
		putchar(base);
		base++;
	}
	base = 'a';
	while (base <= 'f')
	{
		putchar(base);
		base++;
	}
	putchar('\n');
	return (0);
}
