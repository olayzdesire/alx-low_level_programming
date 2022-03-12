#include <stdio.h>

/**
 * main -  prints all numbers in 10
 * Description: using putchar
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
