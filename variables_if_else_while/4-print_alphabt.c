#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alfa = 'a';

	while (alfa <= 'z')
	{
		if (alfa != 'q' && alfa != 'e')
			putchar (alfa);
	}
	putchar ('\n');
	return (0);
}
