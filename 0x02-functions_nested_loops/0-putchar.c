#include "main.h"
/**
 * main - Entry
 * Description: prints _putchar, new line
 * Return: 0
 */
int main(void)
{
	char *ch = "_putchar";

	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
