#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num == '9')
			break;
		num++;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
