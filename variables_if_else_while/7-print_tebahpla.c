#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char teba = 'z';

	while (teba >= 'a')
	{
		putchar(teba);
		teba--;
	}
	putchar('\n');
	return (0);
}
